#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power2(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    return power2(n/2)*power2(n/2);
}
ll multiply(ll x,ll n)
{
    return x*power2(n);
}
int main()
{
      ll x = 70, n = 2;
    cout<<multiply(x, n);
    return 0;
}
