#include <iostream>
#include <fstream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 11 N4

const int N=100;
const int M=3;

int main()
{
    ifstream entrada;
    int n=0;
    int matriz[N][M];
    
    entrada.open("Numeros.txt");
    
    while( entrada >> matriz[n][0] >> matriz[n][1] >> matriz[n][2] )

           n++;
    
    entrada.close();
    
/*    Muestra los datos almacenados

    for( int i=0;i<n;i++ )
    {
         cout << endl;
    
         for( int j=0;j<M;j++ )
         
              cout << setw(6) << matriz[i][j];
    }
*/ 

    cout << "\n\nHay " << n << " filas y por lo tanto, la cantidad de datos es " << n*3 << endl;
    
    system("PAUSE");
    
    return 0;
}
