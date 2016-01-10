<?php
    const TIMES = 2;
    $num = 0;
    for ($cnt = 0; $cnt < TIMES; $cnt++) {
        $num += (int)fgets(STDIN);
    }
    echo $num . "\n";
?>
