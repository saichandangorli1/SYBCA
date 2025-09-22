<?php

    // $name = $_POST['name'];
    // $prn = $_POST['prn'];
    // $s1 = $_POST['subject1'];
    // $s2 = $_POST['subject2'];
    // $s3 = $_POST['subject3'];
    // $result = $s1 + $s2 + $s3;
    // $percentage = ($result / 300) * 100;

    // echo "Name: " . $name . "<br>";
    // echo "PRN: " . $prn . "<br>";
    // echo "Total Marks: " . $result . "<br>";
    // echo "Percentage: " . $percentage . "%<br>";


    class Student{
        public $name;
        public $prn;
        public $s1;
        public $s2;
        public $s3;
        public $result;
        public $percentage;

        function get_result($name, $prn, $s1, $s2, $s3){
            $this->name = $name;
            $this->prn = $prn;
            $this->s1 = $s1;
            $this->s2 = $s2;
            $this->s3 = $s3;
            $this->result = $s1 + $s2 + $s3;
            $this->percentage = ($this->result / 300) * 100;
        }

        function display_result(){
            echo "Name: " . $this->name . "<br>";
            echo "PRN: " . $this->prn . "<br>";
            echo "Total Marks: " . $this->result . "<br>";
            echo "Percentage: " . $this->percentage . "%<br>";
        }

    }

    $student1 = new Student();
    $student1->get_result($_POST['name'], $_POST['prn'], $_POST['subject1'], $_POST['subject2'], $_POST['subject3']);
    $student1->display_result();
    
?>