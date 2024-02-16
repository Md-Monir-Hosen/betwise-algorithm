
#include <iostream>
using namespace std;
void unset(int& num, int pos)
{
    num &= (~(1 << pos));
}
int main()
{
    int num = 7;
    int pos = 1;
    unset(num, pos);
    cout << num << endl;
    return 0;
}
