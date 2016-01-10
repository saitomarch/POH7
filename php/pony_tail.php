<?php
    $num = (int)fgets(STDIN);
    while ($num >= 0) {
        echo $num . ($num == 0 ? "!!" : "") . "\n";
        $num--;
    }
?>
