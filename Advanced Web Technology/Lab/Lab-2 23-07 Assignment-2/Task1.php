<!-- 1) Write a PHP code to calculate a simple interest. Accept vales from HTML page. -->

<?php
 
      $principal = $_POST["principal"];
      $rate = $_POST["rate"];
      $time = $_POST["time"];

          $simpleInterest = ($principal * $rate * $time) / 100;

          echo "<br><br>Principal: " . $principal . "<br>";
          echo "Rate (Percentage): " . $rate . "%<br>";
          echo "Time (Years): " . $time . "<br>";
          echo "Simple Interest: " . $simpleInterest . "<br>";
      

  ?>