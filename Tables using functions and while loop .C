#include <stdio.h>

int table();

void main()

{
    int a;
    int i=1;
    while(i==1)
    {
    printf("Please enter the number :");
    scanf("%d",&a);
    table (a);
    printf ("please enter 1 to continue and 0 to Exit ");
    scanf("%d",&i);
    }  
}

int table (a)
{
    printf("%d\n",a);
    int b,result;   
    for (b=1;b<11;b=b+1)
    {
        result=a*b;
        printf("%d * %d= %d\n",a,b,result);
        

    }
 
}
