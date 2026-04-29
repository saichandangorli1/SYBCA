# 7. Write a Python function set_union(a, b) that accepts two sets as arguments and
# returns their union

def set_union(a, b):
    if not isinstance(a, set) or not isinstance(b, set):
        raise ValueError("Both arguments must be sets")  # Ensure both arguments are sets
    return a.union(b)  # Return the union of the two sets

# Example usage:
set1 = {1, 2, 3, 4}
set2 = {3, 4, 5, 6}
print(f"The union of the sets is: {set_union(set1, set2)}")  # Output: {1, 2, 3, 4, 5, 6}

