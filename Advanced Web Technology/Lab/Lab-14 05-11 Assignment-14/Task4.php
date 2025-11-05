<!-- 4.	Write a PHP code to display file contents line by line and display number of line present in the text file. -->
<?php
$fp = fopen("D:/t.txt", "r");
$lineNumber = 0;
while(!feof($fp)){
    $line = fgets($fp);
    $lineNumber++;
    echo $line;
}

echo "<br>Total number of lines: " . $lineNumber;
fclose($fp);
?>