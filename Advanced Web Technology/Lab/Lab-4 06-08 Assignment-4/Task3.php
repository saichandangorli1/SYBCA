<?php
$num = 16;
$isPrime = true;
$count = 0;

if ($num <= 1) {
    $isPrime = false;
} else {
    for ($i = 1; $i <= $num; $i++) {
        if ($num % $i == 0) {
            $count++;
        }
    }
}

if ($count ==2) {
    echo "$num is a prime number.";
} else {
    echo "$num is not a prime number.";
}
?>
