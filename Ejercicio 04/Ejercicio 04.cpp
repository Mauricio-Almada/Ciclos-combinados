/*4) Una agencia de viaje posee la información de algunos destinos turísticos que
comercializó en algunos de los meses del año 2020. Por cada registro se ingresa:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)
La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No se sabe la cantidad de destinos turísticos ni la cantidad de meses
que cada destino trabajó. Para indicar el fin del programa se ingresa un código de destino
igual a cero.
Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el año 2020 entre todos los destinos
turísticos.
B) Por cada destino turístico, el total recaudado.*/

#include <iostream>
using namespace std;

int main(){

    int codDestino, mes, pasajes, destinoAct;
    float recaudado;
    // A
    int acuPasajes = 0;
    // B
    float totRecaudado;

    cout << "Ingresar codigo de destino: ";
    cin >> codDestino;
    while(codDestino != 0){
        destinoAct = codDestino;
        totRecaudado = 0;
        while(destinoAct == codDestino){
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes: ";
            cin >> pasajes;
            cout << "Recaudado: $";
            cin >> recaudado;
            cout << endl;
            acuPasajes += pasajes;
            totRecaudado += recaudado;
            cout << "Ingresar codigo de destino: ";
            cin >> codDestino;
        }
        // B
        cout << "------------------" << endl;
        cout << "\tPunto B" << endl;
        cout << "Destino: " << destinoAct << endl;
        cout << "Recaudado por destino: " << totRecaudado << endl;
        cout << "------------------" << endl;
    }
    // A
    cout << "\tPunto A" << endl;
    cout << "Cantidad de pasajes: " << acuPasajes << endl;

    return 0;
}
