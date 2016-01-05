#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int randNum;
int prediccion;
int intentos = 3;

int main(){
	srand(time(NULL));
	randNum = (rand()%10)+1;
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
