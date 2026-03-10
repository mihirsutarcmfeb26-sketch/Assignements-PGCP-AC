#include <iostream>
using namespace std;
class BankAccount{
	private:
		int accountNumber;
		string accountHolderName;
		double balance;
		
	public:
	void setAccNo(int num){
    if(num > 0 && num < 100000000)
    accountNumber = num;
    }
    int getAccNo() {
    return accountNumber;
    }
	void setName(string n){
    accountHolderName = n;
    }
    string getName() {
    return accountHolderName;
    }
    
    void setBal(double m){
    balance = m;
    }
    double getBal() {
    return balance;
    }

	void deposit(double amount) {
        if (amount > 0) {
            balance += amount;  // update balance
            cout << "Successfully deposited: " << amount << std::endl;
        } else {
            cout << "Deposit amount must be positive." << std::endl;
        }
    }


	void withdraw(double amount){
		if(amount>balance){
			cout<<"Insufficient Balance ";
		}
	    else if (amount > 0 || amount<=balance) {
            balance -= amount;
            cout<< "Successfully withdrew: " << amount << std::endl;
        }
        else{
        	cout<<"Positive number plz ";
		}
	}
	void displayAccountDetails(){
		cout << "\n--- Account Holder Information ---\n";
        cout << "Acc-Number : " << accountNumber << endl;
        cout << "Acc-Holder Name : " << accountHolderName << endl;
        cout << "Balance of Acc : " << balance << endl;
        
	}
};
int main(){
	BankAccount ba;
	double amount;
	int choice;
	
	int accno;
    string name;
    double bal;

    cout << "Enter Acc Number: ";
    cin >> accno;
    cout << "Enter Acc Holder Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Initial Balance: ";
    cin >> bal;

    ba.setAccNo(accno);
    ba.setName(name);
    ba.setBal(bal);

	do{
		cout << "\n--- Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Acc Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            ba.deposit(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            ba.withdraw(amount);
            break;

        case 3:
            ba.displayAccountDetails();
            break;

        case 4:
            cout << "Exiting program...\n";
            break;


        default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
	}
	
