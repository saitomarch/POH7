<?php
    $maxPerformance = 0.0;
    $selected = 0;
    const TIMES = 2;
    for ($cnt = 0; $cnt < TIMES; $cnt++) {
        $arr = explode(" ", trim(fgets(STDIN)));
        $performance = (float)$arr[0] / (float)$arr[1];
        if ($performance > $maxPerformance) {
            $maxPerformance = $performance;
            $selected = $cnt;
        }
    }
    echo $selected + 1 . "\n";
?>
