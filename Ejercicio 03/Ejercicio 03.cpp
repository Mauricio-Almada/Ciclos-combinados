/*3) Una agencia de viaje posee la información de algunos destinos turísticos que
comercializa en cada uno de los meses del año 2020. Por cada registro se ingresa:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)
La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No se sabe la cantidad de destinos trabajados pero cada destino
registró la información de cada mes del año 2020. Para indicar el fin del programa se
ingresa un código de destino igual a cero.
Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el año 2020 entre todos los destinos
turísticos.
B) Por cada destino turístico, el total recaudado.*/

#include <iostream>
using namespace std;

int main(){

    const int MESES = 3;
    int codDestino, mes, pasajes;
    float recaudado;
    // A
    int acupasajes = 0;
    // B
    float totRecaudado;

    for (int i=1;i<=MESES;i++){
        cout << "Codigo destino: ";
        cin >> codDestino;
        totRecaudado = 0;
        while(codDestino != 0){
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes: ";
            cin >> pasajes;
            cout << "recaudado: $";
            cin >> recaudado;
            cout << endl;
            cout << "Codigo destino: ";
            cin >> codDestino;
            //A
            acupasajes += pasajes;
            // B
            totRecaudado += recaudado;
            cout << endl;
        }
        // B
        cout << "---------------------------" << endl;
        cout << "\tPunto B" << endl;
        cout << "Recaudado por destino: $" << totRecaudado << endl;
        cout << "---------------------------" << endl;
        cout << endl;
    }
    // A
    cout << "\tPunto A" << endl;
    cout << "Cantidad de pasajes: " << acupasajes << endl;

    return 0;
}
