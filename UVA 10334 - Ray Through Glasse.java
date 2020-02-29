import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) {

        BigInteger[] fibo = new BigInteger[1005];

        fibo[0] = BigInteger.valueOf(1);
        fibo[1] = BigInteger.valueOf(2);

        for (int i = 2; i < 1005; i++)
            fibo[i] = fibo[i - 2].add(fibo[i - 1]);

        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            System.out.println(fibo[n]);
        }
    }
}
