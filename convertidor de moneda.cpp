#include <iostream>
using namespace std;
int main(){
    
    double precioActual, dolares, pesos, quetzales;
    int opcion = 0;

    cout << "Ingrese la opcion a ejecutar:  \n";
    cout << "1.- Convertir Pesos Colombianos  \n";
    cout << "2.- Convertir Quetzales \n";
    cin >> opcion;


    switch(opcion)

    {
        case 1 :
            cout << "Ingrese el precio actual del dolar en pesos: " << endl;
            cin >> precioActual;
            cout << "Ingrese una cantidad de dolares:" << endl;
            cin >>  dolares;

            pesos = dolares * precioActual;

            cout << dolares << "dolares equivalen a " << pesos << "pesos. " << endl;
            break;

        case 2 :
            cout << "Ingrese el precio actual del dolar en quetzales: " << endl;
            cin >> precioActual;
            cout << "Ingrese una cantidad de dolares:" << endl;
            cin >>  dolares;

            quetzales = dolares * precioActual;

            cout << dolares << "dolares equivalen a " << quetzales << "quetzales " << endl;
            break;
        


    }


    return 0;
}
