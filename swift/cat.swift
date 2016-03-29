let input = readLine()!
var c = 0, a = 0, t = 0

input.characters.forEach { (ch) in
    switch (ch) {
    case "c":
        c += 1
        break
    case "a":
        a += 1
        break
    case "t":
        t += 1
        break
    default:
        break
    }
}

let maxNum = max(c, a, t)
let minNum = min(c, a, t)

print(minNum)
print(maxNum - c)
print(maxNum - a)
print(maxNum - t)

