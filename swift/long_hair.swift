var ans : Dictionary<String, Int> = Dictionary<String, Int>()
let times = 5;
for (var cnt = 0; cnt < times; cnt++) {
    let key = readLine()!
    if (ans[key] == nil) {
        ans[key] = 0
    }
    ans[key]! += 1;
}
var maxKey :String?
var max = 0;
for (key, val) in ans {
    if (val > max) {
        max = val;
        maxKey = key;
    }
}
if (maxKey != nil) {
    print(maxKey!)
}

