#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll a, b, n;
void slove(ll a ,ll b ,ll n)
{
    for (int i = 1; i < n + 3; i++)a *= 10;
    cout << a / b % 1000;   
}
int main()
{
    scanf("%lld %lld %lld", &a, &b, &n);
    slove(a,b,n);
    return 0;
}
