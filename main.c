#include<stdio.h>
#include "lib.h"
#include<stdlib.h> // per malloc
#include<math.h>
int main(){
  int i,n, *Vettore,scelta,base;
  int dim=16;
  int numbasedieci;
printf("Convertitore Da Base N a base M\n");
printf("Inserisci: \n 1. Da Decimale a base N \n 2. Da base N a decimale\n");
scanf("%d",&scelta);
switch (scelta)
{
  case 1:
    printf("Inserire numero in base 10: ");
    scanf("%d",&numbasedieci);
    printf("Inserire base di 'arrivo' : ");
    scanf("%d",&base);
  //int dim= (int)(log2(numbasedieci)+1); //calcola la dimensione dell'array del binarioes 34= dim 6 =6bit per la rappresentazione
    Vettore=(int *)malloc(dim*sizeof(int)); // vettore è il puntatore al primo elemento di un array di 16 interi allocato dinamicamente
    Vettore=Deci_Bin(numbasedieci,Vettore,dim,base);
    printf("Numero in base 2: ");
    for(i=0;i<dim;i++)
    printf(" %d",Vettore[i]);
    printf("\n ");
    break;
/*  case 2:
    printf("Inserire numero in base 10: ");
    scanf("%d",&numbasedieci);
    Vettore=Deci_Penta(numbasedieci,Vettore,dim,);
    printf("Numero in base 5: ");
    for(i=0;i<dim;i++){
    printf(" %d",Vettore[i]);
    }
    printf("\n");
    break;
*/
}

} //main


/* Miglioramenti: Stabilire la dimensione dell'array da allocare in base al numero*/
/*Anche se in realtà è "pseudo" già fatto.. però non stampa correttamente il numero nonostante sia giusta la dim*/
