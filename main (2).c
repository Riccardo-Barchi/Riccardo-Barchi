/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcola_somma(int n1, int n2){
  return n1 + n2;
}

int main(int argc, char *argv[]){

int n1;

int n2;

n1 = atoi(argv[1]);

n2 = atoi(argv[2]);

if (n1 <= 0 || n2 <= 0) {
  return -1;
} else {
    printf("la somma è: %d\n", calcola_somma(n1, n2));
}
return 0;
}
