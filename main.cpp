/* 
CLASE 01_INTRODUCCION A POO

- Aprendiendo a comentar codigo

TIPOS DE DATOS
	- Entero --> int name;
	- Flotante --> float name;
	- Doble --> double name;
	- Caracter --> char name;
	- Cadena --> string name;
	- Boleano --> bool name;

CONTENIDO DE LA CLASE

* Aprendiendo a usar cout
	- impresion de mensaje en pantalla
	- impresion de contenido de las variables en pantalla

 */
 
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    // ------------------------------------------VARIABLES DE DATOS NUMERICOS
    
	// Variable entera no inicializada
	int enteroUno;
	cout<<"enteroUno: "<<enteroUno<<endl;
	
	// Variable entera inicializada
	int enteroDos = 5;
	cout<<"enteroDos: "<<enteroDos<<endl;
	
	// Cambio de valor en las variables
	enteroUno = 8;
	enteroDos = 9;
	cout<<"enteroUno cambiado: "<<enteroUno<<endl;
	cout<<"enteroDos cambiado: "<<enteroDos<<endl;
	
	// Variable flotante no inicializada
	float flotante_uno;
	cout<<"flotante_uno: "<<flotante_uno<<endl;
	
	// Variable flotante inicializada
	float flotante_dos = 5.5;
	cout<<"flotante_dos "<<flotante_dos<<endl;
	
	// Variable doble
	double dobleUno;
	cout<<"dobleUno: "<<dobleUno<<endl;
	
	//----------------------------------------  VARIABLES DE DATOS NO NUMERICOS
	
	// Variable char
	char caracterUno;
	cout<<endl<<"caracterUno: "<<caracterUno<<endl;
	
	// Variable string
	string cadenaUno;
	cout<<"cadenaUno: "<<cadenaUno<<endl;
	
	// Inicializando las variables
	char caracterDos = 'A';
	string cadenaDos = "AAA";
	
	cout<<"caracterDos: "<<caracterDos<<endl;
	cout<<"cadenaDos: "<<cadenaDos<<endl;
	
	//----------------------------------------  VARIABLES DE DATOS BOLEANOS
	
	// Variable bool
	bool boleanoUno;
	cout<<endl<<"boleanoUno: "<<boleanoUno;
	
	boleanoUno = 0;
	cout<<endl<<"boleanoUno_0: "<<boleanoUno;
	
	boleanoUno = 1;
	cout<<endl<<"boleanoUno_1: "<<boleanoUno;
	
	boleanoUno = 5;
	cout<<endl<<"boleanoUno_5: "<<boleanoUno;
	
	boleanoUno = -100;
	cout<<endl<<"boleanoUno_-100: "<<boleanoUno;
		
	//system("PAUSE");
	return 0;
}
