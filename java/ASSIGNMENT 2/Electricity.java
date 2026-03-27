import java.util.*;


class Electricity{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the name :");
         String Name = sc.nextLine();

         System.out.println("Enter your number :");
         int Number = sc.nextInt();

         System.out.println("enter your units :");
         int Units = sc.nextInt();

         double bill=0;

         if(Units   <=100)
         bill=Units * 100;

        else if( Units <=200)
        bill= (100 * 5) + ( Units - 100) * 7;

        else {
            bill = (100 * 5) + (100 * 7) + (Units -200) * 10;

        }

        if(bill > 1500){
            bill = bill + (bill * 0.5);
        }
         System.out.println("\n----- Electricity Bill -----");
        System.out.println("Customer Name: " + Name);
        System.out.println("Consumer No: " + Name);
        System.out.println("Units Consumed: " + Units);
        System.out.println("Total Bill: Rs. " + bill);
          
    }

}