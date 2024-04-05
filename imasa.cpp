#include<iostream>
#include<math.h>
#include<iomanip>


// --> calcular el indice de masa corporal

/*
    [x] Declaramos la variable peso y altura o tipo float
    [x] Pedimos al usuario que ingrese los datos
    [x] Usamos la formula en la variable resultado
    [x] Mostrar el resultado usando la formula
*/
using namespace std;


int main(){
    float peso = 0;

    float altura = 0;

    float resultado = 0;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    resultado = peso/pow(altura,2);



    cout << "Su IMC es: " << setprecision(4)<<  resultado <<"kg/m2"<< endl;

    return 0;
}
