<!-- 5)	Write a PHP code to accept student details as student prn, name, marks of three subjects. Calculate total and percentage. If Percentage >=40 display “Pass” else display “Fail”. -->



<?php
    
        $prn = $_POST['prn'];
        $name = $_POST['name'];
        $marks1 = $_POST['marks1'];
        $marks2 = $_POST['marks2'];
        $marks3 = $_POST['marks3'];

        $total = $marks1 + $marks2 + $marks3;
        $percentage = ($total / 300) * 100;

        echo "<h3>Result for PRN: $prn, Name: $name</h3>";
        echo "Total Marks: $total<br>";
        echo "Percentage: " . $percentage . "%<br>";

        if ($percentage >= 40) {
            echo "Status: Pass";
        } else {
            echo "Status: Fail";
        }
    
    ?>