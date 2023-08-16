// Arquivo: Testador.cpp

#include <stdlib.h>
#include <stdio.h>
#include "ContaBancaria.h"


int main (void) {
	
	/******************************/
	/* testador da classe Cliente */
	/******************************/

	// declaracao do objeto da classe Cliente	
	
	   char cpfTitular[12]= "11111111111";
	   Cliente *cli = new Cliente(cpfTitular);
	
	// Chamada do metodo a ser testado
	
	printf(" \n %d - Cliente",Cliente::RecuperarQtdClientes());
	
	if(cli->VerificarCliente(cpfTitular)){
		printf("\n achei");
	} else{
		printf("\n nao achei");
	}
	
	// Exibicao na tela do retorno do metodo
		
		
	/*************************************/
	/* testador da classe Conta Bancaria */
	/************************************/

	// declaracao do objeto da classe ContaBancaria
	
	   ContaBancaria *cb = new ContaBancaria(cli);
	
	// Chamada do metodo a ser testado
	

	// Exibicao na tela do retorno do metodo		
    
	
	
	/**************************************/
	/* testador da classe Conta Corrente */
	/*************************************/

	// declaracao do objeto da classe ContaCorrente
	
	ContaCorrente *cc = new ContaCorrente(cli);
	
	// Chamada do metodo a ser testado
	printf(" Antes \n %d - CC",ContaCorrente::RecuperarQtdContas ());
	ContaCorrente::IncrementarQtdContas();
	printf(" Depois \n %d - CC",ContaCorrente::RecuperarQtdContas ());
	
	ContaCorrente::AberturaConta();
	ContaCorrente::ContaCorrente::Listagem();
	
	// Exibicao na tela do retorno do metodo		
    
    
    
   	/******************************************/
	/* testador da classe Conta ContaPoupanca */
	/******************************************/

	// declaracao do objeto da classe ContaPoupanca
	
	   ContaPoupanca *cp = new ContaPoupanca(cli);
	
	// Chamada do método a ser testado
		printf("\n %d - CP",ContaPoupanca::RecuperarQtdContas ());
	
	// Exibicao na tela do retorno do metodo
	
	
	/******************************************/	
    
	printf("\n\n");	   
    system("PAUSE");
    return EXIT_SUCCESS;
}
