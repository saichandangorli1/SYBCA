# Q5. – Series vs DataFrame & Analysis
# Create:
# • One Series
# • One DataFrame
# Perform:
# 1. Convert Series into DataFrame
# 2. Apply statistical functions (mean, max, min)
# 3. Explain diSerence between Series and DataFrame with output
# 4. Display shape and structure of DataFrame

import pandas as pd
# Create a Series
series_data = [10, 20, 30, 40, 50]
series = pd.Series(series_data, name='Numbers')

# Create a DataFrame
data = {
    'Name': ['Alice', 'Bob'],
    'Age': [25, 30],
    'Marks': [85, 90]
}
df = pd.DataFrame(data)
# 1. Convert Series into DataFrame
df_from_series = series.to_frame()
# 2. Apply statistical functions (mean, max, min)
mean_value = series.mean()
max_value = series.max()
min_value = series.min()


# 4. Display shape and structure of DataFrame
print("Series:\n", series)
print("\nDataFrame:\n", df)
print("\nDataFrame created from Series:\n", df_from_series)
print("\nMean of Series:", mean_value)
print("Max of Series:", max_value)
print("Min of Series:", min_value)
print("\nShape of DataFrame:", df.shape)
print("Structure of DataFrame:\n", df.info())
# Output:
# Series:
# 0    10
# 1    20
# 2    30
# 3    40
# 4    50
# DataFrame:
#       Name  Age  Marks
# 0    Alice   25     85
# 1      Bob   30     90
# DataFrame created from Series:
#    Numbers
# 0       10
# 1       20
# 2       30
# 3       40
# 4       50
# Mean of Series: 30.0
# Max of Series: 50
# Min of Series: 10
# Shape of DataFrame: (2, 3)
# Structure of DataFrame:
# <class 'pandas.core.frame.DataFrame'>
