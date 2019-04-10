// printing prime numbers less than or equal to a given number
#include<stdio.h>
void main()
{
    int number,count;
    printf("Enter the Number: ");
    scanf("%d",&number);
    printf("Prime Numbers are: \n");
    for(int i=1; i<=number; i++)
    {
        count=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d " ,i);
    }
	
   printf("\n");
}
