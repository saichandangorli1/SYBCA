# Write a Python program to find common elements among three sets.

set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}
set3 = {5, 6, 7, 8, 9}

commonElems = set1.intersection(set2).intersection(set3)
print("Common elements among three sets:", commonElems)