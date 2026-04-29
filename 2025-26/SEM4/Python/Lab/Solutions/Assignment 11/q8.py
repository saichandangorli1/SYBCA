# Q8. Write a program using:
# • min(), max(), argmin(), argmax()
# Explain output indices clearly.

import numpy as np
# Create a 2D array
array_2d = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
# Find minimum and maximum values
min_value = np.min(array_2d)
max_value = np.max(array_2d)
print("Minimum value in the array:", min_value)
print("Maximum value in the array:", max_value)
# Find indices of minimum and maximum values

argmin_index = np.argmin(array_2d)
argmax_index = np.argmax(array_2d)
print("Index of minimum value (flattened):", argmin_index)
print("Index of maximum value (flattened):", argmax_index)

# output:
# Minimum value in the array: 1
# Maximum value in the array: 9
# Index of minimum value (flattened): 0
# Index of maximum value (flattened): 8
