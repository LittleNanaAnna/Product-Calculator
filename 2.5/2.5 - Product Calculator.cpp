/* 2.4.)	Write a statement (or comment) to accomplish each of the following (assume that using declarations have been used for cin, cout, and endl):
        a.	Document that a program calculates the product of three integers.
        b.	Declare the variables x, y, z, and result to be of type int (in separate statements) and initialize each to 0.
        c.	Prompt the user to enter three integers.
        d.	Read three integers from the keyboard and store them in the variables x, y, and z.
        e.	Compute the product of the three integers contained in variables x, y, and z, and assign the result to the variable result.
        f.	Print "The product is " followed by the value of the variable result.
        g.	Return a value from main indicating that the program terminated successfully.
    2.5.)	Using the statements you wrote in Exercise 2.4, write a complete program that calculates and displays the product of three integers. Add comments to the code where appropriate. [Note: You’ll need to write the necessary using declarations or directive.] 
    Programmer: Anna Le*/

#include <iostream>
using namespace std;

int main()
{
    //Varirable decleration
    int x;
    int y;
    int z;

    //Collecting user input variables
    cout << "Integer 1: ";
    cin >> x;
    cout << "Integer 2: ";
    cin >> y;
    cout << "Integer 3: ";
    cin >> z;

    //Making the product
    cout << "\nProduct: " <<x * y * z << endl;
    return 0;
}
