// Arquivo: ContaPoupanca.cpp

#include <stdio.h>
#include <stdlib.h>
#include "ContaBancaria.h"


//***********************************
// ContaPoupanca
//***********************************

ContaPoupanca* vetorCp[10];

float ContaPoupanca::txRendimento = 0.5; 
int   ContaPoupanca::qtdContas = 0; 



ContaPoupanca::ContaPoupanca (Cliente* titular):ContaBancaria(titular) {
	
  		printf("\n Passou por: ContaPoupanca::ContaPoupanca (Cliente* titular):ContaBancaria(titular) \n") ;	
  		
}

 float ContaPoupanca::ObterTxRendimento (void) {
 	
  		printf("\n Passou por: float ContaPoupanca::ObterTxRendimento (void) \n") ;	
  		
  		return 0;

}

int ContaPoupanca::RecuperarQtdContas (void) {
	
  		
  		
  		return qtdContas;

}	  

void ContaPoupanca::IncrementarQtdContas (void) {
	
  		printf("\n Passou por: void ContaPoupanca::IncrementarQtdContas (void) \n") ;	
}

	  
void ContaPoupanca::RecuperarConta (int* ag, int* ct, 
                                    int* dAbDia, int* dAbMes, int* dAbAno,
                                    float* saldo, 
								    char titCpf [12], char titNome [60],             
                                    int* titNascDia, int* titNascMes, int* titNascAno, 
                                    char titEndereco [60], 
									int* diaRend, float* taxa) {

  		printf("\n Passou por: void ContaPoupanca::RecuperarConta (...) \n") ;	

}  
      
 void ContaPoupanca::AbrirConta (Cliente* titular)  {
 	
	int qtdContas= ContaPoupanca::RecuperarQtdContas();
	int i;
 	i = RecuperarQtdContas();
 	vetorCp[i] = new ContaPoupanca(titular);
 	ContaPoupanca::IncrementarQtdContas();
}

 void ContaPoupanca::AberturaConta (void) {

    int qtdContas= ContaPoupanca::RecuperarQtdContas();
	 
	 if(qtdContas==10){
	 	
	 	printf("Não estamos abrindo contas deste tipo no momento");
 	
	 }else{
	 	
	 Cliente* titular=Cliente::ObterCliente();
	 		
     }
}
    
void ContaPoupanca::Listagem (void) {
	
  		int qtdContas = ContaPoupanca::RecuperarQtdContas();
	 
	 
	int ag,  ct,  dAbDia,  dAbMes,  dAbAno,  titNascDia, titNascMes, titNascAno, diaRend, taxa; 
	char titEndereco[60], titCpf[12],  titNome[60];
	float sdo;
	
	
	if(qtdContas == 0) {
	
	printf("\n Não  existe contas correntes neste momento.");
	
		return;
	}else{
		
		for(int i =10;i<qtdContas;i++) {
								   
			printf("\n Informação do Cliente ");
			
			printf("\n CPF :%s ",titCpf);
			printf("\n Nome: %s",titNome);
			printf("\n Data de Nascimento:%d/%d/%d",titNascDia,titNascMes,titNascAno);
			printf("Endereço:%s ",titEndereco);
			
			printf("\n Informações da Conta Poupanca:");
			
			printf("\n Numero da Agencia: %i",ag);
			printf("\n Numero da Conta: %i",ct);	
			printf("\n Data de Abertura: %d/%d/%d",dAbDia,dAbMes,dAbAno);
			printf("\n Saldo: R$%2.f", sdo);
			printf("\n Dia de Rendimento: %i",diaRend);
			printf("\n Taxa de Rendimento: %i",taxa);	
										   
        }
    }

}
