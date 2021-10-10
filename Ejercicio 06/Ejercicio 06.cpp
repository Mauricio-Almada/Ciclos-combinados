/*6 Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
- Sucursal 1: Virreyes
- Sucursal 2: San Fernando
- Sucursal 3: Tigre
En cada una de ellas se registra para cada transacción que realiza un cliente,
los siguientes datos:
    - Nro. de Cliente (100 al 1200)
    - Nro. de Sucursal (1, 2 ó 3)
    - Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
    - Monto en pesos de la transacción
El último registro se indica con nro. de cliente igual a cero. Se pide a partir de
estos datos, determinar e informar:
    a) Cantidad de depósitos por más de $1000.-.
    b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la
hizo.
    c) El porcentaje de transacciones realizadas en cada una de las sucursales,
respecto al total de las mismas.
    d) Total de pesos depositados en cada una de las sucursales.
    e) Cantidad de depósitos en la sucursal de Tigre.
    f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el
    monto de los mismos).*/

#include <iostream>
using namespace std;

int main(){

    int nroCliente, nroSucursal;
    char codTrans;
    float monto;
    // A
    int contDepos = 0;
    // B
    int montoMax = 0, clientMax, sucMax;
    bool bandMonto = false;
    // C
    float porcDeposito, porcExtracc;
    int contExtracc = 0, contDeposito = 0, contTrans = 0;
    // D
    int acuPesos1 = 0, acuPesos2 = 0, acuPesos3 = 0;
    // E
    int contSucu3 = 0;
    // F
    int deposMax, maxSucu, contDep1 = 0, contDep2 = 0, contDep3 = 0;
    bool bandDepos = false;


    cout << "INGRESAR NUMERO DE CLIENTE: ";
    cin >> nroCliente;
    while(nroCliente != 0){
        cout << "NUMERO DE SUCURSAL (1, 2 O 3): ";
        cin >> nroSucursal;
        cout << "CODIGO DE TRANSACCION (D - para depositos o E - para extracciones): ";
        cin >> codTrans;
        contTrans++;
        cout << "MONTO: $";
        cin >> monto;
        cout << endl;
        //A
        if (codTrans == 'D' && monto > 1000){
            contDepos++;
        }
        //B
        if (codTrans == 'E'){
            if(bandMonto == false){
                montoMax = monto;
                clientMax = nroCliente;
                sucMax = nroSucursal;
                bandMonto = true;
            }
            else{
                if (monto > montoMax){
                    montoMax = monto;
                    clientMax = nroCliente;
                    sucMax = nroSucursal;
                }
            }
        }
        // C
        if (codTrans == 'D'){
            contDeposito++;
        }
        if(codTrans == 'E'){
            contExtracc++;
        }
        //D
        if (nroSucursal == 1 && codTrans == 'D'){
            acuPesos1 += monto;
        }
        if (nroSucursal == 2 && codTrans == 'D'){
            acuPesos2 += monto;
        }
        if (nroSucursal == 3 && codTrans == 'D'){
            acuPesos3 += monto;
        }
        // E
        if (nroSucursal == 3 && codTrans == 'D'){
            contSucu3++;
        }
        //F
        if (nroSucursal == 1 && codTrans == 'D'){
            contDep1++;
        }
        if (nroSucursal == 2 && codTrans == 'D'){
            contDep2++;
        }
        if (nroSucursal == 3 && codTrans == 'D'){
            contDep3++;
        }
        if (bandDepos == false){
            deposMax = contDep1;
            maxSucu = nroSucursal;
            bandDepos = true;
        }
        else{
            if (contDep2 > contDep1 && contDep2 > contDep3){
                deposMax = contDep2;
                maxSucu = nroSucursal;
            }
            else{
                if (contDep3 > contDep1 && contDep3 > contDep2){
                    deposMax = contDep3;
                    maxSucu = nroSucursal;
                }
            }
        }
        cout << "INGRESAR NUMERO DE CLIENTE: ";
        cin >> nroCliente;
        cout << endl;
    }
    //C
    porcDeposito = (float)(contDeposito * 100) / contTrans;
    porcExtracc = (float) (contExtracc * 100) / contTrans;
    cout << "\tPunto A" << endl;
    cout << "Depositos mayores a $1000: " << contDepos << endl;
    cout << "\tPunto B" << endl;
    cout << "Cliente: " << clientMax << " realizo la mayor extraccion: $" << montoMax << " en sucursal: " << sucMax << endl;
    cout << "\tPunto C" << endl;
    cout << "Porcentaje de depositos: " << porcDeposito << "%" << endl;
    cout << "Porcentaje de extracciones: " << porcExtracc << "%" << endl;
    cout << "\tPunto D" << endl;
    cout << "Depositos de pesos en sucursal 1: $" << acuPesos1 << endl;
    cout << "Depositos de pesos en sucursal 2: $" << acuPesos2 << endl;
    cout << "Depositos de pesos en sucursal 3: $" << acuPesos3 << endl;
    cout << "\tPunto E" << endl;
    cout << "Depositos en sucursal Tigre: " << contSucu3 << endl;
    cout << "\tPunto F" << endl;
    cout << "Sucursal: " << maxSucu << " recibio mayor cantidad de depositos: " << deposMax << endl;


    return 0;
}
