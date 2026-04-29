# 11. Write a Python function multiply_list(lst) that multiplies all elements of a list
# and returns the result.

def multiply_list(lst):
    if not lst:
        return 1  # Return 1 for an empty list (multiplicative identity)
    product = 1  # Initialize product to 1
    for num in lst:
        if isinstance(num, (int, float)):  # Check if the element is a number
            product *= num  # Multiply the number to the product
    return product

# Example usage:
numbers = [2, 3, 4]
print(f"The product of the elements in the list is: {multiply_list(numbers)}")  # Output: 24

