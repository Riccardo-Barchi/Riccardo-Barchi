/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int somma(int a, int b)
{
    return a+b;
   
}


int main()
{
    
    int n1;
    int n2;
    
    
     printf("inserisci il primo numero\n");
    
   do
   {
      
       scanf("%d", &n1);
       if(n1<=0)
       {
           printf("il numero inserito non è maggiore di zero\n");
       }
       
   }while(n1<=0);
   
   printf("inserisci il secondo numero\n");
   
   do
   {
      
       scanf("%d", &n2);
       if(n2<=0)
       {
           printf("il numero inserito non è maggiore di zero\n");
       }
       
   }while(n2<=0);
   
   printf("La somma di %d e di %d è di: %d",n1,n2,somma(n1,n2));
    
    return 0;
}
