<<<<<<< HEAD
<!-- Write a PHP code to replace one string to another using regular expression -->

<?php
$original = "I love MIT-World Peace University!";
$replaced = preg_replace('/MIT-World Peace University/', 'MIT-WPU', $original);
echo $replaced;
?>
 
=======
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

>>>>>>> f67e526c8daf7b0dae0c244eb1b874fb07dcbbd0
