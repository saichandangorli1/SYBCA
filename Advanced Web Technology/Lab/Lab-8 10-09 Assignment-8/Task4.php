<?php

$array1 = array(2, 5, 8, 3, 6);
$array2 = array(4, 7, 1, 9, 5);

$sum_array = array();


for ($i = 0; $i < 5; $i++) {
    $sum_array[$i] = $array1[$i] + $array2[$i];
}

echo "Sum of two arrays: ";
for ($i = 0; $i < 5; $i++) {
    echo $sum_array[$i] . " ";
}
?>
