
import java.util.*;
public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.next().charAt(0);
        System.out.println("Next: " + (char)(c + 1));
        System.out.println("Previous: " + (char)(c - 1));
    }
}
