// Demonstration of friend Function

#include <iostream>

using namespace std;

class Distance
{
private:
    int d;
    friend Distance init(Distance, int);
    friend int add(Distance);
};

Distance init(Distance obj, int x)
{
    obj.d = x;
    return obj;
}

int add(Distance obj)
{

    obj.d += 5;
    return obj.d;
}

int main()
{
    Distance obj;
    obj = init(obj, 100);
    cout << "Distance: " << add(obj);
    return 0;
}
