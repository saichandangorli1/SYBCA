<?php
$number = 30; 
if ($number % 10 == 0) {
    echo "$number is divisible by 10.<br>";
    if ($number % 20 == 0) {
        echo "$number is also divisible by 20.";
    } else {
        echo "$number is not divisible by 20.";
    }
} else {
    echo "$number is not divisible by 10.";
}
?>