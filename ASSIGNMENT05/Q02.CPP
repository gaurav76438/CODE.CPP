#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;
};

int main() {
    Student s1, s2, s3;

    s1.name = "Gaurav";
    s1.age = 22;
    s1.course = "CSE with AI & ML";

    s2.name = "Rahul";
    s2.age = 21;
    s2.course = "Computer Science";

    s3.name = "Aman";
    s3.age = 23;
    s3.course = "Information Technology";

    cout << "Student 1:" << endl;
    cout << s1.name << " " << s1.age << " " << s1.course << endl;

    cout << "\nStudent 2:" << endl;
    cout << s2.name << " " << s2.age << " " << s2.course << endl;

    cout << "\nStudent 3:" << endl;
    cout << s3.name << " " << s3.age << " " << s3.course << endl;

    return 0;
}