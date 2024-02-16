#include <iostream>
using namespace std;
void toggle(int& num, int pos) { num ^= (1 << pos); }
int main()
{
    int num = 4;
    int pos = 1;
    toggle(num, pos);
    cout << num << endl;
    return 0;
}
