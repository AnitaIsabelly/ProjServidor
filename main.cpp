#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>


using namespace std;

void cabecalho();

int main(){
    setlocale (LC_ALL,"Portuguese");
  	system("title Análise de Desempenho usando Filas");

  	cabecalho();

    int serv1, serv2, serv3, cliente, simulacao;

    struct no *inicio1=NULL, *fim1=NULL, *inicio2=NULL, *fim2=NULL,*inicio3=NULL, *fim3=NULL;
    time_t tinicial, tatual;
    
    cout<<"\n\n\t\t\t-----------CONFIGURAÇÕES INICIAIS----------\n";
    cout<<"\n\t\tInsira o tempo de atendimento do servidor 1: ";
    cin>>serv1;
    cout<<"\n\t\tInsira o tempo de atendimento do servidor 2: ";
    cin>>serv2;
    cout<<"\n\t\tInsira o tempo de atendimento do servidor 3: ";
    cin>>serv3;
    cout<<"\n\t\tInsira o tempo de chegada dos clientes: ";
    cin>>cliente;
    cout<<"\n\t\tInsira o tempo total da simulação: ";
    cin>>simulacao;
  
    tinicial = time(NULL);
    do{
        tatual = time(NULL);
        cout<<"a";
        sleep(2);
    }while((int)(difftime(tatual, tinicial))<simulacao);
    
  return 0;
}

void cabecalho(){
  cout<<"\n\t\t --------------------------------------------------------";
	cout<<"\n\t\t| Pontificia Universidade Catolica de Campinas           |";
	cout<<"\n\t\t| Curso de Engenharia de Software                        |";
	cout<<"\n\t\t| Disciplina: Algoritmos e Estruturas de Dados A         |";
	cout<<"\n\t\t| Alunas:                                                |";
	cout<<"\n\t\t|    Anita Isabelly Gabionetta de Souza (20002515)       |";
	cout<<"\n\t\t|    Giulia Brocchi(20003778)                            |";
	cout<<"\n\t\t --------------------------------------------------------";
	cout<<"\n\t\t| Opcionais funcionando: OPCIONAIS                       |";
	cout<<"\n\t\t| Valor do Projeto: __  pontos                           |";
	cout<<"\n\t\t --------------------------------------------------------";
}
