<?php
// Create indexed array
$colors = array("Red", "Green", "Blue", "Yellow");

// Display using for loop
echo "Using for loop:<br>";
for ($i = 0; $i < count($colors); $i++) {
    echo $colors[$i] . "<br>";
}

echo "<br>Using foreach loop:<br>";
foreach ($colors as $color) {
    echo $color . "<br>";
}

echo "<br>Using print_r():<br>";
print_r($colors);
?>
