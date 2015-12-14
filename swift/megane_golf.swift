func p(t:Int)->[[String]]{var a=[[String]]()
for _ in 0..<t{a.append(readLine()!.characters.split{$0==" "}.map(String.init))}
return a}
let s=Int(readLine()!)!,m=p(s),t=Int(readLine()!)!,n=p(t)
d:for h in 0...s-t{for i in 0...s-t{var e=1
c:for j in 0..<t{for k in 0..<t{if(m[h+j][i+k] != n[j][k]){e=0
continue c}}}
if(e>0){print(h,i)
break d}}}
