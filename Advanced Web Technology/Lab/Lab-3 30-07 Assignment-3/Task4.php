<?php
        if (Isset($_POST['number']) && $_POST['number'] !== '') {
            $inputNumber = $_POST['number']; 
            
            
            $fact = 1;

            for ($i=1; $i <= $inputNumber; $i++) { 
                $fact *= $i;
            }


         
            echo "<p>Factorial : " . $fact . "</p>";

           

        } 
    ?>