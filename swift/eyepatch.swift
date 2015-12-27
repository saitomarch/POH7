let totalCnt = Int(readLine()!)!
let haveCnt = Int(readLine()!)!
let haveList = readLine()!.characters.split{$0==" "}.map(String.init)
let sellCnt = Int(readLine()!)!
let sellList = readLine()!.characters.split{$0==" "}.map(String.init)
var shouldBuyList = [Int]()
for (sell) in sellList {
    var matches = false
    for (have) in haveList {
        if (sell == have) {
            matches = true
            break
        }
    }
    if (!matches) {
        shouldBuyList.append(Int(sell)!)
    }
}
shouldBuyList.sortInPlace()
var str = ""
for (shouldBuy) in shouldBuyList {
    if (!str.isEmpty) {
        str += " "
    }
    str += String(shouldBuy)
}
print(str.isEmpty ? "None" : str)

