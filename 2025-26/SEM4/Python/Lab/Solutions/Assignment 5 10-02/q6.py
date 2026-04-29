# 6. Write a Python program to create a new list containing only even numbers from an existing list using list comprehension.

numbers = [12, 45, 2, 9, 16, 33, 20]

even_numbers = [num for num in numbers if num % 2 == 0]

print("Original List:", numbers)
print("Even Numbers:", even_numbers)\
    
    # Output:
    # Original List: [12, 45, 2, 9, 16
    # , 33, 20]
    # Even Numbers: [12, 2, 16, 20]
    