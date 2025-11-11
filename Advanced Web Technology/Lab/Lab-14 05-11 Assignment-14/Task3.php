<!-- 3.	Write a PHP code to read the contends of file. -->

<?php
$fp = fopen("D:/t.txt","r");
$content = fread($fp,filesize("D:/t.txt"));
echo "Contents of the file:<br>";
echo $content;
fclose($fp) ;
?>