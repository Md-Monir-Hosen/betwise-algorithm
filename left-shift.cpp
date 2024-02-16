
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int num1 = 1024;

    bitset<32> bt1(num1);
    cout << bt1 << endl;

    unsigned int num2 = num1 << 1;
    bitset<32> bt2(num2);
    cout << bt2 << endl;

    unsigned int num3 = num1 << 2;
    bitset<16> bitset13{ num3 };
    cout << bitset13 << endl;
}
