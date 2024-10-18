#include <stdio.h>
#include <stdlib.h>
#include "patinetes.h"

void patinetes(void){
    int op_patinete;
    do{
        system("clear||cls");
        printf("\n*-------------------------------------------------------------------------------*\n");
        printf("*                               Módulo Patinetes                                *\n");
        printf("*--------------------------------------------------------------------------------*\n");
        printf("|                             1. Cadastrar                                      |\n");
        printf("|                             2. Pesquisar                                      |\n");
        printf("|                             3. Atualizar                                      |\n");
        printf("|                             4. Deletar                                        |\n");
        printf("|                             0. Voltar                                         |\n");
        printf("|                                                                               |\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op_patinete);
        getchar();
        switch (op_patinete) {
            case 1:
                cadastrarPatinete();
                break;
            case 2:
                pesquisarPatinete();
                break;
            case 3:
                atualizarPatinete();
                break;
            case 4:
                deletarPatinete();
                break;
            case 0:
                break;
            default:
                printf("Valor invalido");
            break;
        }
    }while(op_patinete != 0);
} 