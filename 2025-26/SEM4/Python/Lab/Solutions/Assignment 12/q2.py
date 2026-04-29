# Q2. – Series Filtering & Handling Missing Values
# Create a Series with some missing values (NaN).
# Perform:
# 1. Identify missing values
# 2. Remove missing values
# 3. Replace missing values with a constant
# 4. Filter values greater than a given number

import pandas as pd
# Create a Series with some missing values (NaN)
data = [10, 20, None, 40, 50, None]
series_with_nan = pd.Series(data)
# 1. Identify missing values
missing_values = series_with_nan.isna()
# 2. Remove missing values
series_without_nan = series_with_nan.dropna()
# 3. Replace missing values with a constant (e.g., 0)
series_filled = series_with_nan.fillna(0)
# 4. Filter values greater than a given number (e.g., 25)
filtered_series = series_with_nan[series_with_nan > 25]
# Print results
print("Original Series with NaN:\n", series_with_nan)
print("\nMissing Values (True indicates NaN):\n", missing_values)
print("\nSeries without NaN:\n", series_without_nan)
print("\nSeries with NaN replaced by 0:\n", series_filled)
print("\nFiltered Series (values greater than 25):\n", filtered_series)
# Output:
# Original Series with NaN:
# 0    10.0
# 1    20.0
# 2     NaN
# 3    40.0
# 4    50.0
# 5     NaN
# Missing Values (True indicates NaN):

# 0    False
# 1    False
# 2     True
# 3    False
# 4    False
# 5     True

# Series without NaN:
# 0    10.0
# 1    20.0
# 3    40.0
# 4    50.0
# Series with NaN replaced by 0:
# 0    10.0
# 1    20.0
# 2     0.0
# 3    40.0
# 4    50.0
# 5     0.0

# Filtered Series (values greater than 25):
# 3    40.0
# 4    50.0

    
    