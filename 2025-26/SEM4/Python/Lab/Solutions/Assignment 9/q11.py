# Write a Python program to generate 5 random numbers without repetition from a list
# using random.sample().


import random  # Import the random module to use the sample function
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]  # Define a list of numbers
random_numbers = random.sample(numbers, 5)  # Generate 5 random numbers without repetition
print(f"The 5 random numbers without repetition are: {random_numbers}.")  # Output: The 5 random numbers without repetition are: [3, 7, 1, 9, 5] (or any random selection of 5 numbers from the list)