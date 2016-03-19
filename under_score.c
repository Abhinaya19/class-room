#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],res[50];
    int i,j=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]!='+')&&(str[i]!='(')&&(str[i]!=')')&&(str[i]!='-')&&(str[i]!='*')&&(str[i]!='/'))
        {
            res[j]=str[i];
            j++;
        }
        else
        {
            res[j]='_';
            j++;
        }
    }
    printf("%s",res);
    return 0;
}
