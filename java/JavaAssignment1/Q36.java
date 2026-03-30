
import java.util.*;
public class Q36 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();

        int lcm=(a*b)/gcd(a,b);

        System.out.println("LCM="+lcm);
    }

    static int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
}
