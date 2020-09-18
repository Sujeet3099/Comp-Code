import java.util.Scanner
fun main() {
    val read = Scanner(System.`in`)
    // cin>>n>>k;
    // var n = sc.nextDouble();
    // var k = sc.nextDouble();
    // var t = read.nextDouble()
    // var in = 1;
    // while(in <= t){
        var n = read.nextInt()
        var k = read.nextInt()
        var n1 = 1.toDouble()
        var n2 = Math.pow(k.toDouble(),1.toDouble())
        var n3 = Math.pow(k.toDouble(),2.toDouble())
        var n4 = Math.pow(k.toDouble(),3.toDouble())
        var ans = n/(n4+n3+n2+1)
        n1=n1*ans
        n2=n2*ans
        n3=n3*ans
        n4=n4*ans
        n1.toLong()
        n2.toLong()
        n3.toLong()
        n4.toLong()
        var a = n1.toInt();
        var b = n2.toInt();
        var c = n3.toInt();
        var d = n4.toInt();
        // in++;
    // 	cout<<n1<<' '<<n2<<' '<<n3<<' '<<n4<<endl;
        // println("$n1 $n2 $n3 $n4")
        // println("$a $b $c $d yeah")
        System.out.printf("$a $b $c $d :printed")
    // }
// 	return ;
}