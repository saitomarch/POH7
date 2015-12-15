import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static long factorial(long num) {
        long result = 1;
        final long LIMIT = 100000000000l;
        for (long k = 1; k <= num; k++) {
            result *= k;
            while (result % 10 == 0) {
                result /= 10;
            }
            if (result / LIMIT > 0) {
                result %= LIMIT;
            }
        }
        return result;
    }
    
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        String numstr = String.valueOf(factorial(Integer.parseInt(line)));
        
        numstr = numstr.replaceAll("0*$", "");
        final int LIMIT = 9;
        if (numstr.length() > LIMIT) {
            numstr = numstr.substring(numstr.length() - LIMIT);
        }
        numstr = numstr.replaceAll("0*^", "");

        System.out.println(numstr);
    }
}

