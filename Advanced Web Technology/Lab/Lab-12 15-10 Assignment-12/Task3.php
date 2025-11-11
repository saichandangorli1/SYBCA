<!-- 3.	Create three classes — Class Teacher, Class Representative, and Student — where Class Representative extends Class Teacher, and Student Class Representative. Demonstrate method overriding at each level. -->
<?php
class Teacher {
    public $name;
    public $subject;

    public function setDetails($name, $subject) {
        $this->name = $name;
        $this->subject = $subject;
    }

    public function displayInfo() {
        echo "Teacher Name: " . $this->name . "\n";
        echo "Subject: " . $this->subject . "\n";
    }
}
class ClassRepresentative extends Teacher {
    public $classSection;

    public function setClassSection($classSection) {
        $this->classSection = $classSection;
    }

    public function displayInfo() {
        parent::displayInfo();
        echo "Class Section: " . $this->classSection . "\n";
    }
}
class Student extends ClassRepresentative {
    public $studentName;
    public $rollNumber;

    public function setStudentDetails($studentName, $rollNumber) {
        $this->studentName = $studentName;
        $this->rollNumber = $rollNumber;
    }

    public function displayInfo() {
        parent::displayInfo();
        echo "Student Name: " . $this->studentName . "\n";
        echo "Roll Number: " . $this->rollNumber . "\n";
    }
}
$student = new Student();
$student->setDetails("Mr. Smith", "Mathematics");
$student->setClassSection("10-A");
$student->setStudentDetails("John Doe", 23);
$student->displayInfo();
?>