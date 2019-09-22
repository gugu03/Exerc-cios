#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3,media;
    printf("Digite tres notas\n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    media=(nota1+nota2+nota3)/3;
    if(media>=7){
        printf("A media %.2f\n",media);
        printf("Voce esta aprovado!!!");

    }
    else{
        printf("voce nao esta aprovado\n");
        printf("A media %.2f",media);
    }


    return 0;
}
