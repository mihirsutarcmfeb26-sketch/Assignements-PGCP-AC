
import java.util.*;
public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        double b = sc.nextDouble();

        double add = a + b;
        double div = a / b;
        int cast = (int) div;

        System.out.println("Addition: " + add);
        System.out.println("Division: " + div);
        System.out.println("Type Cast: " + cast);
    }
}
