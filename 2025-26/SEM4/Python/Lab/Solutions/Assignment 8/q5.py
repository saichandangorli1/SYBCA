# 5. Write a Python function dict_keys(d) that takes a dictionary as input and prints all
# its keys using a loop.

def dict_keys(d):
    for key in d:  # Loop through the dictionary keys
        print(key)  # Print each key
# Example usage:
my_dict = {'name': 'Alice', 'age': 30, 'city': 'New York'}
print("The keys in the dictionary are:")
dict_keys(my_dict)  # Output: name, age, city (each on a new line)

