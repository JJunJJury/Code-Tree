#include <stdio.h>

int main() {
    int a[25],n,max=-1,ch1,ch2,ch3,num,sum=0,check=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                check=0;
                ch1=a[i];
                ch2=a[j];
                ch3=a[k];
                while(1)
                {
                    if(ch1<10&&ch2<10&&ch3<10)
                        break;
                    num=(ch1%10)+(ch2%10)+(ch3%10);
                    if(num>=10)
                    {
                        check=1;
                        break;
                    }
                    ch1/=10;
                    ch2/=10;
                    ch3/=10;
                }
                num=ch1+ch2+ch3;
                if(num>=10)
                {
                    check=1;
                }
                if(check==0)
                {
                    num=a[i]+a[j]+a[k];
                    if(num>max)
                        max=num;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}