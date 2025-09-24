<!-- 3.	Write a PHP class called Student with properties as name, course, and marks of three subjects. Implement a method to display student information with sum and percentage. -->

<?php
class Student {
    public $name;
    public $course;
    public $marks1;
    public $marks2;
    public $marks3;

    function set($name, $course, $marks1, $marks2, $marks3) {
        $this->name = $name;
        $this->course = $course;
        $this->marks1 = $marks1;
        $this->marks2 = $marks2;
        $this->marks3 = $marks3;
    }
    function displayDetails() {
        $totalMarks = $this->marks1 + $this->marks2 + $this->marks3;
        $percentage = ($totalMarks / 300) * 100; 

        echo "Student Name: " . $this->name . "\n";
        echo "Course: " . $this->course . "\n";
        echo "Marks: " . $this->marks1 . ", " . $this->marks2 . ", " . $this->marks3 . "\n";
        echo "Total Marks: " . $totalMarks . "\n";
        echo "Percentage: " . number_format($percentage, 2) . "%\n";
    }
}
$student = new Student();
$student->set("Saichandan Gorli", "Computer Science", 85, 90, 78);
$student->displayDetails();
?>