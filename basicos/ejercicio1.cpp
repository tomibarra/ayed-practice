/* Dados dos valores enteros A y B, informar la suma, la resta y el producto.*/
#include<iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int valorA,valorB,resultado;

    //Pido valores
    cout<<"Ingrese el valor A: "<<endl;
    cin>>valorA;
    cout<<"Ingrese el valor B: "<<endl;
    cin>>valorB;

    resultado = valorA+valorB;
    cout<<"El resultado es: "<<resultado<<endl;


    return 0;
}