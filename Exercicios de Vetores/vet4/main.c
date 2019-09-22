#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10],vet2[10],vet3[10],i;

    printf("Digite 10 numeros inteiros para o vetor 1!\n");
    for(i=0;i<10;i++){
        scanf("%d",&vet1[i]);
    }
    system("cls");
    printf("Digite 10 numeros inteiros para o vetor 2!\n");
     for(i=0;i<10;i++){
        scanf("%d",&vet2[i]);
    }
    system("cls");
    printf("A multiplicação do vetor 1 e vetor 2:");
    for(i=0;i<10;i++){
        vet3[i]=vet1[i]*vet2[i];
        printf("%d\n",vet3[i]);
    }

    return 0;
}
