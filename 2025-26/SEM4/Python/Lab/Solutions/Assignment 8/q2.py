# 2. Write a Python function count_even(lst) that takes a list as input and returns the
# count of even numbers present in the list.
def count_even(lst):
    count = 0  # Initialize count to 0
    for num in lst:
        if isinstance(num, int) and num % 2 == 0:  # Check if the number is an integer and even
            count += 1  # Increment count for each even number found
    return count

# Example usage:
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(f"The count of even numbers in the list is: {count_even(numbers)}")  # Output: 5
