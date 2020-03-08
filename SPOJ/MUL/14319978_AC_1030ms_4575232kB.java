import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a, b;

        int i,n;
        n = sc.nextInt();
        for(i=0; i<n; i++){
            a = sc.nextBigInteger();
            b = sc.nextBigInteger();
            System.out.println(a.multiply(b));
        }
    }

}