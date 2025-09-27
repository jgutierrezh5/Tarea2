#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: División por cero." << endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

string invertirFrase(string frase) {
    string invertida = "";
    for (int i = frase.length() - 1; i >= 0; i--) {
        invertida += frase[i];
    }
    return invertida;
}

int main() {
    string input;
    int num1, num2;
    char operacion;

    cout << "Ingresa el primer numero: ";
    getline(cin, input);
    stringstream(input) >> num1;

    cout << "Ingresa el segundo numero: ";
    getline(cin, input);
    stringstream(input) >> num2;

    cout << "Que operacion deseas realizar? (+, -, *, /): ";
    getline(cin, input);
    if (input.length() > 0) {
        operacion = input[0];
    } else {
        operacion = ' ';
    }

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Operacion no valida." << endl;
    }

    cout << "Ingresa una frase: ";
    getline(cin, input);

    cout << "Frase invertida: " << invertirFrase(input) << endl;

    return 0;
}
