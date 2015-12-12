func factorial(n: Int) -> Int {
    var result = 1;
    let limit = 100000000000;
    for(var k = 1; k <= n; k++) {
        result *= k;
        while (result % 10 == 0) {
            result /= 10;
        }
        if (result / limit > 0) {
            result %= limit;
        }
    }
    return result;
}

let num = Int(readLine()!)!
let limit = 9
var str = String(factorial(num))
while (str.characters[str.startIndex] == "0") {
    str.removeAtIndex(str.endIndex)
}
while (str.utf8.count > limit || str.characters[str.startIndex] == "0") {
    str.removeAtIndex(str.startIndex)
}
print(str);

