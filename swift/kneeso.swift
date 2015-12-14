let width = Int(readLine()!)!
let length = Int(readLine()!)!
var str = ""
for (var idx = 0; idx < length; idx++) {
    let colorStr = (idx / width) % 2 == 0 ? "R" : "W"
    str += colorStr
}
print(str)

