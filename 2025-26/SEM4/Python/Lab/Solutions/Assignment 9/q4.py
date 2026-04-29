# Create a user-defined module with a function to check whether a number is even or odd.
# Import and use it in another program

# # user_defined_module.py
# def check_even_odd(number):
#     if number % 2 == 0:
#         return "Even"
#     else:
#         return "Odd"
    
# main_program.py
from user_defined_module import check_even_odd  # Import the function from the user-defined module

number = 10  # Example number to check
result = check_even_odd(number)  # Call the function to check if the number is even or odd
print(f"The number {number} is: {result}")  # Output: The number 10 is: Even