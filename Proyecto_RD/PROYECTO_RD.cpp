#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
	
	// Modulo de una circunferencia
	
	
	// Constante pi
	const double PI = 3.1415;
	
	// Variable de entrada y salida
	double radio, longitud;
	
	cout << "ingrese el valor del radio:\n" << endl;
	cin >> radio;
	longitud = 2 * PI * radio;
	cout << "\n La longitud de la circunferencia es: "<< longitud;
				

	getch();
	
	return 0;
}