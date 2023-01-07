#include <iostream>
#include <math.h>       /* pow */
#include <stdlib.h>

using namespace std;


multiplicacao(){
	system("clear||cls");
	int n1, n2, r;
	cout<< "Digite um numero \n";
	cin>> n1;
	system("clear||cls");
	cout<< "Digite um numero \n";
	cin>> n2;
	r = n1*n2;
	system("clear||cls");
	cout<< "O resultado da sua operacao e  " <<r;


}
IMC(){
	float peso, altura, imc;
	int sexo;
	cout<<"------------------------------------------------------\n";
	cout<<"-------------CALCULO DE MASSA CORPORAL----------------\n";
	cout<<"------------------------------------------------------\n";
	cout<<"\nDigite a ALTURA(Valor em metros. Exemplo: 1.50):\n";
	cout<<"--> ";
	cin>>altura;
	system("clear||cls");

	cout<<"------------------------------------------------------\n";
	cout<<"Digite o PESO:\n";
	cout<<"------------------------------------------------------\n";
	cout<<"--> ";
	cin>>peso;
	system("clear||cls");
	
	cout<<"------------------------------------------------------\n";
	cout<<"Digite o SEXO (1 para HOMEM e 2 para MULHER):\n";
	cout<<"------------------------------------------------------\n";
	cout<<"--> ";
	cin>>sexo;
	system("clear||cls");

	imc = peso / (altura * altura);
	cout<<peso<<"\n";
	cout<<altura<<"\n";
	cout<<imc<<"\n";

	if (sexo == 1) {

		if (imc<20.7){
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Abaixo do Peso Ideal.\n";
		} else if (imc<26.4){
			cout<<"\nSeu IMC é de: "<<imc<<". Você está No Peso Ideal.\n";
		} else if (imc<27.8){
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Marginalmente acima do peso Ideal.\n";
		} else if (imc<31.1){
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Acima do peso ideal.\n";
		} else {
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Obeso.\n";	
		}

	} else if (sexo == 2) {

		if (imc<19.1) {
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Abaixo do Peso Ideal.\n";	
		} else if (imc<25.8) {
			cout<<"\nSeu IMC é de: "<<imc<<". Você está No Peso Ideal.\n";
		} else if (imc<27.3){
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Marginalmente acima do peso Ideal.\n";
		} else if (imc<32.3){
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Acima do peso ideal.\n";
		} else {
			cout<<"\nSeu IMC é de: "<<imc<<". Você está Obesa.\n";
		}

	} else {
		cout<<"\nNão foi possível realizar o cálculo\n";
	}
		
	
	
}
divisao(){
	system("clear||cls");
	int n1, n2, r;
	cout<< "Digite um numero \n";
	cin>> n1;
	system("clear||cls");
	cout<< "Digite um numero \n";
	cin>> n2;
	r = n1/n2;
	system("clear||cls");
	cout<< "O resultado da divisao e  " <<r;
}
soma(){
	system("clear||cls");
	int n1, n2, r;
	cout<< "Digite um numero \n";
	cin>> n1;
	system("clear||cls");
	
	cout<< "Digite um numero \n";
	cin>> n2;
	system("clear||cls");
	r = n1+n2;
	cout<< "A soma dos dois numeros e : " <<r;
}
subtracao(){
	system("clear||cls");
	int n1, n2, r;
	cout<< "Digite um numero \n";
	cin>> n1;
	system("clear||cls");
	cout<< "Digite um numero \n";
	cin>> n2;
	system("clear||cls");
	r = n1-n2;
	cout<< "O resultado da subtracao e  " <<r;
}
area(){
	system("clear||cls");
	int n1, n2, r;
	cout<< "Digite um numero \n";
	cin>> n1;
	system("clear||cls");
	cout<< "Digite um numero \n";
	cin>> n2;
	r = n1*n2;
	system("clear||cls");
	cout<< "A area do quadrado e  " <<r;
}
tabuada(){
	system("clear||cls");
	int n1,i,f,vezes;
	
	i = 0;
	f = 11;	
	
	cout<< "digite um numero \n";
	cin>> n1;
	system("clear||cls");
	
	vezes = n1*i;
	
	while (i != f){

		cout<< n1 <<" X " << i <<" = " <<n1*i <<"\n";
		i = i + 1;
}
}
pow(){
	system("clear||cls");
	int n1,ex,resultado;
	cout<< "Digite a base \n";
	cin>> n1;
	system("clear||cls");
	cout<< "digite o expoente \n";
	cin>> ex;
	system("clear||cls"); 		
	resultado = pow(n1,ex);
	cout<<"O resultado da exponenciacao e "<<resultado;	
}
triangulo(){
	
	float n1, n2, n3;
	cout<< "Digite as dimencoes do triangulo \n";
	cout<< "A = ";
	cin>> n1;
	cout<< "B = ";
	cin>> n2;
	cout<< "C = ";
	cin>> n3;

if ((n1==n2) && (n2==n3)){
	cout<< "Seu triangulo e EQUILATERO \n";
}
else if ((n1!=n2) && (n1!=n3) && (n2!=n3)){
	cout<< "Seu triangulo e ESCALENO\n";
}
else{
	cout<< "Seu triangulo e ISOCELES\n";
}
	
}

parimpar()
{
    int n1;

    cout << "Digite um numero: ";
    cin >> n1;

    if (n1%2==0)
        cout <<"É par"<<endl;
    else
        cout <<"É impar"<<endl;
    
}

