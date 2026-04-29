# Q4. Perform Transposing and Swapping Axes:
# • Use transpose() and swapaxes()
# 👉 Show difference between both with examples.

import numpy as np
# Create a 2D array
array_2d = np.array([[1, 2, 3], [4, 5, 6]])
# Transpose the array
transposed_array = array_2d.transpose()
print("
Transposed Array:\n", transposed_array)
# Swap axes (swap rows and columns)
swapped_array = array_2d.swapaxes(0, 1)
print("Swapped Axes Array:\n", swapped
_array)
# Output:
# Transposed Array:
# [[1 4]
#  [2 5]
#  [3 6]]

# Swapped Axes Array:
# [[1 4]
#  [2 5]
#  [3 6]]
# Explanation:
