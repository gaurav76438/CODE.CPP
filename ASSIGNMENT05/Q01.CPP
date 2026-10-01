#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;
};

int main() {
    Student s1;

    s1.name = "Gaurav";
    s1.age = 22;
    s1.course = "B.Tech CSE with AI & ML";

    cout << "Student Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Course: " << s1.course << endl;

    return 0;
}