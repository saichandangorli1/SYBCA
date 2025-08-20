<?php
function repeatStr($text, $times) {
    if ($times <= 0) {
        echo "Please enter a positive number.";
        return;
    }

    for ($i = 0; $i < $times; $i++) {
        echo $text . " ";
    }
}

repeatString("Saichandan", 5);
?>
