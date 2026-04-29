# Q5. Write a program to:
# • Save an array to a file using savetxt()
# • Load it back using loadtxt()
# Verify if original and loaded arrays are same.

import numpy as np
# Create an array
original_array = np.array([[1, 2, 3], [4, 5, 6]])
# Save the array to a file
np.savetxt('array_file.txt', original_array, fmt='%d')
# Load the array back from the file
loaded_array = np.loadtxt('array_file.txt', dtype=int)
# Verify if original and loaded arrays are the same
if np.array_equal(original_array, loaded_array):
    print("The original and loaded arrays are the same.")
    
else:
    print("The original and loaded arrays are different.")
# Output:
# The original and loaded arrays are the same.
