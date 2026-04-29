# 5. Write a Python function display_details(**kwargs) that prints all the key-value
# pairs passed as keyword arguments.

def display_details(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")
# Example usage:
display_details(name="Alice", age=20, course="Computer Science")
# Output:
# name: Alice
# age: 20
# course: Computer Science


