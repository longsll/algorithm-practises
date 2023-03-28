#include <iostream>

using namespace std;
int s[5];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s[i % 3] += t;
    }
    int ma = -1;
    for (int i = 0; i < 3; i++)
    {
        ma = max(ma, s[i]);
    }
    if (s[0] == ma)
        puts("chest");
    else if (s[1] == ma)
        puts("biceps");
    else
        puts("back");
    return 0;
}
