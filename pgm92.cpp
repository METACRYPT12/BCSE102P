// Demonstration of OOP

#include <iostream>

using namespace std;

class Student
{

public:
    int rollNo;
    float mark1;
    float mark2;
    Student(int rollNo, float mark1, float mark2)
    {
        this->rollNo = rollNo;
        this->mark1 = mark1;
        this->mark2 = mark2;
    }

    ~Student()
    {
    }

    float calcTotal()
    {
        float total;
        total = mark1 + mark2;
        return total;
    }

    void printDetails()
    {
        cout << "Mark 1: " << mark1 << endl;
        cout << "Mark 2: " << mark2 << endl;
        cout << "Total: " << calcTotal() << endl;
    }
};

int main()
{
    Student student1(101, 80.5, 85.7);
    Student student2(102, 90.2, 91.6);
    cout << "Student 1: " << endl;
    student1.printDetails();
    cout << endl;
    cout << "Student 2: " << endl;
    student2.printDetails();
    return 0;
}
