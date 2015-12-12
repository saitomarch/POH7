let cakearr = readLine()!.characters.split{$0 == " "}.map(String.init)
let x = Int(cakearr[0])!
let y = Int(cakearr[1])!
let z = Int(cakearr[2])!
let cuts = Int(cakearr[3])!

var cut_x = [Int]()
var cut_y = [Int]()

for (var cnt = 0; cnt < cuts; cnt++) {
    let cutarr = readLine()!.characters.split{$0 == " "}.map(String.init)
    switch (Int(cutarr[0])!) {
    case 0:
        cut_x.append(Int(cutarr[1])!)
        break
    case 1:
        cut_y.append(Int(cutarr[1])!)
        break
    default:
        break
    }
}

cut_x.sortInPlace()
cut_y.sortInPlace()

var w = x, h = y

for (var idx = 0; idx <= cut_x.count; idx++) {
    var tmp_w = ((idx == cut_x.count) ? x : cut_x[idx]) - ((idx > 0) ? cut_x[idx - 1] : 0)
    if (w > tmp_w) {
        w = tmp_w
    }
}
for (var idx = 0; idx <= cut_y.count; idx++) {
    var tmp_h = ((idx == cut_y.count) ? y : cut_y[idx]) - ((idx > 0) ? cut_y[idx - 1] : 0)
    if (h > tmp_h) {
        h = tmp_h
    }
}
print (w * h * z)

