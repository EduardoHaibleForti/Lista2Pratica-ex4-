#include <stdio.h>
#include <stdlib.h>

int main(){
    double N,estimativa,nova_estimativa,diferenca;

    printf("Digite um numero positivo:");
    scanf("%lf",&N);

    if(N<=0){
        printf("Digite um numero positivo");
        return 0;
    }
    estimativa=N/2.0;
    diferenca=0.00001;

    while(1){
        nova_estimativa=0.5*(estimativa+N/estimativa);
        if(estimativa-nova_estimativa<diferenca && estimativa-nova_estimativa>-diferenca){
            break;
        }
        estimativa=nova_estimativa;
    }
    printf("A raiz quadrada aproximada de %.5f eh %.5f",N,nova_estimativa);



    return 0;
}
