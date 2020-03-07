<?php
    error_reporting(0);
    $string = [D,U,M,B,W,A,Y,S,I,D];

    for($i = 1; $i <= 100; $i++){
        if($i == 1){
            echo $string[0];
            $i++;
        }
        echo " = ";
        if($i == 9)
        {
            echo $string[1] . "<br>";
            $i++;
        }

        if($i == 11)
        {
            echo $string[1];
            $i++;
        }
        
        if($i == 18)
        {
            echo $string[1];
            $i++;
        }
        if($i == 20){
            echo "<br>";
        }

        if($i == 22)
        {
            echo $string[2];
            $i++;
        }
        if($i == 27)
        {
            echo $string[2];
            $i++;
        }
        if($i == 30){
            echo "<br>";
        }
        if($i == 33)
        {
            echo $string[3];
            $i++;
        }
        if($i == 36)
        {
            echo $string[3];
            $i++;
        }
        if($i == 40){
            echo "<br>";
        }
        if($i == 44)
        {
            echo $string[4];
            $i++;
        }
        if($i == 45)
        {
            echo $string[4];
            $i++;
        }
        if($i == 50){
            echo "<br>";
        }
        if($i == 54)
        {
            echo $string[5];
            $i++;
        }
        if($i == 55)
        {
            echo $string[5];
            $i++;
        }

        if($i == 60){
            echo "<br>";
        }
        if($i == 63)
        {
            echo $string[6];
            $i++;
        }
        if($i == 66)
        {
            echo $string[6];
            $i++;
        }
        if($i == 70){
            echo "<br>";
        }

        if($i == 72)
        {
            echo $string[7];
            $i++;
        }
        if($i == 77)
        {
            echo $string[7];
            $i++;
        }

        if($i == 80){
            echo "<br>";
        }

        if($i == 81)
        {
            echo $string[8];
            $i++;
        }
        if($i == 88)
        {
            echo $string[8];
            $i++;
        }

        if($i == 90){
            echo "<br>";
        }

        if($i == 90)
        {
            echo $string[9  ];
            $i++;
        }
        if($i == 99)
        {
            echo $string[9];
            $i++;
        }
    }
    
?>