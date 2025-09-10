<?php

$numbers = array(12, 7, 3, 9, 4, 15, 8, 11);

$even_count = 0;
$odd_count = 0;

foreach ($numbers as $num) {
    if ($num % 2 == 0) {
        $even_count++;
    } else {
        $odd_count++;
    }
}


echo "Even numbers: " . $even_count . "\n";
echo "Odd numbers: " . $odd_count . "\n";
?>
