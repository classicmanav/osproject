// printing prime numbers less than or equal to a given number
#include<stdio.h>
#include<pthread.h>

int number,count;

void *show(void *n){

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
    }// end for loop
	
}

void main()
{
    
    printf("Enter the Number: ");
    scanf("%d",&number);
    printf("Prime Numbers are: \n");
    
    
    
    pthread_t tid1;
	
	pthread_create(&tid1, NULL,&show, NULL);
	pthread_join(tid1,NULL);
   
	
   printf("\n");
}
