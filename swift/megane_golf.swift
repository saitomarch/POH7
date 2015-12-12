func p(t:Int)->[[String]]{var a=[[String]]()
for (var i=0;i<t;i++){a.append(readLine()!.characters.split{$0==" "}.map(String.init))}
return a}
let s=Int(readLine()!)!
let m=p(s)
let t=Int(readLine()!)!
let n=p(t)
var f=0
for(var h=0;h<=s-t && f==0;h++){for(var i=0;i<=s-t && f==0;i++){var e=1
for(var j=0;j<t && e>0;j++){for(var k=0;k<t && e>0;k++){if(m[h+j][i+k] != n[j][k]){e=0}}}
if(e>0){print(h,i)
f=1}}}
