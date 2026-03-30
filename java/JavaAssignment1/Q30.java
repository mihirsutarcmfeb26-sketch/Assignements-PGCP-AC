
import java.util.*;
public class Q30 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        char ch;

        do{
            int n=sc.nextInt();

            for(int i=1;i<=10;i++)
                System.out.println(n*i);

            System.out.println("Continue? y/n");
            ch=sc.next().charAt(0);

        }while(ch=='y');
    }
}
