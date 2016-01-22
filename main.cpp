#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
//Creacion de variables necesarias para el programa
int randNum;
int prediccion;
int dificultad = 100;
int intentos;
int retry;

int main(){
	system("cls");
	
	srand(time(NULL)); //Creacion de semilla para generacion de numeros aleatorios basado en el tiempo actual para mayor aletoriedad
	
	randNum = (rand()%10)+1; // Se deterina el numero aleatorio y se modula por 10 para obtener un entero entre 1 y 10 exclusivamente
	
	do{
			cout << "Selecciona la dificultad ->  1 = Facil (cinco intentos) |  2 = Dificil (tres intentos)" << endl;
			cin >> dificultad;
			if (dificultad != 1 && dificultad != 2){
				cout << "Entrada no es valida" << endl;
			}
	} while (dificultad != 1 && dificultad != 2);
	
	cout << "Dificultad seleccionada" << endl;
	system("pause");
	system("cls");
	if (dificultad == 1){
		intentos = 5;
	} else if(dificultad == 2){
			intentos = 3;
	}
	
	
	cout <<"Estoy pensando un numero entre 1 y 10... Adivinalo! " <<endl;
	//PRUEBA
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
	
	//Test
	cout << "Deseas jugar otra vez? -> 1 = SI | 2 = NO" << endl;
	cin >> retry;
	if (retry == 1){
		main();
	}
	return 0;
}
