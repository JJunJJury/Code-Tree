#include <stdio.h>

int a[105],b[105];
int case1(int n);
int case2(int n);
int case3(int n);
int case4(int n);
int case5(int n);
int case6(int n);
int main() {
    int n,big=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    cnt=case1(n);
    if(cnt>big)
        big=cnt;
    cnt=case2(n);
    if(cnt>big)
        big=cnt;
    cnt=case3(n);
    if(cnt>big)
        big=cnt;
    cnt=case4(n);
    if(cnt>big)
        big=cnt;
    cnt=case5(n);
    if(cnt>big)
        big=cnt;
    cnt=case6(n);
    if(cnt>big)
        big=cnt;
    printf("%d",big);
    return 0;
}

int case1(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==2)
            cnt++;
        if(a[i]==2&&b[i]==3)
            cnt++;
        if(a[i]==3&&b[i]==1)
            cnt++;
    }
    return cnt;
}

int case2(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==3)
            cnt++;
        if(a[i]==2&&b[i]==1)
            cnt++;
        if(a[i]==3&&b[i]==2)
            cnt++;
    }
    return cnt;
}

int case3(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==3)
            cnt++;
        if(a[i]==2&&b[i]==1)
            cnt++;
        if(a[i]==3&&b[i]==2)
            cnt++;
    }
    return cnt;
}

int case4(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==2)
            cnt++;
        if(a[i]==2&&b[i]==3)
            cnt++;
        if(a[i]==3&&b[i]==1)
            cnt++;
    }
    return cnt;
}

int case5(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==3)
            cnt++;
        if(a[i]==2&&b[i]==1)
            cnt++;
        if(a[i]==3&&b[i]==2)
            cnt++;
    }
    return cnt;
}

int case6(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==2)
            cnt++;
        if(a[i]==2&&b[i]==3)
            cnt++;
        if(a[i]==3&&b[i]==1)
            cnt++;
    }
    return cnt;
}