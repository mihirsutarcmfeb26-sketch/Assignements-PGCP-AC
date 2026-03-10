#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks;

public:

    // 1. Default constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }

    // 2. Parameterized constructor
    Student(int r, string n, int m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor using this pointer
    Student(int rollNo, string name, int marks, int x)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // 4. Function to print details
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main()
{
    // Object using default constructor
    Student s1;

    // Objects using parameterized constructor
    Student s2(1, "Rahul", 85);
    Student s3(2, "Amit", 90, 0);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}