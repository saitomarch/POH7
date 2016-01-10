<?php
    $total = (int)fgets(STDIN);
    $have_count = (int)fgets(STDIN);
    $have_list = explode(" ", trim(fgets(STDIN)));
    $sell_count = (int)fgets(STDIN);
    $sell_list = explode(" ", trim(fgets(STDIN)));

    $should_buy_list = array();
    foreach ($sell_list as $sell) {
        $matches = false;
        foreach ($have_list as $have) {
            if ($sell === $have) {
                $matches = true;
                break;
            }
        }
        if (!$matches) {
            $should_buy_list[] = $sell;
        }
    }

    sort($should_buy_list);

    $str = "";
    foreach ($should_buy_list as $should_buy) {
        if ($str !== "") {
            $str .= " ";
        }
        $str .= $should_buy;
    }

    echo $str !== "" ? $str : "None" . "\n";
?>
