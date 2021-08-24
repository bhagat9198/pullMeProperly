#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int a = 0, b = 0;
    cout << "Enter numbers a and b" << endl;
    cin >> a >> b;
    cout << "The addition is " << add(a, b) << endl;
    cout << "The subtraction is " << subtract(a, b) << endl;
    return 0;
}