<?php

    $sentence = $_POST["sentence"];
    $parts = preg_split("/[-\\s]/", $sentence, 4);
    foreach ($parts as $part) {
        echo $part . "<br>";
    }

?>
