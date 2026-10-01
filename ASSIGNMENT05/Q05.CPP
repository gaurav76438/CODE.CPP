#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;
    string department;

    Employee(int id, string name, double salary, string department) {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee e1(101, "Gaurav", 50000, "IT");

    e1.display();

    return 0;
}