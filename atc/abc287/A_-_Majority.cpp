#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, k = 0;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        if (s == "For")
            k++;
        else
            k--;
    }
    if (k > 0)
        puts("Yes");
    else
        puts("No");
    return 0;
}