#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int val1, val2;

    val1 = labs(1234355L);
    val2 = labs(-4325600L);

    cout << "labs(1234355L) = " << val1 << "\n";
    cout << "labs(-4325600L) = " << val2 << "\n";

    _getch();
    return 0;
}