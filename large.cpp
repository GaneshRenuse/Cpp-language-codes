#include <iostream>
using namespace std;

//C++ PROGRAMM TO CHECK THE LARGEST NUMBER BETWEEN THE ENTERED NUMBERS

int main()
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    if (n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;

    if (n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;

    return 0;
}