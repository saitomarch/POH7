var input = readLine()!
let cat = "cat"

var foundCnt = 0

for idx in 0 ... input.characters.count - cat.characters.count {
    var idxInput = input.startIndex.advancedBy(idx)
    var idxCat = cat.startIndex;
    if (input[idxInput] == cat[idxCat]) {
        var found = true
        for subIdx in 1 ..< cat.characters.count {
            if (input[idxInput.successor()] != cat[idxCat.successor()]) {
                found = false
                break
            }
        }
        if (found) {
            foundCnt += 1
        }
    }
}

print(foundCnt)

