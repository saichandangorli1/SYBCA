# Q6. Demonstrate Universal Functions (ufuncs):
# • Use at least 5 functions like:
# o add, subtract, multiply, sqrt, sin
# Show element-wise operations

import numpy as np
# Create two arrays
array_a = np.array([1, 2, 3, 4, 5])
array_b = np.array([10, 20, 30, 40, 50])
# 1. Addition
add_result = np.add(array_a, array_b)
print("Addition (array_a + array_b):", add_result)
# 2. Subtraction
subtract_result = np.subtract(array_b, array_a)
print("Subtraction (array_b - array_a):", subtract_result)
# 3. Multiplication
multiply_result = np.multiply(array_a, array_b)
print("Multiplication (array_a * array_b):", multiply_result)
# 4. Square root
sqrt_result = np.sqrt(array_a)
print("Square root of array_a:", sqrt_result)
# 5. Sine
sin_result = np.sin(array_a)
print("Sine of array_a:", sin_result)
# Output:
# Addition (array_a + array_b): [11 22 33 44 55]
# Subtraction (array_b - array_a): [ 9 18 27 36 45]
# Multiplication (array_a * array_b): [ 10  40  90 160 250]
# Square root of array_a: [1.         1.41421356 1.73205081 2.         2.23606798]
# Sine of array_a: [ 0.84147098  0.90929743  0.14112001 -0.7568025  -0.95892427]
