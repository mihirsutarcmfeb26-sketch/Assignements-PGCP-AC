
import java.util.*;
public class Q29 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int choice;

        do{
            System.out.println("1.Add");
            System.out.println("2.Subtract");
            System.out.println("3.Exit");

            choice=sc.nextInt();

            if(choice==1){
                int a=sc.nextInt();
                int b=sc.nextInt();
                System.out.println(a+b);
            }
            else if(choice==2){
                int a=sc.nextInt();
                int b=sc.nextInt();
                System.out.println(a-b);
            }

        }while(choice!=3);
    }
}
