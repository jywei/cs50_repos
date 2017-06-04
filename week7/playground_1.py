import numpy as np
import matplotlib.pyplot as plt
# Configure matplotlib to embed the plots in the output cells of the present notebook
# %matplotlib notebook

X_train = np.array([[1,1], [2,2.5], [3,1.2], [5.5,6.3], [6,9], [7,6]]) # Define numpy array of two-dim points
Y_train = ['red', 'red', 'red', 'blue', 'blue', 'blue'] # Define a Python built-in list (i.e., array) of strings

print(X_train[5,0]) # Extract the 0-th coordinate of the 5-th point in the array
print(X_train[5,1]) # Extract the 1-st coordinate of the 5-th point in the array

print(X_train[:,0]) # Extract all elements in the 1-st coordinate (indexed by 0) of the array X_train
print(X_train[:,1]) # Extract all elements in the 2-st coordinate (indexed by 1) of the array X_train

plt.figure() # Define a new figure
plt.scatter(X_train[:,0], X_train[:,1], s = 170, color = Y_train[:]) # Plot points with Python slicing syntax
plt.show() # Display plot

X_test = np.array([3,4])

plt.figure() # Define a new figure
plt.scatter(X_train[:,0], X_train[:,1], s = 170, color = Y_train[:])
plt.scatter(X_test[0], X_test[1], s = 170, color = 'green')
plt.show() # Display plot

def dist(x, y):
    return np.sqrt(np.sum((x - y)**2)) # np.sqrt and np.sum are numpy functions to work with numpy arrays

num = len(X_train) # Compute the number of points in X_train
distance = np.zeros(num) # Initialize a numpy arrays of zeros
for i in range(num):
    distance[i] = dist(X_train[i], X_test) # Compute distance from X_train[i] to X_test
print(distance)

distance = np.sqrt(np.sum((X_train - X_test)**2, axis = 1)) # Vectorization syntax
print(distance)

min_index = np.argmin(distance) # Get the index with smallest distance
print(min_index)
print(Y_train[min_index])
