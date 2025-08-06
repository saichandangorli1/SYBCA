<?php
for ($i = 1; $i <= 4; $i++) {
    for ($j = 0; $j < $i; $j++) {
        echo chr(65 + $j) . " ";
    }
    echo "<br>";
}
?>
