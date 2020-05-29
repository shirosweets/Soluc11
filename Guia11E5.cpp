#include <iostream>
#include <fstream>
using namespace std;

//    SOLUCIONARIO DE EJERCICIOS
//
//
//    Ejercicio Guia 11 N5

const int N=100;
int multiplo ( int [N], int );

int main()
{
    ifstream entrada;
    ofstream salida;
    int n=0, x;
    int matriz[N]={0};  // Se predefine 0 todos los valores para poder evaluar la cantidad de múltiplos
    
    entrada.open("Datos.txt");
    
    while( entrada >> matriz[n] )

           n++;
    
    entrada.close();
    
    cout << "Ingrese un valor entero para buscar sus multiplos: ";
    cin >> x;
    
    x=multiplo( matriz, x );
    
    salida.open("Informe.txt");
    
    salida << "Cantidad de datos leidos: " << n << endl;
    salida << "Cantidad de multiplos: " << x << endl;
    
    salida.close();
    
/*    Muestra los datos almacenados

    for( int i=0;i<n;i++ )
         
              cout << setw(5) << matriz[i][j];
    
*/ 
    
    system("PAUSE");
    
    return 0;
}

int multiplo ( int arreglo[N], int num )
{
    int contador=0;
    
    for( int i=0;i<N;i++ )
    
         if( arreglo[i]!=0 && arreglo[i]%num==0 )
             
                 contador++;
                 
    return contador;
}
