#include <stdio.h>
#include <string.h>

int main() {
    char s[100],a,b,keep;
    int q,type,a1,b1;
    scanf("%s",s);
    scanf("%d",&q);
    int lenth=strlen(s);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&type);
        if(type==1)
        {
            scanf("%d %d",&a1,&b1);
            a1--;
            b1--;
            keep=s[a1];
            s[a1]=s[b1];
            s[b1]=keep;
            printf("%s\n",s);
        }
        else if(type==2)
        {
            scanf("%c %c",&a,&b);
            for(int j=0;j<lenth;j++)
            {
                if(s[j]==a)
                {
                    s[j]=b;
                }
            }
            printf("%s\n",s);
        }
    }
    return 0;
}