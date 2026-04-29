# Write a Python program to generate a random number between 1 and 100 and check
# whether it is even or odd.

import random  # Import the random module to generate random numbers
random_number = random.randint(1, 100)  # Generate a random number between 1 and 100
if random_number % 2 == 0:  # Check if the number is even
    print(f"The random number {random_number} is even.")  # Output if the number is even
else:  # If the number is not even, it must be odd
    print(f"The random number {random_number} is odd.")  # Output if the number is odd
    
# Example output: The random number 42 is even. (or The random number 57 is odd.)
