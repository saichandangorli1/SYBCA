# 3. Write a Python function power(base, exponent=2) to calculate the power of a
# number using a default argument.

def power(base, exponent=2):
    return base ** exponent
# Example usage:
print(power(3))  # Output: 9 (3 raised to the power of 2)
print(power(3, 3))  # Output: 27 (3 raised to the power of 3)
