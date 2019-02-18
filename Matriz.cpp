#include <iostream>
#include <string>
#include <cstdlib>
#include <locale> // Biblioteca Acentuação na linguagem destacada

using namespace std;
#define MaxL 3 //numero de linhas
#define MaxC 3 //numero de colunas

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese"); //seleciona o idioma para o qual vai se aplicar as acentuações
	
	int Matriz[MaxL][MaxC];
	int Maior=0;
	int cont=0; //contador de posições
	int Mcont=0;  //posição
	
	cout<<"Informe os números" << endl;
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
			cont = cont+1;  //contador de posições
			if (Matriz[i][j] > Maior){
				Maior = Matriz[i][j];
				Mcont = cont;  //posição
			}
		}
	}
	cout<<endl;
	cout<<"o maior número é: "<< Maior <<endl;
	cout<<"O número esta na posição: "<< Mcont <<endl;
	system("pause");
	return 0;
}
