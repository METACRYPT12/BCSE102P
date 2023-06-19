

#include <iostream>

using namespace std;

struct bio
{
private:
    char name[10];
    int age;
    float salary;

public:
    void read();
    void display();
};

void bio::read()
{
    cin >> name;
    cin >> age;
    cin >> salary;
}

void bio::display()
{
    cout << "Name: " << name << "\nAge: " << age << "\nSalary: " << salary << endl;
}

int main()
{
    bio user;
    user.read();
    user.display();
    return 0;
}
