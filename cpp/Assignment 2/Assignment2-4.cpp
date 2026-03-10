#include <iostream>
#include <vector>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    // Constructor
    Employee(int id, string name, double salary) 
        : empID(id), empName(name), empSalary(salary) {}

    // Getters
    int getEmpID() const { return empID; }
    string getEmpName() const { return empName; }
    double getEmpSalary() const { return empSalary; }

    // Setters
    void setEmpName(string name) { empName = name; }
    void setEmpSalary(double salary) { empSalary = salary; }

    // Calculate Gross Salary
    double calculateGrossSalary() const {
        double bonus = 0.0;
        if (empSalary <= 5000) bonus = 0.10 * empSalary;
        else if (empSalary <= 10000) bonus = 0.15 * empSalary;
        else bonus = 0.20 * empSalary;
        return empSalary + bonus;
    }

    // Display Employee Details
    void displayEmployeeDetails() const {
        cout << "Employee ID: " << empID 
             << ", Name: " << empName 
             << ", Salary: " << empSalary 
             << ", Gross Salary: " << calculateGrossSalary() 
             << endl;
    }
};
int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n--- Employee Payroll Management System ---\n";
        cout << "1. Add a new employee\n";
        cout << "2. Calculate gross salary for an employee\n";
        cout << "3. Display employee details\n";
        cout << "4. Update employee information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string name;
                double salary;
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Employee Name: ";
                cin >> name;
                cout << "Enter Employee Salary: ";
                cin >> salary;

                // Ensure unique ID
                bool exists = false;
                for (auto &emp : employees) {
                    if (emp.getEmpID() == id) {
                        exists = true;
                        break;
                    }
                }
                if (exists) {
                    cout << "Error: Employee ID must be unique!\n";
                } else {
                    employees.push_back(Employee(id, name, salary));
                    cout << "Employee added successfully.\n";
                }
                break;
            }
            case 2: {
                int id;
                cout << "Enter Employee ID: ";
                cin >> id;
                bool found = false;
                for (auto &emp : employees) {
                    if (emp.getEmpID() == id) {
                        cout << "Gross Salary: " << emp.calculateGrossSalary() << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found.\n";
                break;
            }
            case 3: {
                for (auto &emp : employees) {
                    emp.displayEmployeeDetails();
                }
                break;
            }
            case 4: {
                int id;
                cout << "Enter Employee ID to update: ";
                cin >> id;
                bool found = false;
                for (auto &emp : employees) {
                    if (emp.getEmpID() == id) {
                        string newName;
                        double newSalary;
                        cout << "Enter new name: ";
                        cin >> newName;
                        cout << "Enter new salary: ";
                        cin >> newSalary;
                        emp.setEmpName(newName);
                        emp.setEmpSalary(newSalary);
                        cout << "Employee updated successfully.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found.\n";
                break;
            }
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}