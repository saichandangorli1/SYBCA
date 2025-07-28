<!-- 5)Create a PHP script called student_profile.php that does the following:
Define variables for:
Student name:
Roll number:
Marks in 3 subjects:
Calculate total marks and average:
Print the student's details in a formatted output: -->

<?php
$student_name = "Saichandan Gorli";
$roll_number = "000000000";
$marks_subject1 = 55;
$marks_subject2 = 60;
$marks_subject3 = 78;
$total_marks = $marks_subject1 + $marks_subject2 + $marks_subject3;
$average_marks = $total_marks / 3;
echo "Student Name: $student_name<br>";
echo "Roll Number: $roll_number<br>";
echo "Marks in Subject 1: $marks_subject1<br>";
echo "Marks in Subject 2: $marks_subject2<br>";
echo "Marks in Subject 3: $marks_subject3<br>";
echo "Total Marks: $total_marks<br>";
echo "Average Marks: $average_marks<br>";
?>