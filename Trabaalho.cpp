#include <iostream>
#include <math.h>       /* pow */
#include <stdlib.h>
#include "funcao.cpp" 

using namespace std;

menu(){

cout<< "-------SISTEMA DE OPERACOES MATEMATICAS-------\n";
cout<< "( 1 ) - Calcular o indice de massa corporal de um homem ou mulher\n";
cout<< "( 2 ) - Verifcar que tipo de triangulo é \n";
cout<< "( 3 ) - Exponenciação de um numero \n";
cout<< "( 4 ) - Soma de dois numeros \n";
cout<< "( 5 ) - Dividir dois numeros \n";
cout<< "( 6 ) - Subtrair dois numeros \n";
cout<< "( 7 ) - Multiplicar dois numeros \n";
cout<< "( 8 ) - Calcular area do quadrado \n";
cout<< "( 9 ) - Testar se o numero e par ou impar \n";
cout<< "( 10 ) - Tabuada de um numero \n";
cout<<"\n \n( 0 ) - Sair de sistema \n ";
cout<<"-----------------------------------------------------------\n\n";
cout<<"Digite a sua Opcao: \n\n";
cout<<"--> ";

}
 
int main(){
bool ativo = true;
while (ativo){
	
	cout<<"\n\n";
	int opcao;
	menu();
	cin>>opcao;
	
		
	switch(opcao)
	{
		
		
			
		case 0:			
			cout<<"Fim de codigo";
			return 0;
		 
		case 1:
			system("clear||cls");
			IMC();			
			int resposta;
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
			
			
		case 2:
			triangulo();
			system("clear||cls");
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		case 3:
			pow();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		
		case 4:
			soma();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		case 5:
			divisao();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		case 6:
			subtracao();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		case 7:
			multiplicacao();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		case 8:
			area();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		case 9:
			parimpar();
			cout<<"ainda nao foi programdo";
				cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
		switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
			
		case 10:
			tabuada();
			cout<<"\n\nVoce quer fazer outra operacao matematica ?\n";
			cout<<"1 - SIM // 2 - NAO\n";
			cin>>resposta;
			switch (resposta){
				
				case 1:
					cout<<"\n\n";
					system("clear||cls");
					continue;
				
				case 2:
					cout<<"Obg por usar o programa";
					return 0;
					
				default:
					cout<<"Epa ! deu erro :) \nvamos reiniciar novamente o programa para voce !";
					continue;				
		}
		
		default:
			cout<<"Erro, Entrada Incorreta";
			return 0;
	
	
	}	
}

}


