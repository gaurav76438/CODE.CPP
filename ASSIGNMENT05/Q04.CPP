#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    Student(string name, int age, string course) {
        this->name = name;
        this->age = age;
        this->course = course;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1("Gaurav", 22, "B.Tech CSE with AI & ML");

    s1.display();

    return 0;
}