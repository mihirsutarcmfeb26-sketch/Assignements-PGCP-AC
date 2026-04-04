import java.util.*;

// 1. Product Class
class Product {
    int productId;
    String productName;
    String price; // input as String

    Product(int id, String name, String price) {
        this.productId = id;
        this.productName = name;
        this.price = price;
    }

    // Convert price String -> double using Wrapper class
    double getPriceAsDouble() throws NumberFormatException {
        return Double.parseDouble(price);
    }
}

// 2. Order Class
class Order {
    String customerName;
    Product[] products;

    Order(String customerName, Product[] products) {
        this.customerName = customerName;
        this.products = products;
    }

    // total without discount
    double calculateTotal() throws NumberFormatException {
        double total = 0;
        for (Product p : products) {
            total += p.getPriceAsDouble();
        }
        return total;
    }

    // overloaded method with discount
    double calculateTotal(double discountPercent) throws NumberFormatException {
        double total = calculateTotal();
        double discount = total * discountPercent / 100;
        return total - discount;
    }

    // Generate bill using StringBuilder
    String generateBill(double finalAmount) {
        StringBuilder sb = new StringBuilder();
        sb.append("Customer: ").append(customerName).append("\n");
        sb.append("Products:\n");

        for (Product p : products) {
            sb.append(p.productName)
              .append(" - ")
              .append(p.price)
              .append("\n");
        }

        sb.append("Total Amount: ").append(finalAmount);
        return sb.toString();
    }
}

// 3. Payment Interface
interface Payment {
    void pay(double amount);
    void refund(double amount);
}

// 4. UPI Payment Class
class UPIPayment implements Payment {
    public void pay(double amount) {
        System.out.println("Payment of " + amount + " done via UPI");
    }

    public void refund(double amount) {
        System.out.println("Refund of " + amount + " done via UPI");
    }
}

// 5. Card Payment Class
class CardPayment implements Payment {
    public void pay(double amount) {
        System.out.println("Payment of " + amount + " done via Card");
    }

    public void refund(double amount) {
        System.out.println("Refund of " + amount + " done via Card");
    }
}

// 6. Main Class
public class MainApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            // Input
            System.out.print("Enter customer name: ");
            String name = sc.nextLine();

            System.out.print("Enter number of products: ");
            int n = sc.nextInt();

            if (n <= 0) {
                throw new Exception("Product count must be greater than 0");
            }

            Product[] products = new Product[n];

            for (int i = 0; i < n; i++) {
                System.out.println("\nEnter details for product " + (i + 1));
                System.out.print("ID: ");
                int id = sc.nextInt();
                sc.nextLine();

                System.out.print("Name: ");
                String pname = sc.nextLine();

                System.out.print("Price: ");
                String price = sc.nextLine();

                products[i] = new Product(id, pname, price);
            }

            // Create Order
            Order order = new Order(name, products);

            // Discount input
            System.out.print("\nEnter discount % (0 for none): ");
            double discount = sc.nextDouble();

            double total;
            if (discount > 0) {
                total = order.calculateTotal(discount);
            } else {
                total = order.calculateTotal();
            }

            // Payment choice
            System.out.println("\nChoose Payment Method:");
            System.out.println("1. UPI");
            System.out.println("2. Card");

            int choice = sc.nextInt();
            Payment payment;

            if (choice == 1) {
                payment = new UPIPayment();
            } else if (choice == 2) {
                payment = new CardPayment();
            } else {
                throw new Exception("Invalid payment option");
            }

            // Display Bill
            System.out.println("\n----- BILL -----");
            System.out.println(order.generateBill(total));

            // Payment
            payment.pay(total);

            System.out.println("Payment Successful ✅");

        } catch (NumberFormatException e) {
            System.out.println("Invalid price format ❌");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}