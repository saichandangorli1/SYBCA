<?php

$numbers = array(12, 7, 3, 9, 4, 15, 8, 11);

$max_number = $numbers[0];
$min_number = $numbers[0];

for ($i = 1; $i < count($numbers); $i++) {
    if ($numbers[$i] > $max_number) {
        $max_number = $numbers[$i];
    }
    if ($numbers[$i] < $min_number) {
        $min_number = $numbers[$i];
    }
}

echo "Maximum number: " . $max_number . "\n";
echo "Minimum number: " . $min_number . "\n";
?>
