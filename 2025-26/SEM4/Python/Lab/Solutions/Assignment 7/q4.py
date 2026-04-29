# 4. Write a Python function sum_numbers(*args) that accepts any number of integers
# and returns their sum using variable-length arguments.

def sum_numbers(*args):
    return sum(args)
# Example usage:
print(sum_numbers(1, 2, 3))  # Output: 6
print(sum_numbers(4, 5))     # Output: 9
print(sum_numbers(10, 20, 30, 40))  # Output: 100

