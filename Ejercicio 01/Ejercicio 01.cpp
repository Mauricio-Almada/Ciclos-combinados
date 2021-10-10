/*1) Una agencia de viajes posee la informaci�n de los cinco destinos tur�sticos que
comercializa en cada uno de los meses del a�o 2020. Por cada destino y mes registra:
- C�digo de destino tur�stico (entero)
- N�mero de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)
La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada
bajo ning�n criterio. Hay un registro para cada destino tur�stico y mes.
Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el a�o 2020 entre todos los destinos
tur�sticos.
B) Por cada destino tur�stico, el total recaudado.*/

#include <iostream>
using namespace std;
int main(){

    const int MESES = 4;
    const int DESTINOS = 3;

    int codDestino, mes, cantPasajes;
    float totalRec;

    // A
    int acuPasajes = 0;
    // B
    float recaudacion;


    for (int i=1;i<=DESTINOS;i++){
        cout << "Destino: ";
        cin >> codDestino;
        // B
        recaudacion = 0;
        for (int j=1;j<=MESES;j++){
            cout << "Mes: ";
            cin >> mes;
            cout << "Cantidad de pasajes: ";
            cin >> cantPasajes;
            cout << "Total recaudado: $";
            cin >> totalRec;
            // A
            acuPasajes += cantPasajes;
            //B
            recaudacion += totalRec;
        }
        cout << endl;
        // B
        cout << "\tPunto B" << endl;
        cout << "Recaudacion por destino: $" << recaudacion << endl << endl;
    }
    // A
    cout << "\tPunto A" << endl;
    cout << "Cantidad total de pasajes: " << acuPasajes << endl;





    return 0;
}
