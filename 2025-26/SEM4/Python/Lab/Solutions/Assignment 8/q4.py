# 4. Write a Python function find_element(t, key) that checks whether a given
# element exists in a tuple or not and returns True or False.

def find_element(t, key):
    for element in t:
        if element == key:  # Check if the current element matches the key
            return True  # Return True if the element is found
    return False  # Return False if the element is not found after checking all elements

# Example usage:
my_tuple = (1, 2, 3, 4, 5)
key_to_find = 3
print(f"Does the element {key_to_find} exist in the tuple? {find_element(my_tuple, key_to_find)}")  # Output: True