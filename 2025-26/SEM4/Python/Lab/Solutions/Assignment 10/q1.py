# 1. Create a class Student with the following:
# • Attributes: name, roll_no, marks
# • Method to display student details
# • Method to calculate grade based on marks
# Create at least 3 objects and display their details.

class Student:
    def __init__(self, name, roll_no, marks):
        self.name = name  # Initialize the name attribute
        self.roll_no = roll_no  # Initialize the roll number attribute
        self.marks = marks  # Initialize the marks attribute

    def display_details(self):
        print(f"Name: {self.name}, Roll No: {self.roll_no}, Marks: {self.marks}")  # Method to display student details

    def calculate_grade(self):
        if self.marks >= 90:
            return 'A'  # Grade A for marks 90 and above
        elif self.marks >= 80:
            return 'B'  # Grade B for marks between 80 and 89
        elif self.marks >= 70:
            return 'C'  # Grade C for marks between 70 and 79
        elif self.marks >= 60:
            return 'D'  # Grade D for marks between 60 and 69
        else:
            return 'F'  # Grade F for marks below 60
        
# Create at least 3 objects and display their details
student1 = Student("Alice", 1, 95)
student2 = Student("Bob", 2, 85)
student3 = Student("Charlie", 3, 75)

student1.display_details()
print(f"Grade: {student1.calculate_grade()}")  # Output: Grade: A
student2.display_details()
print(f"Grade: {student2.calculate_grade()}")  # Output: Grade: B
student3.display_details()
print(f"Grade: {student3.calculate_grade()}")  # Output: Grade: C



    