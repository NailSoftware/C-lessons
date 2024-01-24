#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int i;
    
    // while (i < 3)
    // {
    //     printf("C is a fantastic language\n");
    //     i++;
    // }

    // do{
    //     printf("%d\n",i);
    // } while (i<=7);


    // for (i = 0; i < 20; i++)
    // {
    //     printf("%d",i);
    // }

    for ( i = 0; i < 10; i++)
    {
        if (i == 5 )
        {
            break;
        }
        printf("%d",i);
        
    }
     for ( i = 0; i < 10; i++)
    {
        if (i == 5 )
        {
            continue;
        }
        printf("%d",i);
        
    }
    


   
    return 0;
    
}