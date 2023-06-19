#include <iostream>
#include <string.h>

using namespace std;

void clean_stdin(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

class employee
{
private:
    string empno;
    string name;
    string desig;

protected:
    void setEmp();
    void empDisplay();
};

void employee::setEmp()
{
    getline(cin, empno);
    getline(cin, name);
    getline(cin, desig);
}

void employee::empDisplay()
{

    cout << "Emp number:" << empno << endl;
    cout << "Emp name:" << name << endl;
    cout << "Designation:" << desig << endl;
}

class salary : private employee
{
private:
    int basic;
    int hra;
    int da;
    int pf;

protected:
    void setSal();
    void salDisplay();
};

void salary::setSal()
{
    setEmp();
    cin >> hra;
    cin >> da;
    cin >> pf;
}

void salary::salDisplay()
{
    empDisplay();
    cout << "hra:" << hra << endl;
    cout << "da:" << da << endl;
    cout << "pf:" << pf << endl;
}

class bank_details : private salary
{
private:
    string bank_name;
    int acc_no;

public:
    void getDetails();
    void display();
};

void bank_details::getDetails()
{
    setSal();
    clean_stdin();
    getline(cin, bank_name);
    cin >> acc_no;
}

void bank_details::display()
{
    salDisplay();
    cout << "Bank Name: " << bank_name << endl;
    cout << "Account Number: " << acc_no << endl;
}

int main()
{
    bank_details obj;
    obj.getDetails();
    obj.display();
    return 0;
}