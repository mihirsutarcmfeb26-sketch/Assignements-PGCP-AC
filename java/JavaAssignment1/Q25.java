
public class Q25 {
    public static void main(String[] args) {
        int a=5,b=10;

        int temp=a;
        a=b;
        b=temp;

        System.out.println("With third variable: "+a+" "+b);

        a=a+b;
        b=a-b;
        a=a-b;

        System.out.println("Without third variable: "+a+" "+b);
    }
}
