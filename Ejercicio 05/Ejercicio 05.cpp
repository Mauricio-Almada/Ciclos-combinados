/*5 En una empresa los empleados cobran un sueldo según la categoría a la que
pertenecen. Son 50 empleados y los sueldos son:
Categoría 1: $38.000
Categoría 2: $70.000
Categoría 3: $105.000
Al sueldo se le suma además $1.200 por cada año trabajado. Para cada
empleado se tienen los siguientes datos:
    - Categoría (1 a 3)
    - Antigüedad (entero)
Hay un registro por cada empleado. La información no está agrupada ni
ordenada. Se pide calcular e informar:
    a) ¿Cuantos empleados hay para cada categoría?
    b) Total de sueldos (en $) pagados para cada categoría.
    c) Sueldo Promedio.
    d) ¿Cual fue el sueldo máximo y a que categoría pertenece?*/

#include <iostream>
using namespace std;

int main(){

    const int EMPLEADOS = 10;
    const int CATEGORIA1 = 38000, CATEGORIA2 = 70000, CATEGORIA3 = 105000, BONO = 1200;

    int categoria, antiguedad, aumentoCat1, aumentoCat2, aumentoCat3;
    //A
    int contCat1 = 0, contCat2 = 0, contCat3 = 0;
    //B
    int acuCat1 = 0, acuCat2 = 0, acuCat3 = 0;
    //C
    int promedio;
    //D
    int sueldoMax, catMax;
    bool bandSueldo = false;

    for (int i=1;i<=EMPLEADOS;i++){
        do{
            cout << "Empleado #" << i << endl;
            cout << "INGRESE CATEGORIA: ";
            cin >> categoria;
            cout << "INGRESE ANTIGUEDAD: ";
            cin >> antiguedad;

            aumentoCat1 = (BONO * antiguedad);
            aumentoCat2 = (BONO * antiguedad);
            aumentoCat3 = (BONO * antiguedad);

            switch (categoria){
            case 1:CATEGORIA1;
                contCat1++;
                acuCat1 += CATEGORIA1 + aumentoCat1;
                break;
            case 2:CATEGORIA2;
                contCat2++;
                acuCat2 += CATEGORIA2 + aumentoCat2;
                break;
            case 3:CATEGORIA3;
                contCat3++;
                acuCat3 += CATEGORIA3 + aumentoCat3;
                break;
            default: cout << "Categoria incorrecta!" << endl;
                break;
            }

        }while(categoria < 1 || categoria > 3);
        cout << endl;

    }
    //C
    promedio = (acuCat1 + acuCat2 + acuCat3) / EMPLEADOS;
    cout << "\tPunto A" << endl;
    cout << "En la categoria 1 hay: " << contCat1 << " empleados" << endl;
    cout << "En la categoria 2 hay: " << contCat2 << " empleados" << endl;
    cout << "En la categoria 3 hay: " << contCat3 << " empleados" << endl << endl;
    cout << "\tPunto B" << endl;
    cout << "Sueldo total para categoria 1: $" << acuCat1 << endl;
    cout << "Sueldo total para categoria 2: $" << acuCat2 << endl;
    cout << "Sueldo total para categoria 3: $" << acuCat3 << endl;
    cout << "\tPunto C" << endl;
    cout << "El promedio de sueldos es de: $" << promedio << endl;
    cout << "\tPunto D" << endl;
    cout << "El sueldo maximo es de: $" << sueldoMax << " en la categoria: " << catMax << endl;







    return 0;
}
