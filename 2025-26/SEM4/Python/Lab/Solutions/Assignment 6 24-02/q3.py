# Write a Python program to check whether one set is a subset of another set.
set1 = {1, 2, 3}
set2 = {1, 2, 3, 4, 5}

if set1.issubset(set2):
    print("Set1 is a subset of Set2")
else:    print("Set1 is not a subset of Set2")