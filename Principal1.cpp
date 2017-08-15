#include <iostream>
#include "funciones2.h"
using namespace std;
int main(){
	int base,exponente,x,numero,opcion; //Declaraciones
	int arreglo[8]={1,2,8,4,3,6,7,9}; 
	string texto1[17]={"c","u","r","s","o","p","r","o","g","r","a","m","a","c","i","o","n"};
	string texto2[8]={"p","r","o","g","r","a","m","a"}; //Declaraciones
	
	
	
	
	while (1){
		cout<<"Escoga opcion 1,2,3,4 o 5 \n";  
		cin>>opcion;
		switch(opcion){  /*Menu de opciones para probar todos los
						   alogoritmos implementados */
	
			case 1:
				cout<<"Ingrese base:";
				cin>>base;
				cout<<"Ingrese exponente:";
				cin>>exponente;
				cout<<exponenciar(base,exponente); //Llamados a funciones con paramatros pedidoos
				break;
			case 2:
				cout<<"Ingrese un numero para buscar en el arreglo:";
				cin>>numero;
				cout<<busquedaExhaustiva(arreglo,numero); //Llamados a funciones con paramatros pedidoos
			case 3:
				cout<<"Algoritmo ordenamiento burbuja \n";
				algoritmoBurbuja(arreglo);
				break;
			case 4:
				cout<<"Algoritmo ordenamiento por seleccion \n";
				algoritmoSeleccion(arreglo); 
				break;
			case 5:
				cout<<algoritmoCadenas(texto1,texto2);
				
				break;
				
				
				
				
				
			default:
				cout<<"Valor incorrecto  Ingrese nuevo valor \n"; /* Si el usuario
																	ingresa un numero no pedido */ 
																						
				break;
				
		}
		
		
		
	}

	

	
	
	
}
