#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int p=0, N[10], R[10], C[10];
	int mineral=0, residuo=0, cant=0, x=0, y[10];
	char terreno[10][10];
	
	cout<<"*************";
	cout<<"\n5. Patrimonio";
	cout<<"\n*************";
	
	cout<<"\n\nDigite el numero de casos de prueba: ";
	cin>>p;
	
	for(int i=1; i<=p; i++){
		cout<<"\nCaso de prueba #"<<i;
		cout<<"\nDigite la cantidad de herederos: ";
		cin>>N[i];
		cout<<"\nDigite el tamano de la fila: ";
		cin>>R[i];
		cout<<"\nDigite el tamano de la columna: ";
		cin>>C[i];
	}
	
	cout<<"\nSolo digite '+' si la hectaria tiene mineral y '.' si la hectarias es vacia";
	cout<<"\nNota: Si digita valores diferentes a '+' o '.', el sistema fallara";
	
	for(int i=1; i<=p; i++){
		mineral=0;
		cout<<"\n\nInformacion del terreno del caso de prueba #"<<i<<"\n";
		for(int j=1; j<=R[i]; j++){
			for(int k=1; k<=C[i]; k++){
				cout<<"En la posicion ["<<j<<"]["<<k<<"]: ";
				cin>>terreno[j][k];
			
				if(terreno[j][k]==43){
					mineral += 1;
				}
			}
		}
			
		cout<<"\nTerreno: \n";
		for(int j=1; j<=R[i]; j++){
			for(int k=1; k<=C[i]; k++){
				cout<<terreno[j][k]<<"\t";
			}
			cout<<"\n";
		}
		
		cout<<"\nCantidad de minerales en el terreno: "<<mineral<<"\n";
	
		cant = mineral / N[i];
		cout<<cant;
		residuo = mineral % N[i];
		if(residuo == 0){
			cout<<"\nCortes: \n";
			for(int j=1; j<=R[i]; j++){
				x=0;
				for(int k=1; k<=C[i]; k++){
					if(terreno[k][j]==43){
						x+=1;
						if(x==cant){
							cout<<k<<", ";
						}
					}
				}
			}
		} else {
			cout<<"\nIMPOSIBLE";
		}
	}
	cout<<"\n";
	system("pause");
	return 0;
}
