#include <iostream>

using namespace std;
int n;
int main()
{
    scanf("%d",&n);
    while(n --)
    {
        int x ; 
        string s;
        scanf("%d",&x);
        cin >> s;
        int k = 0;
        if(s[0] == '1')k ++;
        for(int i  = 1 ; i < x ; i ++){
            if(s[i] == '0'){
                printf("-");
            }else{
                k ++;
                if(k & 1)printf("+");
                else printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}

