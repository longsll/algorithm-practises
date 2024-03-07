#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin  >> n;
        if(n == 1){
            cout << 1 << endl;;
        }else if(n == 2){
            cout << 2 << " " << 1 << endl;
        }
        else{
            int x = n - 3 , i;
            cout << 2 << " ";
            for(i = 1 ; i <= x / 2; i ++){
                cout << i + 3 << " ";
            }
            cout << 1 << " ";
            for(; i <= x ; i ++){
                cout << i + 3 << " ";
            }
            cout << 3 << " ";    
        }
        
    }
    return 0;
}