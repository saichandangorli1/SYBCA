# Q1.Create a Pandas Series using:
# • A list
# • A dictionary
# Perform the following:
# 1. Assign custom index
# 2. Access elements using labels and positions
# 3. Perform arithmetic operation on Series
# 4. Display index, values, and data type

import pandas as pd
# Create a Pandas Series using a list
list_data = [10, 20, 30, 40, 50]
series_from_list = pd.Series(list_data, index=['A', 'B', 'C', 'D', 'E'])
# Create a Pandas Series using a dictionary
dict_data = {'X': 100, 'Y': 200, 'Z': 300}
series_from_dict = pd.Series(dict_data)
# Access elements using labels and positions
label_access = series_from_list['C']  # Access using label
position_access = series_from_list[2]  # Access using position
# Perform arithmetic operation on Series
arithmetic_result = series_from_list + 5  # Add 5 to each element
# Display index, values, and data type
print("Series from List:\n", series_from_list)
print("\nSeries from Dictionary:\n", series_from_dict)
print("\nAccess using label 'C':", label_access)
print("Access using position 2:", position_access)
print("\nArithmetic Result (Series + 5):\n", arithmetic_result)

print("\nIndex of Series from List:", series_from_list.index)
print("Values of Series from List:", series_from_list.values)
print("Data type of Series from List:", series_from_list.dtype)
print("\nIndex of Series from Dictionary:", series_from_dict.index)
print("Values of Series from Dictionary:", series_from_dict.values)
print("Data type of Series from Dictionary:", series_from_dict.dtype)

# Output:
# Series from List:
# A    10
# B    20
# C    30
# D    40
# E    50
# Series from Dictionary:
# X    100
# Y    200
# Z    300
# Access using label 'C': 30
# Access using position 2: 30
# Arithmetic Result (Series + 5):
# A    15
# B    25
# C    35
# D    45
# E    55
# Index of Series from List: Index(['A', 'B', 'C', 'D
# E'], dtype='object')
# Values of Series from List: [10 20 30 40 50]
# Data type of Series from List: int64
# Index of Series from Dictionary: Index(['X', 'Y', 'Z'], dtype='object')
# Values of Series from Dictionary: [100 200 300]
# Data type of Series from Dictionary: int64

