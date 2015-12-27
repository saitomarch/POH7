let width = Int(readLine()!)!
let length = Int(readLine()!)!
let pattern = ["R", "W"];
var str = ""
for (var idx = 0; idx < length; idx++) {
    let colorStr = pattern[(idx / width) % pattern.count]
    str += colorStr
}
print(str)
