
#include <iostream>
using namespace std;
void set(int& num, int pos)
{
    num |= (1 << pos);
}
int main()
{
    int num = 4, pos = 1;
    set(num, pos);
    cout << (int)(num) << endl;
    return 0;
}
