#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Gaurav";
    s1.age = 22;
    s1.course = "B.Tech CSE with AI & ML";

    s1.display();

    return 0;
}