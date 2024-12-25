#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[100],a[2],b[2],keep;
    int q,type,a1,b1;
    scanf("%s",s);
    scanf("%d",&q);
    getchar();
    int lenth=strlen(s);
    for(int i=0;i<q;i++)
    {
        scanf("%d %s %s",&type,&a,&b);
        if(type==1)
        {
            a1=atof(a);
            b1=atof(b);
            a1--;
            b1--;
            keep=s[a1];
            s[a1]=s[b1];
            s[b1]=keep;
            printf("%s\n",s);
        }
        else if(type==2)
        {
            for(int j=0;j<lenth;j++)
            {
                if(s[j]==a[0])
                {
                    s[j]=b[0];
                }
            }
            printf("%s\n",s);
        }
    }
    return 0;
}