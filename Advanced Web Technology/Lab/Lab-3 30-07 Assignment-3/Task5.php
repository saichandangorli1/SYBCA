<?php
        if (Isset($_POST['number']) && $_POST['number'] !== '') {
            $numberOfTerms = $_POST['number']; 
           
            if ($numberOfTerms <= 0) {
                echo "<p>Please enter a positive number of terms.</p>";
            } elseif ($numberOfTerms == 1) {
                echo "<p>0</p>";
            } else {
                $num1 = 0;
                $num2 = 1;
                $count = 0;
                
                echo "<p>";
                
                echo $num1;
                $count++;
                
                if ($numberOfTerms > 1) {
                    echo ", " . $num2;
                    $count++;
                }
                
                while ($count < $numberOfTerms) {
                    $nextNum = $num1 + $num2;
                    echo ", " . $nextNum;
                    $num1 = $num2;
                    $num2 = $nextNum;
        $count++;
    }
    echo "</p>";
}

} 
?>
