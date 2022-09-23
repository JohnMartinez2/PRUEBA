#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(){
	int p=0, k[10], aux[20]; //Variables, P = Casos de prueba, k = Numero de entrada, aux = variable auxiliar
	
	cout<<"***********************";
	cout<<"\n4. Tarea de matematicas";
	cout<<"\n***********************";
	
	cout<<"\n\nDigite el numero de casos de prueba: "; //Casos de prueba P
	cin>>p;
	
	for(int i=1; i<=p; i++){ //Cliclo para ingresar las entradas
		cout<<"\nCaso de prueba #"<<i;
		cout<<"\nDigite un numero: "; //Numeros de entrada K
		cin>>k[i];
	}
	
	for(int i=1; i<=p; i++){ //Cliclo para mostar las salidas
		for(int j=2; k[i]>1; j++){ //Cliclo para hallar los primos de los numeros de entrada
			aux[i]=j;
			while(k[i]%aux[i] == 0){ //Ciclo para descomponer el numero de entrada en sus primos
				k[i] = k[i]/aux[i];
				
				if(aux[i]>5){ //Condicion para motrar solo los primos que multiplicados entre si den el numero de entrada
					if(k[i]>1){ //Condicion para mostrar valores de salida
						cout<<"\nEn el caso de prueba #"<<i<<" los numeros A y B: "; //Valores de salida
						cout<<aux[i]<<" ";
					} else {
						cout<<aux[i];
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
