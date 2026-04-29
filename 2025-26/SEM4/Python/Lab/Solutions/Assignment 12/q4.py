# Q4. – Row Access & Filtering
# Using a DataFrame:
# 1. Access rows using loc[] and iloc[]
# 2. Display first and last rows
# 3. Filter rows where Marks > 80
# 4. Display a specific value using row and column index

import pandas as pd
# Create a DataFrame with columns: Name, Age, Marks
data = {
    'Name': ['Alice', 'Bob'],
    'Age': [20, 21],
    'Marks': [85, 90]
}
df = pd.DataFrame(data)
# 1. Access rows using loc[] and iloc[]
loc_row = df.loc[0]  # Access first row using loc
iloc_row = df.iloc[0]  # Access first row using iloc
# 2. Display first and last rows
first_row = df.head(1)  # First row
last_row = df.tail(1)  # Last row
# 3. Filter rows where Marks > 80
filtered_rows = df[df['Marks'] > 80]
# 4. Display a specific value using row and column index (e.g., Marks of the first row)
specific_value = df.at[0, 'Marks']  # Using row and column labels
# Print results
print("Row accessed using loc[]:\n", loc_row)
print("\nRow accessed using iloc[]:\n", iloc_row)
print("\nFirst row of the DataFrame:\n", first_row)
print("\nLast row of the DataFrame:\n", last_row)
print("\nFiltered rows where Marks > 80:\n", filtered_rows)
print("\nSpecific value (Marks of the first row):", specific_value)
# Output:
# Row accessed using loc[]:
# Name     Alice
# Age         20
# Marks       85
# Row accessed using iloc[]:
# Name     Alice
# Age         20
# Marks       85
# First row of the DataFrame:
#       Name  Age  Marks
# 0    Alice   20     85
# Last row of the DataFrame:
#       Name  Age  Marks
# 1      Bob   21     90
# Filtered rows where Marks > 80:
#       Name  Age  Marks
# 0    Alice   20     85
# 1      Bob   21     90
# Specific value (Marks of the first row): 85

    