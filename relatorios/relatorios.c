#include <stdio.h>
#include <stdlib.h>
#include "relatorios.h"

void relatorios(void){
    int op_relatorio;
    do{
        system("clear||cls");
        printf("\n*-------------------------------------------------------------------------------*\n");
        printf("*                                Módulo Relatório                               *\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf("|                           1. Lista Geral de Clientes                          |\n");
        printf("|                           2. Lista Geral de Bicicletas                        |\n");
        printf("|                           3. Lista Geral de Patinetes                         |\n");
        printf("|                           4. Bicicletas mais Alugadas                         |\n");
        printf("|                           5. Patinetes mais Alugados                          |\n");
        printf("|                           0. Voltar                                           |\n");
        printf("|                                                                               |\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op_relatorio);
        getchar();
        switch (op_relatorio){
            case 1:
                listarClientes();
                break;
            case 2:
                listarBicicletas();
                break;
            case 3:
                listarPatinetes();
                break;
            case 4:
                bicicleta_mais_alugadas();
                break;
            case 5:
                patinetes_mais_alugados();
                break;
            case 0:
                break;
            default:
                printf("Valor inválido");
                break;
        }
    }while (op_relatorio != 0);
}

void listarClientes(void){
    system("clear||cls");
    printf("\n*------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                          Listar Clientes                                                   *\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("|       Nome        |       CPF       |           Email             |      Fone      |   Data de Nacimento   |\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void listarBicicletas(void){
    system("clear||cls");
    printf("\n*------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                         Listar Bicicletas                                                  *\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("|     ID     |         Modelo          |         Marca          | Ano de Fabricação |   Tamanho do Quadro    |\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void listarPatinetes(void){
    system("clear||cls");
    printf("\n*------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                         Listar Patinetes                                                   *\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("|     ID     |         Modelo          |         Marca          | Ano de Fabricação |  Bateria (capacidade)  |\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void bicicleta_mais_alugadas(void){
    system("clear||cls");
    printf("\n*------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                   Listar Bicicletas mais Alugadas                                          *\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("|     ID     |         Modelo          |         Marca          | Ano de Fabricação |   Tamanho do Quadro    |\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void patinetes_mais_alugados(void){
    system("clear||cls");
    printf("\n*------------------------------------------------------------------------------------------------------------*\n");
    printf("*                                      Listar Patinetes mais Alugados                                        *\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("|     ID     |         Modelo          |         Marca          | Ano de Fabricação |  Bateria (capacidade)  |\n");
    printf("*------------------------------------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}