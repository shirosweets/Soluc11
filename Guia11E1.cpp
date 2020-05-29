#include <iostream>
#include <fstream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 11 N1

int main()
{
    ofstream salida;
    int num, n=0;
    
    salida.open("Positivos.txt");
    
    cout << "Ingrese los datos (enteros positivos). Indique con un numero negativo que desea finalizar el almacenamiento." << endl;
    cin >> num;
    
    while( num>0 )
    {
           salida << num << endl;
           cin >> num;
           n++;
    }
    
    salida.close();
    
    cout << "La cantidad de datos ingresados es: " << n << endl;
    
    system("PAUSE");
    
    return 0;
}
