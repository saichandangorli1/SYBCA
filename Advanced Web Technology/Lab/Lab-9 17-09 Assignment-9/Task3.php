<?php
// Associative array: course name => course code
$courses = array(
    "AWT" => "BCA1001",
    "DSC" => "BCA1002",
    "LA" => "BC1003",
    "PEACE" => "BCA1004",
    "PBL" => "BCA1005"
);

// i. Change all keys to uppercase
$upperKeys = array_change_key_case($courses, CASE_UPPER);
echo "Keys in UPPERCASE:\n";
print_r($upperKeys);

echo "<br>";

// ii. Change all keys to lowercase
$lowerKeys = array_change_key_case($courses, CASE_LOWER);
echo "Keys in lowercase:\n";
print_r($lowerKeys);
echo "<br>";
// iii. Change keys to values and vice versa
$flipped = array_flip($courses);
echo "Keys and values swapped:\n";
print_r($flipped);
echo "<br>";
?>
