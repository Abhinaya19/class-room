#include<stdio.h>
#include<string.h>
int main()
{
    char str[30][30]={"abb","a","abb","aa","a"},res[30][30];
    int i,k=1,flag=0,j;
    strcpy(res[0],str[0]);
    for(i=1;i<=4;i++)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(strcmp(str[j],str[i])==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            strcpy(res[k],str[i]);
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("\n%s",res[i]);
    }
}
