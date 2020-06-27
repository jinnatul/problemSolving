import java.math.BigInteger; 
import java.util.Scanner; 

public class Main {
    public static void main(String[] args) {
           Scanner sca = new Scanner(System.in); 
           int n = sca.nextInt(),t = 1; 
          
           while(t <= n){
             
              BigInteger a,b; 
              a = sca.nextBigInteger(); 
              b = sca.nextBigInteger(); 
              BigInteger c = a.add(b); 
              System.out.println("Case "+ t + ":"); 
              System.out.println(a + " + " + b + " = " + c); 
              if(t != n) System.out.println(""); t++; 

}
} 
} 