// Programa: Ejemplo de selectivas multiples pasarlo a funciones
// Funciones
// Autor: Alison Beltran
// Fecha: 19-noviembre
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

void menu()
{
	cout<<"MENU"<<endl;
	cout<<"1. Es Par o No ?"<<endl;
	cout<<"2. Serie Numérica (2 en 2)"<<endl;
	cout<<"3. Factorial de un numero n!"<<endl;
	cout<<"4. Salir del programa"<<endl;
	cout<<"Elige Opcion: "<<endl;
}

float par(float a)
{
	div_t resultado;
    cout << "Ingrese un numero para saber si es par" << endl;
    cin >> a; 
    resultado=div(a,2);
    if (resultado.rem>0)
          {
    cout << a << " Es impar" << endl;
    }
     else {
    cout << a << " Es par" << endl;
    }
}

float serie(float a, float contador)
{
   cout<<"Ingresa en numero para saber la serie: "<<endl;
   cin>>a;
   contador=0; //inicializar contador 
   
   while (contador<a){ //condicion de while
   contador= contador+2; //incrementar contador
   cout<< endl << "La serie es ->" <<contador<<" ";
   }
}

float factorial(float a, float i)
{
   long double factorial; //long double, representar números grandes
   cout << "Introduce un numero: ";
   cin >> a;
   factorial=1;
   for(i=1;i<=a;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << a << " -> " << factorial << endl;
}

float salir ()
{
	exit (0);
}

   int main()
{
	float R,a,contador,i;
	int opcion;
	menu();
	cin>>opcion;
	if (opcion==1){
		cout<<"Es Par o No ?"<<endl;
		R= par(a);
    }
    else if (opcion == 2){
    	cout<<"Serie Numérica (2 en 2)"<<endl;
    	R= serie(a,contador);
    }
    else if (opcion == 3){
    	cout<<"Factorial de un numero n!"<<endl;
    	R= factorial(a,i);
    }
    else if (opcion == 4){
    	cout<<"Vuelva Pronto"<<endl;
    	R= salir( );
    }
    else
     cout<<"Opcion no valida"<<endl;
     return 0;
}
    
    

