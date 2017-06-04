corpus = ['I love CS50. Staff is awesome, awesome, awesome!',
          'I have a dog and a cat.',
          'Best of CS50? Staff. And cakes. Ok, CS50 staff.',
          'My dog keeps chasing my cat. Dogs!'] # This represents a list of strings in Python

# Create bags-of-words matrix
from sklearn.feature_extraction.text import CountVectorizer
count_vect = CountVectorizer(stop_words = 'english')
Z = count_vect.fit_transform(corpus)
# The function fit_transform() takes as input a list of strings and does two things:
# first, it "fits the model," i.e., it builds the vocabulary; second, it transforms the data into a matrix.

vocab = count_vect.get_feature_names()
print(vocab)

Z.todense() # Generate a dense matrix from Z, which is stored as a sparse matrix data-type

# Create tf–idf matrix
from sklearn.feature_extraction.text import TfidfVectorizer
vectorizer = TfidfVectorizer(stop_words = 'english')
X = vectorizer.fit_transform(corpus)

X.todense()

k = 2 # Define the number of clusters in which we want to partion THE data
# Define the proper notion of distance to deal with documents
from sklearn.metrics.pairwise import cosine_similarity
from sklearn.cluster import KMeans
dist = 1 - cosine_similarity(X)
# Run the algorithm KMeans
model = KMeans(n_clusters = k)
model.fit(X);

print("Top terms per cluster:\n")
order_centroids = model.cluster_centers_.argsort()[:, ::-1]
terms = vectorizer.get_feature_names()
for i in range(k):
    print ("Cluster %i:" % i, end='')
    for ind in order_centroids[i, :3]:
        print (' %s,' % terms[ind], end='')
    print ("")

