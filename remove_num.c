#include<stdio.h>
#include<string.h>
int isnum(char str[32])
{
    int l,i,flag=0;
    l=strlen(str);
    for(i=0;i<=l;i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            return 0;
            flag=1;
        }
    }
    if(flag==0)
    {
        return 1;
    }
}
int main()
{
    char str[10][32]={"a","b","32","a2","b4"},res[10][32];
    int i,j=0;
   
    for(i=0;i<=4;i++)
    {
        if(!isnum(str[i]))
        {
            strcpy(res[j],str[i]);
            j++;
        }
    }

    for(i=0;i<j;i++)
    {
        printf("\n%s",res[i]);
    }
    return 0;
    }
