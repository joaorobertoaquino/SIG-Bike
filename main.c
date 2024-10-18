#include <stdio.h>
#include <stdlib.h>
#include "clientes/clientes.h"
#include "bicicletas/bicicletas.h"

//Telas Principais
void telaInicial(void);
void locacao(void);
void relatorios(void);
void informacoes(void);

//Módulo Clientes

//Módulo Bicicletas

//Módulo Patinetes
void deletarPatinete(void);

//Módulo Locação
void reservarBicicleta(void);
void reservarPatinete(void);
void devolverBicicleta(void);
void devolverPatinete(void);
void consultarAluguel(void);

//Relatórios
void listarClientes(void);
void listarBicicletas(void);
void listarPatinetes(void);
void bicicleta_mais_alugadas(void);
void patinetes_mais_alugados(void);

//Informações
//Makefile adicionado

int main(){
    int op_pric;
    do{
        telaInicial();
        scanf("%d", &op_pric);
        getchar();
        switch (op_pric){
            case 1:
                clientes();
                break;

            case 2:
                bicicletas();
                break;

            case 3:
                patinetes();
                break;

            case 4:
                locacao();
                break;

            case 5:
                relatorios();
                break;

            case 6:
                informacoes();
                break;

            case 0:
                printf("Saindo do sistema...\n");
                exit(0);

            default:
                printf("Opção inválida! Tente novamente.\n");
                telaInicial();
            break;
        }
    }while(op_pric != 0);
    return 0;
}


void telaInicial(void){
    system("clear||cls");
    printf("\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                         Seja Bem Vindo ao SIG - Bike                          |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                            1. Módulo Clientes                                 |\n");
    printf("|                            2. Módulo Bicicletas                               |\n");
    printf("|                            3. Módulo Patinetes                                |\n");
    printf("|                            4. Módulo Locação                                  |\n");
    printf("|                            5. Relatórios                                      |\n");
    printf("|                            6. Informações                                     |\n");
    printf("|                            0. Sair                                            |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf(" Digite o número da opção desejada: ");
}

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

void reservarBicicleta(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Reservar Bicicleta                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID da Bicicleta:                                                    |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void reservarPatinete(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Reservar Patinete                                *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID do Patinete:                                                     |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void devolverBicicleta(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Devolver Bicicleta                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID da Bicicleta:                                                    |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void devolverPatinete(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Devolver Patinete                                *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID do Patinete:                                                     |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void consultarAluguel(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Consultar Aluguel                                *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Você deseja consultar por ""Bicicleta"" ou ""Patinete"" ?:                    |\n");
    printf("|                                                                               |\n");
    printf("| Informe o ID:                                                                 |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void relatorios(void){
    int op_relatorio;
    do{
        system("clear||cls");
        printf("\n*-------------------------------------------------------------------------------*\n");
        printf("*                                Módulo Relatório                               *\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf("|                             1. Lista Geral de Clientes                        |\n");
        printf("|                             2. Lista Geral de Bicicletas                      |\n");
        printf("|                             3. Lista Geral de Patinetes                       |\n");
        printf("|                             4. Bicicletas mais Alugadas                       |\n");
        printf("|                             5. Patinetes mais Alugados                        |\n");
        printf("|                             0. Voltar                                         |\n");
        printf("|                                                                               |\n");
        printf("| Digite a opção desejada:                                                      |\n");
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

void informacoes(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("|                               Informações                                     |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| O SIG-Bike é um sistema simples destinado à gestão de uma empresa de locação  |\n");
    printf("| de bicicletas e patinetes. Este sistema apresenta módulos especializados que  |\n");
    printf("| facilitam a administração de clientes, bicicletas e patinetes, tornando o     |\n");
    printf("| processo de locação mais ágil e eficiente.                                    |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             Desenvolvedores:                                  |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                        Ariadny Dantas | @ariadnyD                             |\n");
    printf("|                        João Roberto   | @joaorobertoaquino                    |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    getchar();
    printf("Tecle <ENTER> para continuar...");
}