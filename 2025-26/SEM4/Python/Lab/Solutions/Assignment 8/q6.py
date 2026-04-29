# 6. Write a Python function dict_sum(d) that accepts a dictionary containing numeric
# values and returns the sum of all the values.

def dict_sum(d):
    total = 0  # Initialize total to 0
    for value in d.values():  # Loop through the dictionary values
        if isinstance(value, (int, float)):  # Check if the value is numeric (int or float)
            total += value  # Add the numeric value to the total
    return total

# Example usage:
my_dict = {'a': 10, 'b': 20, 'c': 30, 'd': 'not a number'}
print(f"The sum of the numeric values in the dictionary is: {dict_sum(my_dict)}")  # Output: 60

