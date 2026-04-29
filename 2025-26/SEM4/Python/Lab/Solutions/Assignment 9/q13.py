# Create a package named calculator with modules:
# ● add.py
# ● multiply.py
# Import and use both modules in a main program

# # calculator/add.py
# def add(a, b):
#     return a + b  # Function to perform addition

# # calculator/multiply.py
# def multiply(a, b):
#     return a * b  # Function to perform multiplication

# main_program.py
from calculator.add import add  # Import the add function from the add module
from calculator.multiply import multiply  # Import the multiply function from the multiply module
num1 = 10
num2 = 5
addition_result = add(num1, num2)  # Perform addition
multiplication_result = multiply(num1, num2)  # Perform multiplication

print(f"The sum of {num1} and {num2} is: {addition_result}")  # Output: The sum of 10 and 5 is: 15
print(f"The product of {num1} and {num2} is: {multiplication_result}")  # Output: The product of 10 and 5 is: 50

