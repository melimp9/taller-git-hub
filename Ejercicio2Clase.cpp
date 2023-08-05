#include <iostream>
using namespace std;


bool AñoEsBisiesto(int y){
    if (y % 100 ==0){
        return true;
    } else return false;
}

bool MesEsValido (int m){
    if (m >=1 && m<=12){
        return true;
    }    else return false;   
}

bool AñoEsValido (int a){
    if (a >=1500){
        return true;
    }    else return false;   
}


int main(){
    int año;
    int mes;
    int dia; 

do{

    cout << "Ingrese el año: ";
    cin >> año;
    if (AñoEsValido(año)==true){
        continue;
    } else break;
     
    cout << "Ingrese el mes: ";
    cin >> mes;
    MesEsValido(mes);

    cout << "Ingrese el día: ";
    cin >> dia;

} while (!AñoEsValido(año) || !MesEsValido(mes));
    

        switch (mes){
        case 1: {

            if (dia >=1 && dia <= 31)
            cout << "Fecha valida";
            break;
        }
            

        case 2: {

            if (AñoEsBisiesto(año)==true){
                if (dia >=1 && dia <= 29){
                    cout << "Fecha valida en año bisiesto";
                } else cout << "Día inválido para año bisiesto";

                
            } else if (dia >=1 && dia <= 28){
                    cout << " Fecha valida";
                } else cout << "Día inválido";

            break;


        default: cout << "Mes invalido";
            break;
        }

    }
    


    return 0;
}
