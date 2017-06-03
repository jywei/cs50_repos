import numpy as np
import matplotlib.pyplot as plt

X_train = np.array([[1,1], [2,2.5], [3,1.2], [5.5,6.3], [6,9], [7,6]]) # Define numpy array of two-dim points
Y_train = ['red', 'red', 'red', 'blue', 'blue', 'blue'] # Define a Python built-in list (i.e., array) of strings

print(X_train[5,0]) # Extract the 0-th coordinate of the 5-th point in the array
print(X_train[5,1]) # Extract the 1-st coordinate of the 5-th point in the array

print(X_train[:,0]) # Extract all elements in the 1-st coordinate (indexed by 0) of the array X_train
print(X_train[:,1]) # Extract all elements in the 2-st coordinate (indexed by 1) of the array X_train

plt.figure() # Define a new figure
plt.scatter(X_train[:,0], X_train[:,1], s = 170, color = Y_train[:]) # Plot points with Python slicing syntax
plt.show() # Display plot
