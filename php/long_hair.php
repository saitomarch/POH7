<?php
    $ans = array();
    const TIMES = 5;
    for ($cnt = 0; $cnt < TIMES; $cnt++) {
        $key = trim(fgets(STDIN));
        if (!$ans[$key]) {
            $ans[$key] = 0;
        }
        $ans[$key] += 1;
    }
    $maxKey = "";
    $maxVal = 0;
    foreach ($ans as $key => $val) {
        if ($val > $maxVal) {
            $maxVal = $val;
            $maxKey = $key;
        }
    }
    echo $maxKey . "\n";
?>
