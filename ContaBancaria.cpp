// Arquivo: ContaBancaria.cpp

#include <stdio.h>

#include "ContaBancaria.h"


//***********************************
// ContaBancaria
//***********************************

int ContaBancaria::qtdContas = 0; 



ContaBancaria::ContaBancaria (Cliente* cliPonteiro)  {
	    
		titular    = cliPonteiro;
	  	
		  printf("Preencha seus dados: \n");
		printf("Coloque o numero da Agencia: ");
	  	scanf("%d",&numAgencia);
		printf("Coloque o numero da conta: ");
		scanf("%d",&numConta);
		printf("Coloque seu Saldo: ");
		scanf("%f",&saldo);
		printf("Coloque o dia em quem abriu a conta: ");
		scanf("%d",&dtAbDia);
		printf("Coloque o mes em que abriu a conta: ");
		scanf("%d",&dtAbMes);
		printf("Coloque o ano em que abriu a conta: ");
		scanf("%d",&dtAbAno);
		 fflush(stdin);	
		    		
}




void ContaBancaria::RecuperarConta (int* ag, int* ct, 
		                            int* dAbDia, int* dAbMes, int* dAbAno, 
								    float* sdo, char titCpf[12], char titNome[60],  
								    int* titNascDia, int* titNascMes, int* titNascAno, 
								    char titEndereco[60])   {
								    	
  		
  		
  		ag = &numAgencia;
  		ct = &numConta;
  		dAbDia =  &dtAbDia;
  		dAbMes =  &dtAbMes;
  		dAbAno =  &dtAbAno;
  		sdo  =  &saldo;
  		titNascDia = dtNascDia;
  		titNascMes = dtNascMes;
  		titNascAno = dtNascAno;
  		strcpy(titEndereco,endereco);
   		
  		
  		
  		
 }
