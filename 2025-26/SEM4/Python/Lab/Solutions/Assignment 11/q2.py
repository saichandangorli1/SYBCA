# Q2. Explain and demonstrate Vectorization Operation:
# • Perform addition of two arrays using:
# 1. Loop
# 2. NumPy vectorization
# Compare outputs and execution logic.

import numpy as np
# Create two arrays
array_a = np.array([1, 2, 3, 4, 5])
array_b = np.array([10, 20, 30, 40, 50])
# 1. Addition using a loop
result_loop = []
for i in range(len(array_a)):
    result_loop.append(array_a[i] + array_b[i])
print("Result using loop:", result_loop)
# 2. Addition using NumPy vectorization
result_vectorized = array_a + array_b
print("Result using NumPy vectorization:", result_vectorized)
# Output:
# Result using loop: [11, 22, 33, 44, 55]
# Result using NumPy vectorization: [11 22 33 44 55]
