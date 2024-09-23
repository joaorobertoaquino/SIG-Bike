#include <stdio.h>
#include <stdlib.h>

void telaInicial(void);
void clientes(void);
void bicicletas(void);
void patinetes(void);
void relatorios(void);
void informacoes(void);

int main(){
    telaInicial();
    clientes();
    bicicletas();
    patinetes();
    relatorios();
    informacoes();
    return 0;
}

void telaInicial(void){
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
    printf("*-------------------------------------------------------------------------------*\n");

}

void clientes(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Clientes                                 *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Cadastrar                                      |\n");
    printf("|                             2. Pesquisar                                      |\n");
    printf("|                             3. Atualizar                                      |\n");
    printf("|                             4. Deletar                                        |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void bicicletas(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Bicicletas                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Cadastrar                                      |\n");
    printf("|                             2. Pesquisar                                      |\n");
    printf("|                             3. Atualizar                                      |\n");
    printf("|                             4. Deletar                                        |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void patinetes(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Patinetes                                *\n");
    printf("*--------------------------------------------------------------------------------*\n");
    printf("|                             1. Cadastrar                                      |\n");
    printf("|                             2. Pesquisar                                      |\n");
    printf("|                             3. Atualizar                                      |\n");
    printf("|                             4. Deletar                                        |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
} 

void locacao(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Locação                                  *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Realizar Locação                               |\n");
    printf("|                             2. Devolver Bicicleta/Patinete                    |\n");
    printf("|                             3. Consultar Locação                              |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void relatorios(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                                Módulo Relatório                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Lista Geral de Clientes                        |\n");
    printf("|                             2. Lista Geral de Bicicletas                      |\n");
    printf("|                             3. Lista Geral de Patinetes                       |\n");
    printf("|                             4. Veículos mais Alugados                         |\n");
    printf("|                             5. Histórico de Alugueis                          |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void informacoes(void){
    printf("*-------------------------------------------------------------------------------*\n");
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
}