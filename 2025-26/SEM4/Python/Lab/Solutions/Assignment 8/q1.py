# 1. Write a Python function max_list(lst) that accepts a list of numbers as an argument
# and returns the largest number in the list.

def max_list(lst):
    if not lst:
        return None  # Return None for an empty list
    max_num = lst[0]  # Initialize max_num with the first element
    for num in lst:
        if num > max_num:
            max_num = num  # Update max_num if a larger number is found
    return max_num

# Example usage:
numbers = [3, 5, 7, 2, 8]
print(f"The largest number in the list is: {max_list(numbers)}")  # Output: 8
