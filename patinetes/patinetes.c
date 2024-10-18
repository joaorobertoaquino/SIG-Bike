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

void cadastrarPatinete(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Cadastrar Patinete                              *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| ID:                                                                           |\n");
    printf("|                                                                               |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Bateria (capacidade):                                                         |\n");
    printf("|                                                                               |\n");
    printf("|                      Patinete cadastrado com sucesso!                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void pesquisarPatinete(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Pesquisar Patinete                              *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID do Patinete:                                                     |\n");
    printf("|                                                                               |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Bateria (capacidade):                                                         |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}