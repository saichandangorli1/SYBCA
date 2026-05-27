<<<<<<< HEAD
<!--  Write a PHP code to accept sentence from user as “MIT-World Peace University” and split the sentence in four parts. -->

<?php
$sentence = "MIT-World Peace University";
$parts = preg_split('/[\s-]/', $sentence);

foreach ($parts as $index => $part) {
    echo "Part " . ($index + 1) . ": $part\n";
}
=======
<?php

    $sentence = $_POST["sentence"];
    $parts = preg_split("/[-\\s]/", $sentence, 4);
    foreach ($parts as $part) {
        echo $part . "<br>";
    }

>>>>>>> f67e526c8daf7b0dae0c244eb1b874fb07dcbbd0
?>
