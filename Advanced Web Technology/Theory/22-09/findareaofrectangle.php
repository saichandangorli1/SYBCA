<?php
    class Rectangle{
        public $length;
        public $breadth;
        public $area;

        function get_area($length, $breadth){
            $this->length = $length;
            $this->breadth = $breadth;
            $this->area = $length * $breadth;
        }

        function display_area(){
            echo "Length: " . $this->length . "<br>";
            echo "Breadth: " . $this->breadth . "<br>";
            echo "Area: " . $this->area . "<br>";
        }

    }

    $rectangle1 = new Rectangle();
    $rectangle1->get_area($_POST['length'], $_POST['breadth']);
    $rectangle1->display_area();


?>