#include <iostream>
#include <string>

using namespace std;

class current
{
protected:
    int balance;

public:
    current();
    ~current() {}
};

current::current()
{
    balance = 0;
}

class savings
{
protected:
    int balance;

public:
    savings();
    ~savings() {}
};

savings::savings()
{
    balance = 0;
}

class account : protected current, protected savings
{
private:
    unsigned long long int accNo;
    string name;

public:
    account(string, unsigned long long int);
    ~account() {}
    void deposit();
    void withdraw();
    void print();
};

account::account(string name, unsigned long long int accNo)
{
    this->name = name;
    this->accNo = accNo;
}

void account::deposit()
{
    int temp;
    cout << "1. Savings\n2. Current\nOption: ";
    cin >> temp;
    cout << endl;
    switch (temp)
    {
    case 1:
        cout << "Enter Amount: ";
        cin >> temp;
        cout << endl;
        if (temp > 0)
            savings::balance = savings::balance + temp;
        else
            cout << "Deposit amount cannot be negative!!" << endl
                 << endl;
        break;

    case 2:
        cout << "Enter Amount: ";
        cin >> temp;
        cout << endl;
        cin >> temp;
        if (temp > 0)
            current::balance = current::balance + temp;
        else
            cout << "Deposit amount cannot be negative!!" << endl
                 << endl;
        break;

    default:
        cout << "Invalid Input!!" << endl
             << endl;
        break;
    }
}

void account::withdraw()
{
    int temp;
    cout << "1. Savings\n2. Current\nOption: ";
    cin >> temp;
    switch (temp)
    {
    case 1:
        cout << "Enter Amount: ";
        cin >> temp;
        cout << endl;
        cin >> temp;
        if (temp > 0)
        {
            if (savings::balance >= temp)
                savings::balance = savings::balance - temp;
            else
                cout << "Insufficient Balance!!" << endl
                     << endl;
        }
        else
            cout << "Withdraw amount cannot be negative!!" << endl
                 << endl;
        break;

    case 2:
        cout << "Enter Amount: ";
        cin >> temp;
        cout << endl;
        cin >> temp;
        if (temp > 0)
        {
            if (current::balance >= temp)
                current::balance = current::balance - temp;
            else
                cout << "Insufficient Balance!!" << endl
                     << endl;
        }
        else
            cout << "Withdraw amount cannot be negative!!" << endl
                 << endl;
        break;

    default:
        cout << "Invalid Input!!" << endl
             << endl;
        break;
    }
}

void account::print()
{
    cout << "Accout Name: " << name << endl;
    cout << "Accout Number: " << accNo << endl;
    cout << "Savings Balance: " << savings::balance << endl;
    cout << "Current Balance: " << current::balance << endl;
    cout << endl;
}

int main()
{
    string str;
    unsigned long long int num;
    int choice;
    bool flag = true;
    cout << "Enter Account Name: ";
    getline(cin, str, '\n');
    cout << "Enter Account Number: ";
    cin >> num;
    account *acc = new account(str, num);
    while (flag)
    {
        cout << "1. Deposit\n2. Withdraw\n3. Print Details\n0. Exit\nOption: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            acc->deposit();
            break;

        case 2:
            acc->withdraw();
            break;

        case 3:
            acc->print();
            break;

        case 0:
            flag = false;
            break;

        default:
            cout << "Invalid Input!!" << endl
                 << endl;
            break;
        }
    }
}