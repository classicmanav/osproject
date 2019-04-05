//Finding all prime numbers below a particular number bu using threads.
//adding logic
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

 
int main()
{
   int n, i = 3, count, c;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
 
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 
   return 0;
}