<?php
$strings = array("Mumbai", "Pune", "Delhi", "Goa", "Chennai", "Bhopal");

$maxStr = $strings[0];
$minStr = $strings[0];

foreach ($strings as $str) {
    if (strlen($str) > strlen($maxStr)) {
        $maxStr = $str;
    }
    if (strlen($str) < strlen($minStr)) {
        $minStr = $str;
    }
}

echo "String with maximum length: $maxStr\n";
echo "<br>";
echo "String with minimum length: $minStr\n";
?>
