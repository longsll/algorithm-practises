#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n , ans = 0;
    cin >> n;
    string a , b;
    cin >> a;
    cin >> b;
    for(int i = 0 ; i < n ; i ++){
        if(a[i] == 'Y' && b[i] =='Y')ans += 3;
        else if(a[i] == 'Y' && b[i] == 'N')ans += 2;
        else if(a[i] == 'N' && b[i] == 'Y')ans += 2;
    }
    cout << ans ;
    return 0;
}