// FINM32600_W23_Week2.cpp : Defines the entry point for the application.
//

#include <iostream>

using namespace std;

void IncrementByOne(int n)
{
    n = n + 1;
}

int IncrementByOne_Correct(int n)
{
    n = n + 1;

    return n;
}

int IncrementByOne_Reference(int& n)
{
    n = n + 1;
}

int main()
{
    // 1. Basic Hello World!
    cout << "Hello World!" << endl;

    // 2. Casting vs no casting
    int a = 3, b = 2;
    cout << a / b << endl;
    // Cast forcing to a double type
    cout << static_cast<double>(a) / b << endl;

    // 3. Declaring a constant variable
    const double pi = 3.14;
    /*
     * pi = 5.5 would run into error because we declared pi as
     * a constant
    */

    // 4. Increment By One
    int x = 5;
    IncrementByOne(x);
    cout << "Initial: x = " << x << endl;
    // The correct way to do it:
    x = IncrementByOne_Correct(x);
    cout << "Return value: x = " << x << endl;

    // 5. Reference
    int y = 10;
    int& refy = y;
    refy = 20; // This would change the y value as well
    cout << "Reference to y: y = " << y << endl;
    y = 5;
    cout << "y to Reference: Reference = " << refy << endl;
    // Increment by One with reference
    x = 5;
    IncrementByOne_Reference(x);
    cout << "Reference: x = " << x << endl;
    // Constant and reference
    const int x_1 = 1;
    const int& refx_1 = x_1;
    // x_1 = 10; would be an error
    // refx_1 = 10; would be an error
    int y_1 = 1;
    const int& refy_1 = y_1;
    y_1 = 10;
    cout << "Reference: " << refy_1 << endl;
    // refy_1 = 10; would be an error


    return 0;
}
