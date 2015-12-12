let times = Int(readLine()!)!
var num = times
for (var cnt = 1; cnt < times; cnt++) {
    num *= times - cnt
}
print(num)

