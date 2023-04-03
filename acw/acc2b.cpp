#include<iostream>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if(n==2)
    {
        cout<<"YES"<<endl;
        return;
    }
    while (m)
    {
        int x = m % n;
        if (x == n - 1)
        {
            m+=n;
        }
        else if (x > 1)
        {
            cout << "NO" << endl;
            return;
        }
        m /= n;
    }
    cout << "YES" << endl;
}

int main()
{
    solve();
    return 0;
}