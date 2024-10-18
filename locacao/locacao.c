#include <stdio.h>
#include <stdlib.h>
#include "locacao.h"

void locacao(void){
    int op_locacao;
    do{
        system("clear||cls");
        printf("\n*-------------------------------------------------------------------------------*\n");
        printf("*                               Módulo Locação                                  *\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf("|                             1. Reservar Bicicleta                             |\n");
        printf("|                             2. Reservar Patinete                              |\n");
        printf("|                             3. Devolver Bicicleta                             |\n");
        printf("|                             4. Devolver Patinete                              |\n");
        printf("|                             5. Consultar Locação                              |\n");
        printf("|                             0. Voltar                                         |\n");
        printf("|                                                                               |\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op_locacao);
        getchar();
        switch (op_locacao) {
            case 1:
                reservarBicicleta();
                break;
            case 2:
                reservarPatinete();
                break;
            case 3:
                devolverBicicleta();
                break;
            case 4:
                devolverPatinete();
                break;
            case 5: 
                consultarAluguel();
            case 0:
                break;
            default:
                printf("Valor invalido");
            break;
        }
    }while(op_locacao != 0);
}