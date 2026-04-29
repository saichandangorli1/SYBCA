# Write a Python program to demonstrate hierarchical package structure with at least one
# sub-package and import a module from it.

# Create a hierarchical package structure:
# my_package/
# ├── __init__.py
# ├── sub_package/
# │   ├── __init__.py
# │   └── module.py

# my_package/sub_package/module.py
def greet(name):
    return f"Hello, {name}!"  # Function to greet a person by name
# main_program.py
from my_package.sub_package.module import greet  # Import the greet function from the module in the sub-package
name = "Alice"  # Example name to greet
greeting = greet(name)  # Call the greet function with the name
print(greeting)  # Output: Hello, Alice!

