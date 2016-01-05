#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;
//Creacion de variables necesarias para el programa
int randNum;
int prediccion;
int intentos = 3;

int main(){
	srand(time(NULL)); //Creacion de semilla para generacion de numeros aleatorios basado en el tiempo actual para mayor aletoriedad
	
	randNum = (rand()%10)+1; // Se deterina el numero aleatorio y se modula por 10 para obtener un entero entre 1 y 10 exclusivamente
	
	cout <<"Estoy pensando un numero entre 1 y 10... Adivinalo! " <<endl;
	
	do{
		cout <<"Tienes "<< intentos << " intentos." << endl;
		cin >> prediccion;
		if(prediccion > randNum){
			cout << "Mi numero es menor que tu prediccion..." << endl;
		}
		else if(prediccion < randNum){
			cout << "Mi numero es mayor que tu prediccion..." << endl;
		}
		intentos--;
		
	}while(prediccion!=randNum && intentos != 0);
	if (intentos ==0){
		cout <<"Perdiste!" <<endl;
	}else{
	cout <<"Adivinaste!"<<endl;
	}
	
	cin.get();
	return 0;
}
