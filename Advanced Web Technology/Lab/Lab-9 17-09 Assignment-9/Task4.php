<?php
// Indexed array with 7 elements (includes duplicates)
$arr = array("BCA1001", "BCA1002", "BCA1003", "BCA1004", "BCA1005", "BCA1001", "BCA1003");

// i. Remove duplicate values from array
$uniqueArr = array_unique($arr);
echo "Array after removing duplicates:\n";
print_r($uniqueArr);

echo "<br>";
// ii. Create an array with 3 elements from index 2
$slicedArr = array_slice($arr, 2, 3);
echo "Array slice from index 2 (length 3):\n";
print_r($slicedArr);

echo "<br>";

// iii. Add one element at the end of array using array_push()
array_push($arr, "BCA1006");
echo "Array after adding one element at end:\n";
print_r($arr);

echo "<br>";

// iv. Delete the element from beginning of array
array_shift($arr);
echo "Array after removing first element:\n";
print_r($arr);
?>
