#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string nome;
    float notas[3], media = 0;

    cout << "Digite seu nome: \n";
    cin >> nome;
    
    system ("clear");
    
    for (int i = 0; i < 3; i++) {
    cout << "Digite as notas: \n";
    cin >> notas[i];
    
    media += notas[i];
    
    }
    media = media / 3;
    
    cout << "Média: \n" << media;
    
     if (media >= 7) {
        cout << "\nAprovado";
    }
    else if (media >= 5 && media <= 6.9) {
        cout << "\nRecuperação";
    }
        else if (media < 5 ) {
        cout << "\nReprovado";
    }
     
    return 0;
}