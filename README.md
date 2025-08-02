# Estructuras de Selección en C++

## If - Else y Switch
La estructura Switch, permie seleccionar de una lista de opciones cual queremos. 

### If - Else
La estructura If - Else permite ejecutar código según una condición.

```cpp
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int diaSemana;
    cout << "Ingrese un número del 1 al 7: ";
    cin >> diaSemana;
    
    switch (diaSemana) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Número inválido" << endl;
    }
    
    return 0;
}