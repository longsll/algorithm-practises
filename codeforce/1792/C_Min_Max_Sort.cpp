#include<stdio.h>

const int N=2e5+5;
int T,n,x,k,p[N];

int main() {
    scanf("%d",&T);
    while (T--) {
        scanf("%d",&n);
        for (int i=1; i<=n; ++i)
            scanf("%d",&x),p[x]=i;
        k=(n>>1);//最大为n/2
        //k次能把前k个与后k个排好
        //如果中间的排好就是可以的
        while (k&&p[k]<p[k+1]&&p[n-k+1]>p[n-k]) --k;
        printf("%d\n",k);
    }
    return 0;
}