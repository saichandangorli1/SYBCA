<?php
$languages = array("PHP", "Java", "Python", "C++");


echo "Using foreach loop:<br>";
foreach ($languages as $lang) {
    echo $lang . "<br>";
}


echo "<br>";

echo "Using for loop:<br>";
for ($i = 0; $i < count($languages); $i++) {
    echo $languages[$i] . "<br>";
}
?>
