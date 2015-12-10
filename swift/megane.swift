func prepare(times:Int) -> [[Int]] {
    var arr : [[Int]] = [[Int]](count: times, repeatedValue: [Int](count: times, repeatedValue: 0))
    for (var cnt = 0; cnt < times; cnt++) {
        let cells = readLine()!.characters.split{$0 == " "}.map(String.init)
        for (var idx = 0; idx < cells.count; idx++) {
            arr[cnt][idx] = Int(cells[idx])!;
        }
    }
    return arr;
}
let s1 = Int(readLine()!)!
let m1 = prepare(s1);
let s2 = Int(readLine()!)!
let m2 = prepare(s2)

var x = 0, y = 0;
var finished = false;
for (var x1 = 0; x1 <= s1 - s2 && !finished; x1++) {
    for (var y1 = 0; y1 <= s1 - s2 && !finished; y1++) {
        var matches = true;
        for (var x2 = 0; x2 < s2 && matches; x2++) {
            for (var y2 = 0; y2 < s2 && matches; y2++) {
                if (m1[x1 + x2][y1 + y2] != m2[x2][y2]) {
                    matches = false;
                }
            }
        }
        if (matches) {
            x = x1;
            y = y1;
            finished = true;
        }
    }
}
print(x,y)

