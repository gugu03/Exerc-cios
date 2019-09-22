#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Matriz[5] [5];
    int i,p;
    printf("Digite 25 numeros inteiros!\n");
    for(i=0;i<5;i++){
       for(p=0;p<5;p++){
        scanf("%f",Matriz[i] [p]);
       }
    }
    printf("%f",&Matriz [0] [0]);
    return 0;
}
