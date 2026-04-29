# 10. Write a lambda function with filter() to display only the even numbers from a
# list.

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
# Example usage:
print(even_numbers)  # Output: [2, 4, 6, 8, 10]

