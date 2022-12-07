#include<stdio.h>
#include<conio.h>

int main()
{   

    int no,i,count=0;
    printf("enter the number : ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf(" \n PRIME NO ");
    }    
    else
    {
     printf("\n NOT PRIME NO ");    
    }
    return 0;
}