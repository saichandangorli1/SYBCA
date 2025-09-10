<?php

$students = array(
    "Student1" => 82.5,
    "Student2" => 76.0,
    "Student3" => 91.2,
    "Student4" => 84.7,
    "Student5" => 69.4
);


foreach ($students as $name => $percentage) {
    echo "Student: " . $name . " - Percentage: " . $percentage . "%<br>";
}
?>
