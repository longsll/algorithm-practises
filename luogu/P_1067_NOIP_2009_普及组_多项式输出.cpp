#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        int t;
        cin >> t;
        if (!t)
            continue;
        if (i != n && t > 0)
            cout << "+";
        if (i == 0)
            cout << t;
        else{
            if(t != 1 && t != -1)cout << t;
            if(t == -1)cout << "-";
            cout << "x";
            if(i!= 1)cout << "^" << i;
        }
            
    }
    return 0;
}