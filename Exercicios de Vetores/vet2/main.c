#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[5],vet2[5],vet3[5],i;

    printf("Digite 5 numeros inteiros para o vetor 1!\n");
    for(i=0;i<5;i++){
        scanf("%d",&vet1[i]);
    }
    system("cls");
    printf("Digite 5 numeros inteiros para o vetor 2!\n");
     for(i=0;i<5;i++){
        scanf("%d",&vet2[i]);
    }
    system("cls");
    printf("A soma do vetor 1 e vetor 2:\n");
    for(i=0;i<5;i++){
        vet3[i]=vet1[i]+vet2[i];
        printf("%d\n",vet3[i]);
    }
    return 0;
}
