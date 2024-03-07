#include<cstdio>
#include<cstring>
using namespace std;
const int MAXN=1e6;
int t;
int n;
char s[MAXN+5];
int nxt[MAXN+5],lst[MAXN+5];
long long pos;
int nowlen;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s+1);
        n=strlen(s+1);
        s[0]=s[n+1]=0;
        for(int i=0;i<=n;i++)//初始化链表
        {
            nxt[i]=i+1;//指向下一个
        }
        for(int i=1;i<=n+1;i++)
        {
            lst[i]=i-1;//指向上一个
        }
        nowlen=n;
        scanf("%lld",&pos);
        int now=1;//当前所在的节点。
        while(true)
        {
            if(pos<=nowlen)
            {
                int p=0;
                while(pos--)
                {
                    p=nxt[p];
                }
                printf("%c",s[p]);
                break;
            }
            //找到第一个下降
            while(s[now]>=s[lst[now]])
            {
                now=nxt[now];
            }
            int the_last=lst[lst[now]];//真正要删去的其实是 lst[now] 号节点
            nxt[the_last]=now;
            lst[now]=the_last;
            pos-=nowlen;
            nowlen--;//长度减小
        }
    }
    printf("\n");
    return 0;
}