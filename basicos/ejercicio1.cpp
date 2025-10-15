/* Dados dos valores enteros A y B, informar la suma, la resta y el producto.*/
#include<iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int valorA,valorB,resta,suma,producto;

    //Pido valores
    cout<<"Ingrese el valor A: "<<endl;
    cin>>valorA;
    cout<<"Ingrese el valor B: "<<endl;
    cin>>valorB;

    suma = valorA+valorB;
    resta = valorA-valorB;
    producto = valorA*valorB;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"El producto es: "<<producto<<endl;


    return 0;
}