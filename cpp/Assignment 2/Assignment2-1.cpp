#include <iostream>
using namespace std;
class Student{
private:string name;
        int rollNumber;
        float marks;
        char grade;
        
        
public:
void setName(string n){
name = n;
}
string getName() {
return name;
}
void setRollNo(int num){
//if(num > 0 && num < 100)
rollNumber = num;
}
int getRollNo() {
return rollNumber;
}
void setMarks(float m){

marks = m;
}
float getMarks() {
return marks;
}

void setGrade(char g){

grade = g;
}
char getGrade() {
return grade;
}

void calculateGrade(){
	if(marks>=90) grade='A';
	else if(marks>=80) grade='B';
	else if(marks>=70) grade='C';
	else if(marks>=60) grade='D';
	else grade='F';
	
	
}
void displayInfo(){
	    cout << "\n--- Student Information ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;

}
};

int main() {
    Student s;
    int choice;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Accept Information\n";
        cout << "2. Display Information\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int roll;
                float marks;

                cout << "Enter Name: ";
                cin.ignore(); // clear buffer
                getline(cin, name);
                cout << "Enter Roll Number: ";
                cin >>roll;
                cout << "Enter Marks: ";
                cin >> marks;

                s.setName(name);
                s.setRollNo(roll);
                s.setMarks(marks);
                break;
            }
            case 2:
                s.displayInfo();
                break;

            case 3:
                s.calculateGrade();
                cout << "Grade calculated successfully!\n";
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
