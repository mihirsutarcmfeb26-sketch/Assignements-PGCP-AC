
import java.util.*;
public class Q10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.next().charAt(0);

        if("aeiouAEIOU".indexOf(c) != -1)
            System.out.println("Vowel");
        else
            System.out.println("Consonant");
    }
}
