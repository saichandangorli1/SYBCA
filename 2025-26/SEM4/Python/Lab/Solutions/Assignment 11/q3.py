# Q3. Write a program to demonstrate:
# • Array Indexing
# • Array Slicing
# Extract:
# • First row
# • Last column
# • Sub-matrix

import numpy as np
# Create a 2D array
array_2d = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
# Array Indexing
first_row = array_2d[0]
print("First row:", first_row)
# Array Slicing
last_column = array_2d[:, -1]
print("Last column:", last_column)
# Extracting a sub-matrix (2x2 from the top-left corner)
sub_matrix = array_2d[0:2, 0:2]
print("Sub-matrix (2x2 from top-left corner):\n", sub_matrix)
# Output:
# First row: [1 2 3]
# Last column: [3 6 9]
# Sub-matrix (2x2 from top-left corner):
# [[1 2]
#  [4 5]]

