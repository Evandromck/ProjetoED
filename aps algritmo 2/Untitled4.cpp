#include <stdio.h>

int main() {

    int conPar, conImpar, x, vetDig[10], vetPar[10], vetImpar[10];
    
    conPar = 0;
    conImpar = 0;

    for (x = 0; x < 10; x++) {// contador zerado e contando ate 10
        printf("\nDigite o %d.o numero: ", x + 1);
        scanf("%d%*c", &vetDig[x]);// colatendo a informa��o e inserindo no vetor vetDig[x]

        if (vetDig[x] % 2 == 0) { // comparando o numero digitador com a exig�ncia x % por 2 = 0 entra no if
             
			 vetPar[conPar] = vetDig[x];//inserindo o valor par no vetor[conPar]
            conPar++;
        }
        else {     // sen�o for par inserir o valor no [conImpar]
            vetImpar[conImpar] = vetDig[x];
            conImpar++;
        }
    }

    printf("\nVetor Par:\n");
    for (x = 0; x < conPar; x++) {// condi��o do vetor ate ultimo par 
        printf("%d\n", vetPar[x]);
    }

    printf("\nVetor Impar:\n");// condi��o do vetor ate ultimo impar
    for (x = 0; x < conImpar; x++) {
        printf("%d\n", vetImpar[x]);
    }
    return 0;
}
