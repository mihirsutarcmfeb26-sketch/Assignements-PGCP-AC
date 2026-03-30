
import java.util.*;
public class Q27 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int total=0;

        for(int i=1;i<=5;i++)
            total+=sc.nextInt();

        double per=total/5.0;

        System.out.println("Total:"+total);
        System.out.println("Percentage:"+per);

        if(per>=75) System.out.println("Grade A");
        else if(per>=60) System.out.println("Grade B");
        else if(per>=40) System.out.println("Grade C");
        else System.out.println("Fail");
    }
}
