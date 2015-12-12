let times = Int(readLine()!)!
var str = ""
for (var cnt = 0; cnt < times; cnt++) {
    if (!str.isEmpty) {
        str += "_"
    }
    str += readLine()!
}
print(str)

