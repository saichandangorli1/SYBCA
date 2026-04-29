# Q3. DataFrame Creation & Column Operations
# Create a DataFrame with columns: Name, Age, Marks
# Perform:
# 1. Display the DataFrame
# 2. Access single and multiple columns
# 3. Add a new column “Grade”
# 4. Modify existing column values

import pandas as pd
# Create a DataFrame with columns: Name, Age, Marks
data = {
    'Name': ['Alice', 'Bob'],
    'Age': [20, 21],
    'Marks': [85, 90]
}
df = pd.DataFrame(data)
# 1. Display the DataFrame
print("Original DataFrame:\n", df)
# 2. Access single and multiple columns
single_column = df['Name']  # Access single column
multiple_columns = df[['Name', 'Marks']]  # Access multiple columns
# 3. Add a new column “Grade”
def calculate_grade(marks):
    if marks >= 90:
        return 'A'
    elif marks >= 80:
        return 'B'
    elif marks >= 70:
        return 'C'
    else:
        return 'D'
df['Grade'] = df['Marks'].apply(calculate_grade)
# 4. Modify existing column values (e.g., increase Marks by 5)
df['Marks'] = df['Marks'] + 5
# Display the modified DataFrame
print("\nModified DataFrame:\n", df)
# Output:
# Original DataFrame:
#       Name  Age  Marks

# 0    Alice   20     85
# 1      Bob   21     90
# Modified DataFrame:
#       Name  Age  Marks Grade
# 0    Alice   20     90     B
# 1      Bob   21     95     A
    
