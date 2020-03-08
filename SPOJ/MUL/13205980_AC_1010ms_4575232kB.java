import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int i, n = in.nextInt();
        for (i = 1; i <= n; i++) {
            BigInteger a, b, c;
            a = in.nextBigInteger();
            b = in.nextBigInteger();
            c = a.multiply(b);
            System.out.println(c);
            
        }
    }
}
