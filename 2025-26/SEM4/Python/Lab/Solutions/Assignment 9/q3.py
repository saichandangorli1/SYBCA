# Write a Python program to import a module using an alias name and perform addition and
# subtraction using functions defined in that module.

import math as m  # Import the math module with an alias 'm'
def add(a, b):
    return a + b  # Function to perform addition
def subtract(a, b):
    return a - b  # Function to perform subtraction

# Example usage:
num1 = 10
num2 = 5
addition_result = m.add(num1, num2)  # Perform addition
subtraction_result = m.subtract(num1, num2)  # Perform subtraction
print(f"The sum of {num1} and {num2} is: {addition_result}")  # Output: The sum of 10 and 5 is: 15
print(f"The difference between {num1} and {num2} is: {subtraction_result}")  # Output: The difference between 10 and 5 is: 5

    