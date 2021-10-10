/*2) Una agencia de viaje posee la información de los cinco destinos turísticos que
comercializa en algunos meses del año 2020. Por cada registro se ingresa:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)
La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No todos los destinos tuvieron información para todos los meses. Para
indicar que finaliza la carga de un destino se ingresa un mes igual a cero.
Se pide calcular e informar:

A) La cantidad totales de pasajes vendidos en el año 2020 entre todos los destinos
turísticos.
B) Por cada destino turístico, el total recaudado.*/

#include <iostream>
using namespace std;

int main(){

    const int DESTINOS = 3;

    int codDestino, mes, pasajes;
    float Recaudado;
    // A
    int acuPasajes = 0;
    // B
    float totRecaudado;

    for (int i=1;i<=DESTINOS;i++){
        cout << "Codigo destino: ";
        cin >> codDestino;
        cout << "Mes: ";
        cin >> mes;
        cout << "Pasajes: ";
        cin >> pasajes;
        cout << "Recaudado: $";
        cin >> Recaudado;
        // B
        totRecaudado = 0;
        while(mes!=0){
            //A
            acuPasajes += pasajes;
            // B
            totRecaudado += Recaudado;

            cout << "Mes: ";
            cin >> mes;
            if (mes != 0){
                cout << "Pasajes: ";
                cin >> pasajes;
                cout << "Recaudado: $";
                cin >> Recaudado;
            }
        }
        cout << endl;
        cout << "---------------------------" << endl;
        cout << "Punto B" << endl;
        cout << "Recaudado por destino: $" << totRecaudado << endl;
        cout << "---------------------------" << endl;
        cout << endl;
    }
    // A
    cout << "\tPunto A" << endl;
    cout << "Cantidad de pasajes: " << acuPasajes << endl;

    return 0;
}
