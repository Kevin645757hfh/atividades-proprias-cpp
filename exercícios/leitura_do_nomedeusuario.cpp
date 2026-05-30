/*Este programa lê o nome e sobrenome do usuario (max-05)*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string nome, sobrenomes[5], nomefull;
    int qtd;
    
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite quantos sobrenomes vc tem (max-05): ";
    cin >> qtd;
    
    if (qtd > 5){
        cin >> qtd;
    }
    
  for (int i = 0; i < qtd; i++) {
      cout << "Digite seu sobrenome: "  << i + 1 << ": ";
      cin >> sobrenomes[i];
  }
  nomefull = nome;
  
  for (int i = 0; i < qtd; i++) {
      nomefull += " " + sobrenomes[i];
  }
    cout << "Seu nome completo é: " << nomefull << endl;
    return 0;
}