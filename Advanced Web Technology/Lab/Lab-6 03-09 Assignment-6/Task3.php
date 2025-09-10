<!-- 3)	Write a PHP program to accept sentence from user and count number of vowels, consonants, digits and special symbols from it using regular expression. using preg_match function -->

<?php
function countCharacters($input) {
    $vowels = preg_match_all('/[aeiouAEIOU]/', $input);
    $consonants = preg_match_all('/[^aeiouAEIOU]/', $input);
    $digits = preg_match_all('/[0-9]/', $input);
    $specialSymbols = preg_match_all('/[^a-zA-Z0-9\s]/', $input);
    
    return [
        'vowels' => $vowels,
        'consonants' => $consonants,
        'digits' => $digits,
        'specialSymbols' => $specialSymbols
    ];
}
$input = "SaichandanGorli@mitwpu.edu.in";
$result = countCharacters($input);
echo "Vowels: " . $result['vowels'] . "\n";
echo "Consonants: " . $result['consonants'] . "\n";
echo "Digits: " . $result['digits'] . "\n";
echo "Special Symbols: " . $result['specialSymbols'] . "\n";
?>