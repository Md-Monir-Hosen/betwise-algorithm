#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    cout << "Value of a without using NOT operator: " << a;
    cout << "\nInverting using NOT operator (with sign bit): " << (~a);
    cout << "\nInverting using NOT operator (without sign bit): " << (!a);

    return 0;
}
