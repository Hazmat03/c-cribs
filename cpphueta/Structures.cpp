#include <iostream>
using namespace std;

int main()
{
    struct Employee
    {
        short id;
        int age;
        double salary;
    };

    Employee john;
    john = { 5, 27, 45000.0 };
    Employee rob;
    rob = { 6, 24, 30000.0 };
    cout << john.id;
    cout << rob.age;
    return 0;
}