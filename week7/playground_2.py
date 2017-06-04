import numpy as np
import matplotlib.pyplot as plt
# To configure matplotlib to embed the plots in the output cells of the present notebook
# %matplotlib notebook

X = np.array([[1,1], [2,2.5], [3,1.2], [5.5,6.3], [6,9], [7,6], [8,8]]) # Define numpy array of two-dim points
plt.figure()
plt.scatter(X[:,0], X[:,1], s = 170, color = 'black') # Plot points with slicing syntax X[:,0] and X[:,1]
plt.show()

from sklearn.cluster import KMeans

k = 2 # Define the number of clusters in which we want to partion the data
kmeans = KMeans(n_clusters = k) # Run the algorithm kmeans
kmeans.fit(X);
centroids = kmeans.cluster_centers_ # Get centroid's coordinates for each cluster
labels = kmeans.labels_ # Get labels assigned to each data

colors = ['r.', 'g.'] # Define two colors for the plot below
plt.figure()
for i in range(len(X)):
    plt.plot(X[i,0], X[i,1], colors[labels[i]], markersize = 30)
plt.scatter(centroids[:,0],centroids[:,1], marker = "x", s = 300, linewidths = 5) # Plot centroids
plt.show()

k = 3
kmeans = KMeans(n_clusters = k)
kmeans.fit(X);
centroids = kmeans.cluster_centers_
labels = kmeans.labels_
colors = ['r.', 'g.', 'y.']
plt.figure()
for i in range(len(X)):
    plt.plot(X[i,0], X[i,1], colors[labels[i]], markersize = 30)
plt.scatter(centroids[:,0],centroids[:,1], marker = "x", s = 300, linewidths = 5)
plt.show()

k = 7
kmeans = KMeans(n_clusters = k)
kmeans.fit(X);
centroids = kmeans.cluster_centers_
labels = kmeans.labels_
colors = ['r.', 'g.', 'y.', 'c.', 'b.', 'k.', 'm.']
plt.figure()
for i in range(len(X)):
    plt.plot(X[i,0], X[i,1], colors[labels[i]], markersize = 30)
plt.scatter(centroids[:,0],centroids[:,1], marker = "x", s = 300, linewidths = 5)
plt.show()

