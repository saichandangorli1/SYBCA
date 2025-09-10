<!-- 4)	Write a PHP code to replace one string to another using regular expression.using normal preg_replace -->

<?php
function replaceString($input, $search, $replace) {
    $result = preg_replace($search, $replace, $input);
    return $result;
}
$input = "Hello this is Chandan";
$search = "/Chandan/i";
$replace = "Saichandan";
$result = replaceString($input, $search, $replace);
echo $result; 
?>

