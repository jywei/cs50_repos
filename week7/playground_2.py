from sklearn import datasets
digits = datasets.load_digits()

print(digits.images[0])

plt.figure()
plt.imshow(digits.images[0], cmap = plt.cm.gray_r, interpolation = 'nearest')
plt.show()
