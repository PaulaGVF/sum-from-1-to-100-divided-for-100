#include <stdlib.h>
#include <stdio.h>



int main()
{
    int sum,a;
    sum=0;
    for(a=0;a<=100;a++)
    {
      sum=sum+a;
      
    }  
    printf("soma de 1 - 100\n");
    
    printf("%d\n",sum); 
    
    printf("\n media da soma de 1-100 :\n");
    
    sum=sum/100;
    
    printf("%d\n",sum);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
