#include <iostream>
using namespace std;

/*Función: Exponenciar
Objetivo:
	La función tiene como objetivo dado un numero base y otro numero como exponente calcular la potencia del numero
	base de acuerdo al exponente dado.
Entradas:
	base: (int) Numero al cual se le va calcular la potencia.
	exponente: (int) Numero al cual se va potenciar el numero base.
Salida:
	Valor: (int) Variable a la cual se le asigna el resultado de la potencia. */

int exponenciar(int base, int exponente){
	
	int valor;
	valor = 1;
	
	for(int i=1;i <= exponente;i++){
		valor *= base; /*<-- Se hace el calculo de la potencia */
		
	}

	return valor;	
}
/*Funcion: Busqueda Exhaustiva
Objetivo:
	Dado un arreglo de n elementos y un numero, se busca en todo el arreglo el numero
	dado, si esta adentro del arreglo se retorna la posicion en la cual se encuentra, si no
	retorna -1.
Entradas:
	arreglo: (int) arreglo de n elementos en el cual se hara la busqueda
	numero: (int) numero pedido al usuario para ser buscado en el arreglo.
Salidas:
	i: (int) posicion en la que se encuntra el numero buscado ò
	en su defecto retorna -1 si no se encontró. */

	
	  
int busquedaExhaustiva(int arreglo[8], int numero){
	int i=0; /*Se inicializa en la posicion cero el contador*/
	while (i < 8){  
		if (arreglo[i] == numero) /* Se hace la comparación entre el numero
									numero que tiene el contador entre el numero a buscar*/
			return i;
			
			i++;
		
		
	}
	return -1;
	
}
/* Función: Algortimo Burbuja
Objetivo:
	Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente, 
	intercambiándolos de posición si están en el orden equivocado.
Entradas:
	arreglo: (int) Arreglo de n elementos el cual va ser ordenado.
Salidas:
	arreglo: (int) Arreglo de forma ordenada (de menor a mayor). */
	
int algoritmoBurbuja(int arreglo[8]){
	int temp;
	for (int i = 0;i<8;i++){   
		for(int j = 0;j<7;j++){
			if (arreglo[j] > arreglo[j+1]){ /* Aquí se compara un elemento con el siguiente*/
				  temp = arreglo[j];         /*Sí el condicional se cumple se hace el cambio 
				  								con el numero de la posicion siguiente
				  								del arreglo */
				  arreglo[j] = arreglo[j+1];
				  arreglo[j+1] = temp;
				  
			}
					
			
		}
		
	}
	for (int h = 0; h < 8;h++){   /*Se imprime el arreglo ya de forma ordenada*/
		cout<<arreglo[h];
		}
	return 0;
}
/* Función: algoritmoSeleccion
Objetivo:
	Buscar el minimo elemento de un arreglo de n elementos e intercambiarlo
	con el primero, buscar el siguiente numero minimo de la lista e intercambiarlo
	con el segundo y de esa forma hasta acabar ordenando el arreglo.
Entradas:
	arreglo: (int) Arreglo el cual se va ordenar.
Salidas:
	arreglo: (int) arreglo ordenado. */
	
int algoritmoSeleccion(int arreglo[8]){
	int min,j,temp;
	
	for (int i = 0;i < 8;i++){
		min=i;
		for (j=i+1;j < 8;j++){
			if (arreglo[j] < arreglo[min]){ /* Aqúi se hace la comparacion entre 
												los numeros del arreglo */
				min=j;  /* Se asigna cada vez que se cumple el condicional 
							a la variable min el numero minimo */
				
			}
		}
		temp=arreglo[i];   /* Se hace el cambio para colocarlo de forma ordenada en el arreglo */
		arreglo[i]=arreglo[min];
		arreglo[min]=temp;
	
	}
	for (int h=0;h<8;h++){
		cout<< arreglo[h]; /* Se imprime el arreglo de forma ordenada */
		
	}
	return 0;
}
/* Función: algoritmoCadenas
Objetivo:
	Dado un arreglo tipo string con n elementos y otro arreglo tipo string 
	buscar en el primero arreglo las letras de forma consecutiva y dar su posición. 
	(buscar si una palabra o frase esta o no en el primer arreglo).
Entradas:
	texto1: (str) arreglo con  n caracteres.
	texto2: (str) arreglo con n caracteres para buscar en texto1.
Salidas:
	i: (int) Posicion donde se encuentra la letra buscada. */
int algoritmoCadenas2(string texto1[17], string texto2[8]){
	for (int i = 0; i < (17-8);i++){
		int j=0;
		
		while (j < 8 && texto2[j] == texto1[i+j] ){ /* Comparacion entre los dos arreglos */
			j = j+1;
			cout<<j;
		}
		if ( j == 18){
			return i;
		}
	}
	return -1;
}
int algoritmoCadenas(string texto1[17], string texto2[8]){
	for (int i=0;i<17;i++){
		for(int j=0;i<8;j++){
			if (texto1[j] == texto2[i]){
				return j;
			}
		}
		
}
}
