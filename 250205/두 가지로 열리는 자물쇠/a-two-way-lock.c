#include <stdio.h>

int main() {
    int a[105]={0,},b[105]={0,},c[105]={0,},n,a1,b1,c1,a2,b2,c2,cnta=0,cntb=0,cntc=0,cnt=0;
    scanf("%d",&n);
    scanf("%d %d %d",&a1,&b1,&c1);
    scanf("%d %d %d",&a2,&b2,&c2);
    if(a1==1)
    {
        a[n-1]=1;
        a[n]=1;
        a[1]=1;
        a[2]=1;
        a[3]=1;
    }
    else if(a1==2)
    {
        a[n]=1;
        a[1]=1;
        a[2]=1;
        a[3]=1;
        a[4]=1;
    }
    else if(a1==n-1)
    {
        a[n-3]=1;
        a[n-2]=1;
        a[n-1]=1;
        a[n]=1;
        a[1]=1;
    }
    else if(a1==n)
    {
        a[n-2]=1;
        a[n-1]=1;
        a[n]=1;
        a[1]=1;
        a[2]=1;
    }
    else
    {
        for(int i=a1-2;i<=a1+2;i++)
        {
            a[i]=1;
        }
    }
    if(b1==1)
    {
        b[n-1]=1;
        b[n]=1;
        b[1]=1;
        b[2]=1;
        b[3]=1;
    }
    else if(b1==2)
    {
        b[n]=1;
        b[1]=1;
        b[2]=1;
        b[3]=1;
        b[4]=1;
    }
    else if(b1==n-1)
    {
        b[n-3]=1;
        b[n-2]=1;
        b[n-1]=1;
        b[n]=1;
        b[1]=1;
    }
    else if(b1==n)
    {
        b[n-2]=1;
        b[n-1]=1;
        b[n]=1;
        b[1]=1;
        b[2]=1;
    }
    else
    {
        for(int i=b1-2;i<=b1+2;i++)
        {
            b[i]=1;
        }
    }
    if(c1==1)
    {
        c[n-1]=1;
        c[n]=1;
        c[1]=1;
        c[2]=1;
        c[3]=1;
    }
    else if(c1==2)
    {
        c[n]=1;
        c[1]=1;
        c[2]=1;
        c[3]=1;
        c[4]=1;
    }
    else if(c1==n-1)
    {
        c[n-3]=1;
        c[n-2]=1;
        c[n-1]=1;
        c[n]=1;
        c[1]=1;
    }
    else if(c1==n)
    {
        c[n-2]=1;
        c[n-1]=1;
        c[n]=1;
        c[1]=1;
        c[2]=1;
    }
    else
    {
        for(int i=c1-2;i<=c1+2;i++)
        {
            c[i]=1;
        }
    }
    if(a2==1)
    {
        if(a[n-1]==1)
            a[n-1]=2;
        else
            a[n-1]=3;
        if(a[n]==1)
            a[n]=2;
        else
            a[n]=3;
        if(a[1]==1)
            a[1]=2;
        else
            a[1]=3;
        if(a[2]==1)
            a[2]=2;
        else
            a[2]=3;
        if(a[3]==1)
            a[3]=2;
        else
            a[3]=3;
    }
    else if(a2==2)
    {
        if(a[n]==1)
            a[n]=2;
        else
            a[n]=3;
        if(a[1]==1)
            a[1]=2;
        else
            a[1]=3;
        if(a[2]==1)
            a[2]=2;
        else
            a[2]=3;
        if(a[3]==1)
            a[3]=2;
        else
            a[3]=3;
        if(a[4]==1)
            a[4]=2;
        else
            a[4]=3;
    }
    else if(a2==n-1)
    {
        if(a[n-3]==1)
            a[n-3]=2;
        else
            a[n-3]=3;
        if(a[n-2]==1)
            a[n-2]=2;
        else
            a[n-2]=3;
        if(a[n-1]==1)
            a[n-1]=2;
        else
            a[n-1]=3;
        if(a[n]==1)
            a[n]=2;
        else
            a[n]=3;
        if(a[1]==1)
            a[1]=2;
        else
            a[1]=3;
    }
    else if(a2==n)
    {
        if(a[n-2]==1)
            a[n-2]=2;
        else
            a[n-2]=3;
        if(a[n-1]==1)
            a[n-1]=2;
        else
            a[n-1]=3;
        if(a[n]==1)
            a[n]=2;
        else
            a[n]=3;
        if(a[1]==1)
            a[1]=2;
        else
            a[1]=3;
        if(a[2]==1)
            a[2]=2;
        else
            a[2]=3;
    }
    else
    {
        for(int i=a2-2;i<=a2+2;i++)
        {
            if(a[i]==1)
                a[i]=2;
            else
                a[i]=3;
        }
    }
    if(b2==1)
    {
        if(b[n-1]==1)
            b[n-1]=2;
        else
            b[n-1]=3;
        if(b[n]==1)
            b[n]=2;
        else
            b[n]=3;
        if(b[1]==1)
            b[1]=2;
        else
            b[1]=3;
        if(b[2]==1)
            b[2]=2;
        else
            b[2]=3;
        if(b[3]==1)
            b[3]=2;
        else
            b[3]=3;
    }
    else if(b2==2)
    {
        if(b[n]==1)
            b[n]=2;
        else
            b[n]=3;
        if(b[1]==1)
            b[1]=2;
        else
            b[1]=3;
        if(b[2]==1)
            b[2]=2;
        else
            b[2]=3;
        if(b[3]==1)
            b[3]=2;
        else
            b[3]=3;
        if(b[4]==1)
            b[4]=2;
        else
            b[4]=3;
    }
    else if(b2==n-1)
    {
        if(b[n-3]==1)
            b[n-3]=2;
        else
            b[n-3]=3;
        if(b[n-2]==1)
            b[n-2]=2;
        else
            b[n-2]=3;
        if(b[n-1]==1)
            b[n-1]=2;
        else
            b[n-1]=3;
        if(b[n]==1)
            b[n]=2;
        else
            b[n]=3;
        if(b[1]==1)
            b[1]=2;
        else
            b[1]=3;
    }
    else if(b2==n)
    {
        if(b[n-2]==1)
            b[n-2]=2;
        else
            b[n-2]=3;
        if(b[n-1]==1)
            b[n-1]=2;
        else
            b[n-1]=3;
        if(b[n]==1)
            b[n]=2;
        else
            b[n]=3;
        if(b[1]==1)
            b[1]=2;
        else
            b[1]=3;
        if(b[2]==1)
            b[2]=2;
        else
            b[2]=3;
    }
    else
    {
        for(int i=b2-2;i<=b2+2;i++)
        {
            if(b[i]==1)
                b[i]=2;
            else
                b[i]=3;
        }
    }
    if(c2==1)
    {
        if(c[n-1]==1)
            c[n-1]=2;
        else
            c[n-1]=3;
        if(c[n]==1)
            c[n]=2;
        else
            c[n]=3;
        if(c[1]==1)
            c[1]=2;
        else
            c[1]=3;
        if(c[2]==1)
            c[2]=2;
        else
            c[2]=3;
        if(c[3]==1)
            c[3]=2;
        else
            c[3]=3;
    }
    else if(c2==2)
    {
        if(c[n]==1)
            c[n]=2;
        else
            c[n]=3;
        if(c[1]==1)
            c[1]=2;
        else
            c[1]=3;
        if(c[2]==1)
            c[2]=2;
        else
            c[2]=3;
        if(c[3]==1)
            c[3]=2;
        else
            c[3]=3;
        if(c[4]==1)
            c[4]=2;
        else
            c[4]=3;
    }
    else if(c2==n-1)
    {
        if(c[n-3]==1)
            c[n-3]=2;
        else
            c[n-3]=3;
        if(c[n-2]==1)
            c[n-2]=2;
        else
            c[n-2]=3;
        if(c[n-1]==1)
            c[n-1]=2;
        else
            c[n-1]=3;
        if(c[n]==1)
            c[n]=2;
        else
            c[n]=3;
        if(c[1]==1)
            c[1]=2;
        else
            c[1]=3;
    }
    else if(c2==n)
    {
        if(c[n-2]==1)
            c[n-2]=2;
        else
            c[n-2]=3;
        if(c[n-1]==1)
            c[n-1]=2;
        else
            c[n-1]=3;
        if(c[n]==1)
            c[n]=2;
        else
            c[n]=3;
        if(c[1]==1)
            c[1]=2;
        else
            c[1]=3;
        if(c[2]==1)
            c[2]=2;
        else
            c[2]=3;
    }
    else
    {
        for(int i=c2-2;i<=c2+2;i++)
        {
            if(c[i]==1)
                c[i]=2;
            else
                c[i]=3;
        }
    }
    if(n<5)
        cnt=1;
    else
    {
        cnt=2*5*5*5;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==2)
                cnta++;
            if(b[i]==2)
                cntb++;
            if(c[i]==2)
                cntc++; 
        }
        cnt-=cnta*cntb*cntc;
    }
    printf("%d",cnt);
    return 0;
}