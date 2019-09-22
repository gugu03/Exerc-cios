#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet1[10],M,i;

    printf("Digite 10 numeros inteiros para o vetor 1!\n");
    for(i=0;i<10;i++){
        scanf("%d",&vet1[i]);
    }
    system("cls");
    for(i=0;i<10;i++){
    if(vet1[i]>vet1[i+1]){
        M=vet1[i];
    }
    else {
        M=vet1[i+1];
    }

    }

    printf("O maior numero %d",M);
    return 0;
}
