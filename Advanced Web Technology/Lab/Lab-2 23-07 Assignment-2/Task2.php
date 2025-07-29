<!-- 2)	Write a PHP code to find area and perimeter of a circle using constant. -->

<?php

// $radius = $_POST["radius"];
$radius = 2;

  $area = 3.14159 * $radius * $radius;

  $perimeter = 2 * 3.14159 * $radius;

  echo "Area: " . $area . "<br>";
  echo "Perimeter: " . $perimeter . "<br>";

?>