
import java.util.*;
public class Q38 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=7;
        int guess;

        do{
            System.out.println("Guess number:");
            guess=sc.nextInt();

            if(guess>num)
                System.out.println("Too high");
            else if(guess<num)
                System.out.println("Too low");

        }while(guess!=num);

        System.out.println("Correct!");
    }
}
