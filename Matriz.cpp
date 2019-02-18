#include <iostream>
#include <string>
#include <cstdlib>
#include <locale> // Biblioteca Acentua��o na linguagem destacada

using namespace std;
#define MaxL 3 //numero de linhas
#define MaxC 3 //numero de colunas

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese"); //seleciona o idioma para o qual vai se aplicar as acentua��es
	
	int Matriz[MaxL][MaxC];
	int Maior=0;
	int cont=0; //contador de posi��es
	int Mcont=0;  //posi��o
	
	cout<<"Informe os n�meros" << endl;
	for(int i=0; i<MaxL; i++){
		for(int j=0; j<MaxC; j++){
			cin>>Matriz[i][j];
			
		}
	}
	
	cout<<endl;
	cout<<endl;
	
	for(int i=0; i<MaxL; i++){
		for(int j=0; j<MaxC; j++){
			cout<<Matriz[i][j];
			cont = cont+1;  //contador de posi��es
			if (Matriz[i][j] > Maior){
				Maior = Matriz[i][j];
				Mcont = cont;  //posi��o
			}
		}
	}
	cout<<endl;
	cout<<"o maior n�mero �: "<< Maior <<endl;
	cout<<"O n�mero esta na posi��o: "<< Mcont <<endl;
	system("pause");
	return 0;
}
