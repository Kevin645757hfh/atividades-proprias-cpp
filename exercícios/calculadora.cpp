#include <iostream>
using namespace std;

int main() {
    float num, resultado;
    char operacao;

    cout << "Vamos calcular, caso queira exibir o resultado digite =\n";

    cout << "Digite um número: ";
    cin >> resultado;

    while (true) {

        cout << "Digite a operação (+ - * / ou =): ";
        cin >> operacao;

        if (operacao == '=') {
            cout << "Resultado: " << resultado << endl;
            break;
        }

        cout << "Digite um número: ";
        cin >> num;

        if (operacao == '+') {
            resultado += num;
        }
        else if (operacao == '-') {
            resultado -= num;
        }
        else if (operacao == '*') {
            resultado *= num;
        }
        else if (operacao == '/') {
            resultado /= num;
        }
        else {
            cout << "Operação invalida\n";
        }
    }

    return 0;
}