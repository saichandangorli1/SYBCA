<!-- 5.	Write a PHP code to display text file contends character by character. Also count number of characters present in the text file -->
<?php
$fp = fopen("D:/t.txt", "r");
$cc = 0;

while(!feof($fp)){
    $char = fgetc($fp);
    echo $char;
    $cc++;
}
echo "<br>Total number of characters: " . $cc;
fclose($fp);
?>