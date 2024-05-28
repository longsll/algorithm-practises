#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    int n , k;
    cin >> n >> k;
    if(k > n || k == 1){
        cout << -1;
        return 0;
    }
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    if(k & 1){
        vector<int>b;
        for(int i = k ; i >= 1 ; i --){
            b.push_back(a[i]);
        }
        swap(b[k / 2] , b[k / 2 + 1]);
        for(int i = 0 ; i < k ; i ++){
            cout << b[i] << " ";
        }
        for(int i = k + 1 ; i <= n ; i ++){
            cout << a[i] << " ";
        }  
    }else{
        for(int i = k ; i >= 1 ; i --){
            cout << a[i] << " ";
        }
        for(int i = k + 1 ; i <= n ; i ++){
            cout << a[i] << " ";
        }        
    }

    return 0;
}