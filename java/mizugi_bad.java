import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.*;

public class Main {
    public static BigInteger factorial(BigInteger bigint) {
        BigInteger result = new BigInteger("1");
        for (BigInteger k = new BigInteger("1"); k.compareTo(bigint) <= 0; k = k.add(new BigInteger("1"))) {
            result = result.multiply(k);
        }
        return result;
    }
    
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        String numstr = factorial(new BigInteger(line)).toString();
        
        numstr = numstr.replaceAll("0*$", "");
        final int LIMIT = 9;
        if (numstr.length() > LIMIT) {
            numstr = numstr.substring(numstr.length() - LIMIT);
        }
        numstr = numstr.replaceAll("0*^", "");

        System.out.println(numstr);
    }
}

