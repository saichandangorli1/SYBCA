# 3. Write a Python function tuple_sum(t) that accepts a tuple of integers and returns the
# sum of all elements.

def tuple_sum(t):
    total = 0  # Initialize total to 0
    for num in t:
        if isinstance(num, int):  # Check if the element is an integer
            total += num  # Add the integer to the total
    return total
# Example usage:
numbers_tuple = (1, 2, 3, 4, 5)
print(f"The sum of the elements in the tuple is: {tuple_sum(numbers_tuple)}")  # Output: 15