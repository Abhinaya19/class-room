sort acc to count:
#include<stdio.h>
int main()
{
    int a[20]={10,20,16},b[20],n,i,count=0,j,temp;
    for(i=0;i<=2;i++)
    {
        count=0;
        for(j=1;j<=a[i];j++)
        {
            if((a[i]%j)==0)
            {
            count++;
            }
        }
        b[i]=count;
    }
    for(i=0;i<=2;i++)
    {
        for(j=i+1;j<=2;j++)
        {   
            if(b[i]>b[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }   
    }
    for(i=0;i<=2;i++)
    {
        printf("%d",a[i]);
    }
   
}
