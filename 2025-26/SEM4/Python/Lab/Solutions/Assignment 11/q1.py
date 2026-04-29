# Q1. Create a NumPy ndarray:
# • Create 1D and 2D arrays
# • Print shape, size, and datatype
# Perform basic arithmetic operations

import numpy as np
# Create a 1D array
array_1d = np.array([1, 2, 3, 4, 5])
# Create a 2D array
array_2d = np.array([[1, 2, 3], [4, 5, 6]])

# Print shape, size, and datatype of the 1D array
print("1D Array:")
print("Array:", array_1d)
print("Shape:", array_1d.shape)
print("Size:", array_1d.size)
print("Datatype:", array_1d.dtype)

# Print shape, size, and datatype of the 2D array

print("\n2D Array:")
print("Array:\n", array_2d)
print("Shape:", array_2d.shape)
print("Size:", array_2d.size)
print("Datatype:", array_2d.dtype)
# Perform basic arithmetic operations
# Addition
add_result = array_1d + 10
print("\nAddition (1D Array + 10):", add_result)
# Multiplication
mul_result = array_2d * 2
print("Multiplication (2D Array * 2):\n", mul_result)
# Subtraction
sub_result = array_1d - 1
print("Subtraction (1D Array - 1):", sub_result)
# Division
div_result = array_2d / 2
print("Division (2D Array / 2):\n", div_result)

# Output:
# 1D Array: 
# Array: [1 2 3 4 5]
# Shape: (5,)
# Size: 5
# Datatype: int64

# 2D Array:
# Array:
# [[1 2 3]
#  [4 5 6]]
# Shape: (2, 3)
# Size: 6
# Datatype: int64

# Addition (1D Array + 10): [11 12 13 14 15]
# Multiplication (2D Array * 2):
# [[ 2  4  6]
#  [ 8 10 12]]
# Subtraction (1D Array - 1): [0 1 2 3 4]
# Division (2D Array / 2):
# [[0.5 1.  1.5]
#  [2.  2.5 3. ]]
