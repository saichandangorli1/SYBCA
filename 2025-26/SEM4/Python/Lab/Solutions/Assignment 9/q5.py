# Write a Python program to find:
# ● Square root
# ● Power
# ● Logarithm
# of a given number using the math module

import math as m

number = 16  # Define the number for which we want to calculate the square root, power, and logarithm
square_root = m.sqrt(number)
power = m.pow(number, 2)
logarithm = m.log(number)

print(f"Square root of {number}: {square_root}")
print(f"Power of {number}: {power}")
print(f"Logarithm of {number}: {logarithm}")

# Output:
# Square root of 16: 4.0
# Power of 16: 256.0
# Logarithm of 16: 2.772588722239781

