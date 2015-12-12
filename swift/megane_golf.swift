func p(t:Int)->[[String]]{
    var a = [[String]]()
    for (var i=0;i<t;i++){
        let c=readLine()!.characters.split{$0==" "}.map(String.init)
        a.append(c)
    }
    return a;
}
let s1=Int(readLine()!)!
let m1=p(s1);
let s2=Int(readLine()!)!
let m2=p(s2)
var x = 0, y = 0;
var f = false;
for(var x1=0;x1<=s1-s2 && !f;x1++){
    for(var y1=0;y1<=s1-s2 && !f;y1++){
        var m=true;
        for(var x2=0;x2<s2 && m;x2++){
            for(var y2=0;y2<s2 && m;y2++){
                if(m1[x1+x2][y1+y2] != m2[x2][y2]){
                    m=false;
                }
            }
        }
        if(m){
            print(x1,y1)
            f=true;
        }
    }
}

