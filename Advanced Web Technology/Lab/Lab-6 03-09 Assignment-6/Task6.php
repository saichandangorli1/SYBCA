<?php
    $name = $_POST["emp_name"];
    $date = $_POST["join_date"];
    $arr = preg_split("/-/", $date);
    $month = isset($arr[1]) ? $arr[1] : "";

    switch ($month) {
        case "01": echo $name . " joined in January"; break;
        case "02": echo $name . " joined in February"; break;
        case "03": echo $name . " joined in March"; break;
        case "04": echo $name . " joined in April"; break;
        case "05": echo $name . " joined in May"; break;
        case "06": echo $name . " joined in June"; break;
        case "07": echo $name . " joined in July"; break;
        case "08": echo $name . " joined in August"; break;
        case "09": echo $name . " joined in September"; break;
        case "10": echo $name . " joined in October"; break;
        case "11": echo $name . " joined in November"; break;
        case "12": echo $name . " joined in December"; break;
        default: echo "Invalid month format";
    }

?>
