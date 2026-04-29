# 9. Write a Python function reverse_string(text) that takes a string as an argument
# and returns the reversed string

def reverse_string(text):
    reversed_text = ""  # Initialize an empty string to store the reversed text
    for char in text:  #  Loop through each character in the input string
        reversed_text = char + reversed_text  # Prepend the character to the reversed_text
    return reversed_text  # Return the final reversed string
# Example usage:
input_string = "Hello, World!"
print(f"The reversed string is: {reverse_string(input_string)}")  # Output: !dlroW ,olleH