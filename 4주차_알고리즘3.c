#include <stdio.h>
#include <cs50.h>


void dari(void);
int main(void)
{
    dari();
   
}


void dari(void)
{
    
   int n = get_int("총 인원:");
   int tim[n];
   int tmp;
   int sum = 0;


   for (int i = 0; i < n; i++)
   {
      tim[i] = get_int("걸리는 시간%i:",i+1);
   }
   
   for (int i=0; i < n-1 ; i++)
   {
       for (int j=0; j < n-1-i; j++)
       {
           if (tim[j]>tim[j+1])
           {
               tmp = tim[j];
               tim[j] = tim[j+1];
               tim[j+1] = tmp;
           }
       }
    }


    for (int i=1;i<n;i++)
    {
        sum = sum + tim[i];
    }
    printf("%i\n",sum);

    for (int i=1; i < n; i++)
    {    
    printf("%i %i\n",tim[0],tim[i]);
    if (i != n-1)
    {
        printf("%i\n",tim[0]);   
    }
         
    }
}
