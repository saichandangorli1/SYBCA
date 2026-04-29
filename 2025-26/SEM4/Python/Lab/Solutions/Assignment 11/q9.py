# Q9. (10 Marks)
# Perform Mathematical Functions:
# • sqrt(), power(), log(), exp()
# 👉 Apply on a NumPy array and interpret results


import numpy as np
# Create a NumPy array
array = np.array([1, 2, 3, 4, 5])
# Apply mathematical functions
sqrt_result = np.sqrt(array)
power_result = np.power(array, 2)

log_result = np.log(array)
exp_result = np.exp(array)

# Print results
print("Original Array:", array)
print("Square Root:", sqrt_result)
print("Power (squared):", power_result)
print("Logarithm:", log_result)
print("Exponential:", exp_result)


# Output:   
# Original Array: [1 2 3 4 5]
# Square Root: [1.         1.41421356 1.73205081 2.         2.23606798]
# Power (squared): [ 1  4  9 16 25]
# Logarithm: [0.         0.69314718 1.098
# 61229 1.38629436 1.60943791]
# Exponential: [  2.71828183   7.3890561   20.08553692  54.59815003 148.4131591 ]

