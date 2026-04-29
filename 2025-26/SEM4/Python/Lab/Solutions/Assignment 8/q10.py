# 10. Write a Python function count_vowels(text) that counts and returns the number of
# vowels in a given string.

def count_vowels(text):
    vowels = 'aeiouAEIOU'  # Define a string containing all vowels (both lowercase and uppercase)
    count = 0  # Initialize count to 0
    for char in text:  # Loop through each character in the input string
        if char in vowels:  # Check if the character is a vowel
            count += 1  # Increment count for each vowel found
    return count  # Return the total count of vowels

# Example usage:
input_string = "Hello, World!"
print(f"The number of vowels in the string is: {count_vowels(input_string)}")  # Output: 3

