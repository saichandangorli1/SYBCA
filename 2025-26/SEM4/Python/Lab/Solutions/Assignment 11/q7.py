# Q7. Write a program to demonstrate:
# • sum(), mean(), std(), var()
# Apply on both:
# • Entire array
# • Axis-wise (row/column)

import numpy as np
# Create a 2D array
array_2d = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
# Entire array operations
total_sum = np.sum(array_2d)
mean_value = np.mean(array_2d)
std_dev = np.std(array_2d)
variance = np.var(array_2d)
print("Entire Array Operations:")
print("Sum:", total_sum)
print("Mean:", mean_value)
print("Standard Deviation:", std_dev)
print("Variance:", variance)

# Axis-wise operations
# Sum along columns (axis=0)
column_sum = np.sum(array_2d, axis=0)
# Mean along rows (axis=1)
row_mean = np.mean(array_2d, axis=1)
print("\nAxis-wise Operations:")
print("Sum along columns:", column_sum)
print("Mean along rows:", row_mean)
# Output:
# Entire Array Operations:
# Sum: 45
# Mean: 5.0
# Standard Deviation: 2.581988897471611
# Variance: 6.666666666666667
# Axis-wise Operations:
# Sum along columns: [12 15 18]
# Mean along rows: [2. 5. 8.]

