#include <iostream>
#include <fstream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 11 N2

int main()
{
    ofstream salida;
    int num, n=0;
    
    salida.open("Positivos.txt");
    
    cout << "Cuantos datos desea ingresar? ";
    cin >> n;
    
    cout << endl << "Ingrese " << n << " datos (enteros positivos)" << endl;
    
    for( int i=0;i<n;i++ )
    {
         cin >> num;
         
         while( num<0 )
         
                cin >> num;
                
         salida << num << endl;
    }
    
    salida.close();
    
    system("PAUSE");
    
    return 0;
}
