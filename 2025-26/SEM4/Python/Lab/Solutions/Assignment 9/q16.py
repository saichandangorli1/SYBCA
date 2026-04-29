# Write a Python program to demonstrate the use of __init__.py in a package.

# Create a package structure:
# my_package/
# ├── __init__.py
# ├── module1.py
# └── module2.py
# my_package/__init__.py
# This file can be empty or can contain initialization code for the package
# my_package/module1.py
def function1():
    return "This is function 1 from module 1."  # Function in module 1 that returns a string
# my_package/module2.py
def function2():
    return "This is function 2 from module 2."  # Function in module 2 that returns a string
# main_program.py
from my_package.module1 import function1  # Import function1 from module1
from my_package.module2 import function2  # Import function2 from module2

result1 = function1()  # Call function1 and store the result
result2 = function2()  # Call function2 and store the result
print(result1)  # Output: This is function 1 from module 1.
print(result2)  # Output: This is function 2 from module 2.

