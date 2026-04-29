# 8. Write a Python function unique_elements(lst) that accepts a list and returns a set
# containing unique elements from the list

def unique_elements(lst):
    unique_set = set()  # Initialize an empty set to store unique elements
    for item in lst:
        unique_set.add(item)  # Add each item from the list to the set (duplicates will be ignored)
    return unique_set
# Example usage:
my_list = [1, 2, 3, 4, 2, 5, 1, 6]

print(f"The unique elements in the list are: {unique_elements(my_list)}")  # Output: {1, 2, 3, 4, 5, 6} 

