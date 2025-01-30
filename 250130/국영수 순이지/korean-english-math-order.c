#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[13];
    int korean;
    int english;
    int math;
}Student;

int main() {
    int n,temp;
    char temp_name[13];
    Student people[13];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",people[i].name,&people[i].korean,&people[i].english,&people[i].math);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(people[j].korean<people[j+1].korean)
            {
                strcpy(temp_name,people[j].name);
                strcpy(people[j].name,people[j+1].name);
                strcpy(people[j+1].name,temp_name);
                temp=people[j].korean;
                people[j].korean=people[j+1].korean;
                people[j+1].korean=temp;
                temp=people[j].english;
                people[j].english=people[j+1].english;
                people[j+1].english=temp;
                temp=people[j].math;
                people[j].math=people[j+1].math;
                people[j+1].math=temp;
            }
            else if(people[j].korean==people[j+1].korean)
            {
                if(people[j].english<people[j+1].english)
                {
                    strcpy(temp_name,people[j].name);
                    strcpy(people[j].name,people[j+1].name);
                    strcpy(people[j+1].name,temp_name);
                    temp=people[j].korean;
                    people[j].korean=people[j+1].korean;
                    people[j+1].korean=temp;
                    temp=people[j].english;
                    people[j].english=people[j+1].english;
                    people[j+1].english=temp;
                    temp=people[j].math;
                    people[j].math=people[j+1].math;
                    people[j+1].math=temp;
                }
                else if(people[j].english==people[j+1].english)
                {
                    if(people[j].math<people[j+1].math)
                    {
                        strcpy(temp_name,people[j].name);
                        strcpy(people[j].name,people[j+1].name);
                        strcpy(people[j+1].name,temp_name);
                        temp=people[j].korean;
                        people[j].korean=people[j+1].korean;
                        people[j+1].korean=temp;
                        temp=people[j].english;
                        people[j].english=people[j+1].english;
                        people[j+1].english=temp;
                        temp=people[j].math;
                        people[j].math=people[j+1].math;
                        people[j+1].math=temp;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d %d",people[i].name,people[i].korean,people[i].english,people[i].math);
        puts("");
    }
    return 0;
}