#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[7],i,D=0;
    printf("Digite a temperatura dos dias das semanas;!\n");
    for(i=0;i<7;i++){
        scanf("%d",&vet1[i]);
    }
    system("cls");
    for(i=0;i<7;i++){
        if(vet1[i]>=15)
          D+=1;
    }
    if(D=1){
       printf("Foram %d dia a temperatura maior que 15!",D);
    }
    else
       printf("Foram %d dias a temperatura maior que 15!",D);
    return 0;
}
