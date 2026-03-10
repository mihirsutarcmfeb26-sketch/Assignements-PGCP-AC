#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor initializes counters
    TollBooth() : totalVehicles(0), totalRevenue(0.0) {}

    // Reset both counters
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    // Vehicle paying toll
    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++;
        totalRevenue += tollAmount;

        string type;
        if (vehicleType == 1) type = "Standard Car";
        else if (vehicleType == 2) type = "Truck";
        else if (vehicleType == 3) type = "Bus";
        else type = "Unknown";

        cout << type << " passed. Toll collected: Rs. " << tollAmount << endl;
    }

    // Getters
    int getTotalVehicles() const { return totalVehicles; }
    double getTotalRevenue() const { return totalRevenue; }
};
int main() {
    TollBooth booth;
    int choice;

    // Fixed toll amounts
    const double CAR_TOLL = 100.0;
    const double TRUCK_TOLL = 200.0;
    const double BUS_TOLL = 350.0;

    do {
        cout << "\n--- Toll Booth Menu ---\n";
        cout << "1. Add a standard car and collect toll\n";
        cout << "2. Add a truck and collect toll\n";
        cout << "3. Add a bus and collect toll\n";
        cout << "4. Display total vehicles passed\n";
        cout << "5. Display total revenue collected\n";
        cout << "6. Reset booth statistics\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                booth.vehiclePayingToll(1, CAR_TOLL);
                break;
            case 2:
                booth.vehiclePayingToll(2, TRUCK_TOLL);
                break;
            case 3:
                booth.vehiclePayingToll(3, BUS_TOLL);
                break;
            case 4:
                cout << "Total vehicles passed: " << booth.getTotalVehicles() << endl;
                break;
            case 5:
                cout << "Total revenue collected: Rs. " << booth.getTotalRevenue() << endl;
                break;
            case 6:
                booth.reset();
                cout << "Booth statistics reset.\n";
                break;
            case 7:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);

    return 0;
}