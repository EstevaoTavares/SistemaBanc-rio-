// Arquivo: ContaCorrente.cpp

#include <stdio.h>
#include <stdlib.h>
#include "ContaBancaria.h"


//***********************************
// ContaCorrente
//***********************************

ContaCorrente* vetorCc[10];

int ContaCorrente::qtdContas = 0; 


ContaCorrente::ContaCorrente (Cliente* titular):ContaBancaria(titular) {
	
  	printf("\n Passou por: ContaCorrente::ContaCorrente (Cliente* titular):ContaBancaria(titular) \n") ;	
		    		
}

int ContaCorrente::RecuperarQtdContas (void) {
	
  
	
	return qtdContas;
}	  

void ContaCorrente::IncrementarQtdContas (void) {
	
	
qtdContas++;
}


void ContaCorrente::AbrirConta (Cliente* titular) {
	
	int qtdContas= ContaCorrente::RecuperarQtdContas();
    int i;
 	i = RecuperarQtdContas();
 	vetorCc[i] = new ContaCorrente(titular);
 	
	 ContaCorrente::IncrementarQtdContas();	
		
}
      	
void ContaCorrente::AberturaConta (void) {
	
    int qtdContas= ContaCorrente::RecuperarQtdContas();
	 
	 if(qtdContas==10){
	 	
	 	printf("Não estamos abrindo contas deste tipo no momento");
 	
	 }else{
	 	
	 Cliente* titular=Cliente::ObterCliente();
	 			 
	 	
	 }
	 
}

void ContaCorrente::Listagem (void) {
	
	int qtdContas= ContaCorrente::RecuperarQtdContas();
	 
	 
	int ag,  ct,  dAbDia,  dAbMes,  dAbAno,  titNascDia,titNascMes,titNascAno; 
	char titEndereco[60], titCpf[12], titNome[60];
	float saldo;
	
	
	if(qtdContas == 0) {
	
	printf("\n Não  existe contas correntes neste momento.");
	
		return;
	}else{
		
		for(int i =0;i<qtdContas;i++) {
			
		
			
			vetorCc[i]->RecuperarConta( &ag,  &ct, 
		                           &dAbDia,  &dAbMes,  &dAbAno, 
								   &saldo,  titCpf,  titNome,  
								   &titNascDia,  &titNascMes,  &titNascAno, 
								   titEndereco);  
								   
			
			printf("\n Informação do Cliente ");
			
			printf("\n CPF :%s ",titCpf);
			printf("\n Nome: %s",titNome);
			printf("\n Data de Nascimento:%d/%d/%d",titNascDia,  titNascMes,  titNascAno);
			printf("Endereço:%s ",titEndereco);
			
			printf("\n Informações da Conta Corrente:");
			
			printf("\n Numero da Agencia: %i",ag);
			printf("\n Numero da Conta: %i",ct);	
			printf("\n Data de Abertura: %d/%d/%d",dAbDia,dAbMes,dAbAno);
			printf("\n Saldo: R$%2.f", saldo);
				
										   
        }
								
		
	}
	


		 
	
	
	
	
	
	
}
