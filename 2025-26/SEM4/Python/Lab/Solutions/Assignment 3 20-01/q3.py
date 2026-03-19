text = input("Enter a string: ")

print("Character\tASCII Value")
print("-" * 25)

for char in text:
    ascii_val = ord(char)
    print(f"   {char}\t\t   {ascii_val}")