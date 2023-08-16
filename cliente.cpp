// Arquivo: Cliente.cpp

#include <stdio.h>
#include <string.h>
#include "ContaBancaria.h"



//***********************************
// Cliente
//***********************************

Cliente* vetorCli[10];
 
int Cliente::qtdClientes = 0;


Cliente::Cliente (char cpfTitular  [12]) {
	    
		
		strcpy(cpf, cpfTitular );
		
		printf("Informe os dados do cliente:\nNome:");
		scanf("%[A-Z a-z]", nome);

		printf("Data de Nascimento (Dia): ");
		scanf(" %i", &dtNascDia);
	
		printf("Data de Nascimento (Mes): ");
		scanf(" %i", &dtNascMes);
	
		printf("Data de Nascimento (Ano): ");
		scanf(" %i", &dtNascAno);
	
		printf("Endereco: ");
		scanf(" %[A-Z a-z 0-9]", endereco);		
	  
}

int Cliente::VerificarCliente (char cpfTitular [12]) {
	
	if(strcmp(cpfTitular,cpf)==0){
		
		return 1;
		
	}else{
		
		return 0;
	}
}

int Cliente::RecuperarQtdClientes (void) {
	
	
	return qtdClientes;

}	  

void Cliente::IncrementarQtdClientes (void) {
	
		

qtdClientes++;	
}

void Cliente::RecuperarCliente (char cliCpf[12], char cliNome[60], 
			                    int* cliNascDia, int* cliNascMes, int* cliNascAno, 
								char cliEnder[60])  {
									
	  strcpy(cliCpf, cpf);
	  strcpy(cliNome, nome);
	  *cliNascDia = dtNascDia;
	  *cliNascMes = dtNascMes;
      *cliNascAno = dtNascAno;
	  strcpy(cliEnder, endereco);	
									
	
}


Cliente* Cliente::VerificarExistenciaCliente (char cpfTitular [12]) {
	
	Cliente* titular=NULL;
	int qtd;
	
	qtd = Cliente::	RecuperarQtdClientes();
	
	for (int i = 0; i < qtd; i++){
		if (vetorCli[i]->VerificarCliente(cpfTitular)){
		
		titular = vetorCli[i];
		break;
		}
	
	}
	
	return titular;
}
     
Cliente* Cliente::ObterCliente (void) {
	
    char cpfTitular[12];
	Cliente *titular = NULL;
	int qtdClientes;
	
	printf("Informe o CPF do titular: ");
	gets(cpfTitular);
	
	qtdClientes = Cliente::RecuperarQtdClientes ();
	
	if(qtdClientes != 0){
		titular = Cliente::VerificarExistenciaCliente(cpfTitular);
	}
	if((titular == NULL) && (qtdClientes == 10)){
		printf("\nNão estamos aceitando novos clientes no momento");
		//system("PAUSE");
		return NULL;
	}
	if((titular == NULL) && (qtdClientes < 10)){
		int i = qtdClientes;
		vetorCli[i] = new Cliente(cpfTitular);
		titular = vetorCli[i];
		Cliente::IncrementarQtdClientes();
	}
	
	return titular;

}
