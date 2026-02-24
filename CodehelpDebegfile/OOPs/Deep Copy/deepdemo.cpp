#include <iostream>
using namespace std;

class Student {
public:
    int* marks;

    // Constructor
    Student(int m) {
        marks = new int(m);
    }

    // 🔥 Deep Copy Constructor
    Student(const Student& s) {
        marks = new int(*s.marks);   // new memory + value copy
    }

    // Destructor
    ~Student() {
        delete marks;
    }

    void display() {
        cout << "Marks = " << *marks << endl;
    }
};

int main() {

    Student s1(90);   // object 1
    Student s2 = s1;  // Deep Copy

    // Change s2 marks
    *(s2.marks) = 50;

    cout << "s1: ";
    s1.display();

    cout << "s2: ";
    s2.display();

    return 0;
}