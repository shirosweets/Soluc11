#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 11 N3

int main()
{
    ofstream salida;
    int num1 , num2 , filas;
    
    salida.open("Numeros.txt");
    
    //El programa genera un archivo "Numeros.txt" compuesto por 3 columnas.
    
    cout << "Ingrese la cantidad de filas que tendra el archivo" << endl;
    cin >> filas;
    
    cout << endl << "Ingrese los datos: " << endl;
    
    for( int i=0;i<filas;i++ )
    {
         cin >> num1;
         cin >> num2;
         
         salida << setw(8) << num1 << setw(8) << num2 << setw(10) << num1+num2 << endl;
    }
    
    salida.close();
    
    system("PAUSE");
    
    return 0;
}
