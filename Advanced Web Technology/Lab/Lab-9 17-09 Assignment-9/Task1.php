<?php
$array1 = array(1, 2, 3, 4, 5);
$array2 = array(3, 4, 5, 6, 7);

// i. Merge both arrays
$merged = array_merge($array1, $array2);
echo "Merged Array:\n";
print_r($merged);

echo "<br>";
// ii. Find the difference of two arrays
$difference = array_diff($array1, $array2);
echo "Difference (array1 - array2):\n";
print_r($difference);

echo "<br>";
// iii. Create associative array using above arrays
$assoc = array_combine($array1, $array2);
echo "Associative Array:\n";
print_r($assoc);


echo "<br>";
// iv. Create array with common elements
$common = array_intersect($array1, $array2);
echo "Common Elements:\n";
print_r($common);
?>
