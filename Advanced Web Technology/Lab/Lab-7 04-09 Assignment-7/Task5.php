<?php
$numbers = array(10, 20, 15, 5, 30);

$sum2 = 0;
for ($i = 0; $i < count($numbers); $i++) {
    $sum2 += $numbers[$i];
}
echo "Sum using for loop: $sum2<br>";
$sum3 = 0;


foreach ($numbers as $num) {
    $sum3 += $num;
}
echo "Sum using foreach loop: $sum3<br>";
?>
