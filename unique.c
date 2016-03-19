unique:

#include<stdio.h>
int unique(int a[],int b[],int n)
{
    int flag=0,i,k,t;
    t=1;
    b[0]=a[0];
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(k=0;k<t;k++)
        {
            if(a[i]==b[k])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            b[t]=a[i];
            t++;
        }
    }
    return t-1;
}

int main()
{
    int a[20],n,b[20],i,m;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=unique(a,b,n);
    for(i=0;i<m;i++)
    {
        printf("\n%d",b[i]);
    }
   
    return 0;
}
