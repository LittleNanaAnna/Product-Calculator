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