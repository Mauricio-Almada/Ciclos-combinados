/*7 Una empresa tiene 50 empleados que trabajaron durante 7 días hábiles. Se
confecciona una serie de registros con el objeto de controlar la asistencia de
sus empleados. Hay un primer registro por empleado que contiene:
- Nro. de Legajo
- Cantidad de horas teóricas a trabajar por semana
A continuación de este registro, siete registros más, uno por cada uno de los 7
días con los siguientes datos:
- Hora de entrada (entero)
- Hora de salida (entero)
El día que falta el empleado se ingresa cero en la hora de entrada y salida
respectivamente.
Después de estos siete registros aparece nuevamente un registro de otro
empleado seguido por los registros de los días trabajados por este último y así
hasta el último empleado.
Realizar un programa que ingresando los datos indicados determine e informe:
    a) Los nros. de legajo de los empleados que faltaron algún día en la semana.
    b) Para cada empleado indicar con una leyenda aclaratoria si trabajó de más,
    igual o de menos a las horas teóricas que tiene asignadas en la semana.*/

#include <iostream>
using namespace std;

int main(){

    const int EMPLEADOS = 5, DIAS = 3;
    int nroLegajo, horasAtrabajar, horaEntrada, horaSalida;
    //A
    bool bandEmp1, bandEmp2, bandEmp3, bandEmp4, bandEmp5;
    bandEmp1 = bandEmp2 = bandEmp3 = bandEmp4 = bandEmp5 = false;
    //B
    int horasTrabajadas = 0, acuHoras;


    for (int i=1;i<=EMPLEADOS;i++){
        cout << "INGRESAR LEGAJO: ";
        cin >> nroLegajo;
        cout << "HORAS A TRABAJAR POR SEMANA: ";
        cin >> horasAtrabajar;
        acuHoras = 0;
        for(int j=1;j<=DIAS;j++){
            cout << "DIA #" << j << endl;
            cout << "HORA DE ENTRADA: ";
            cin >> horaEntrada;
            cout << "HORA DE SALIDA: ";
            cin >> horaSalida;
            //A
            if (horaEntrada == 0 && horaSalida == 0 && i == 1){
                bandEmp1 = true;
            }
            if (horaEntrada == 0 && horaSalida == 0 && i == 2){
                bandEmp2 = true;
            }
            if (horaEntrada == 0 && horaSalida == 0 && i == 3){
                bandEmp3 = true;
            }
            if (horaEntrada == 0 && horaSalida == 0 && i == 4){
                bandEmp4 = true;
            }
            if (horaEntrada == 0 && horaSalida == 0 && i == 5){
                bandEmp5 = true;
            }
            //B
            if (horaEntrada > horaSalida){
                horasTrabajadas = (24-horaEntrada) + horaSalida;
            }
            else{
                horasTrabajadas = horaSalida - horaEntrada;
            }
            //B
            acuHoras += horasTrabajadas;

        }
        // B
        cout << "-------------------" << endl;
        cout << "\tPunto B" << endl;
        /*cout << "acumulador: " << acuHoras << endl;*/
        if (acuHoras > horasAtrabajar){
            cout << "Legajo: " << nroLegajo << " - TRABAJO MAS HORAS." << endl;
        }
        else{
            if (acuHoras < horasAtrabajar){
                cout << "Legajo: " << nroLegajo << " - TRABAJO MENOS HORAS." << endl;
            }
            else{
                if (acuHoras = horasAtrabajar){
                    cout << "Legajo: " << nroLegajo << " - TRABAJO LAS HORAS CORRESPONDIENTES." << endl;
                }
            }
        }
        cout << "-------------------" << endl;
    }
    //A
    cout << "\tPunto A" << endl;
    cout << "Legajos que faltaron al menos una vez: " << endl;
    if (bandEmp1 == true){
        cout << "LEGAJO 1050." << endl;
    }
    if (bandEmp2 == true){
        cout << "LEGAJO 2050." << endl;
    }
    if (bandEmp3 == true){
        cout << "LEGAJO 3050." << endl;
    }
    if (bandEmp4 == true){
        cout << "LEGAJO 4050." << endl;
    }
    if (bandEmp5 == true){
        cout << "LEGAJO 5050." << endl;
    }
    if (!bandEmp1 && !bandEmp2 && !bandEmp3 && !bandEmp4 && !bandEmp5){
        cout << "No se registraron faltas." << endl;
    }



	return 0;
}
