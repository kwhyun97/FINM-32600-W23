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

void IncrementByOne_Reference(int& n)
{
    n = n + 1;
}

void swap1(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int* ap, int* bp)
{
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
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

    // 6. Pointers
    int x_2 = 5;
    int* px_2 = &x_2; // delcaring the pointer px_2 as the address of variable x_2
    cout << "Address of x_2: " << px_2 << endl;
    cout << "Value of x_2 from pointer: " << *px_2 << endl;
    // Changing value using pointer
    *px_2 = 10;
    cout << "Changing value using pointer: x_2 = " << x_2 << endl;
    int* px2; //legal but bad practice
    int* px2_2 = nullptr; //better practice
    // Swapping values
    int a_1 = 3, b_1 = 4;
    // Swapping using reference
    swap1(a_1, b_1);
    cout << "Swapped values: a_1 = " << a_1 << " b_1 = " << b_1 << endl;
    // Swapping using pointer
    swap2(&a_1, &b_1);
    cout << "Swapped back: a_1 = " << a_1 << " b_1 = " << b_1 << endl;

    // 7. Integer Arrays
    int myarray[5]; // need to specify the length with the definition
    myarray[0] = 1;
    myarray[1] = 2;
    myarray[2] = 3;
    myarray[3] = 4;
    myarray[4] = 5; // very inefficient way of defining the values in the array
    int myarray_2[] {1, 2, 3, 4, 5}; // another way to define
    // Arrays and pointers
    // The name of the array itself (e.g. "myarray") acts as a pointer.
    // For instance, you do not have to write &myarray
    cout << "Address of myarray using & operator: " << &myarray << endl;
    cout << "Address of myarray using just the name: " << myarray << endl;
    // Array name pointer and elements
    cout << "The location of the first element of myarray: " << &myarray[0] << endl;
    cout << "Address of myarray: " << myarray << endl;
    cout << "The location of the second element of myarray: " << &myarray[1] << endl;
    cout << "(Address of myarray) + 1: " << myarray + 1 << endl;


    // 8. String Arrays
    // We will use std::string type

    // 9. Control Structures
    // 9 - 1. Branching
    // 9 - 1 - 1. if/else:
    int x_3;
    cout << "Enter Number: ";
    cin >> x_3;
    // Nested if statements
    if (x_3 > 0)
    {
        cout << "Positive Number" << endl;
    }
    else if (x_3 < 0)
    {
        cout << "Negative Number" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    // 9 - 1 - 2. switch: don't need deeply nested if/else statements
    // switch expression NEEDS to be integer or enumerate values
    cout << "Enter number: ";
    int value = 0;
    cin >> value;
    switch (value)
    {
        case 0: cout << "Input: zero" << endl;
            break;

        case 1: cout << "Input: one" << endl;
            break;

        case 2: cout << "Input: two" << endl;
            break;

        default: cout << "Input is not 0, 1 or 2";
    }
    // 9 - 2. Loops
    // 9 - 2 - 1. while:
    int n = 0;

    while (n < 10)
    {
        cout << " n : " << n << endl;

        n = n + 1;
    }

    // 9 - 2 - 2. do:
    do
    {
        cout << "Enter number (0 to end): ";
        cin >> n;
        cout << "You entered: " << n << endl;
    } while (n != 0);


    return 0;
}
