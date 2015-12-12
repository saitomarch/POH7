let times = 2
var maxPerformance:Float = 0.0
var selected = 0
for (var cnt = 0; cnt < times; cnt++) {
    var arr = readLine()!.characters.split{$0 == " "}.map(String.init)
    var performance = Float(arr[0])! / Float(arr[1])!
    if (performance > maxPerformance) {
        maxPerformance = performance
        selected = cnt
    }
}
print(selected + 1)

