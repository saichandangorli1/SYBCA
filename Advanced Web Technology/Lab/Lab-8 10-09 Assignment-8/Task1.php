<?php
$numbers = array(1,2,3,4,5,6,7,8,9,10);
$reversed = array_reverse($numbers);
echo "Array elements in reverse order:\n";
foreach($reversed as $num) {
    echo $num . " ";
}
?>
