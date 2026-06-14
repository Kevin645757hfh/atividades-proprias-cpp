#include <iostream>
#include <string>
using namespace std;
int main() {
    string nomes[40], situacao[40], nome;
    float media[40];
    int qtdalunos = 0;
    
    while (qtdalunos < 40) {
        cout << "Digite o nome do aluno (ou 'ALUNOS' para sair): ";
        cin >> nome;
        
        if (nome == "ALUNOS") {
            break;
        }
        nomes[qtdalunos] = nome;
        
        float notas[3];
        float soma = 0;
        
        for (int i = 0; i < 3; i++) {
            cout << "Digite a nota" << i + 1 << ": ";
            cin >> notas [i];
            
            soma += notas[i];
        
        }
      media[qtdalunos] = soma / 3;
        
        
        
           
        if (media[qtdalunos] >= 7) { 
            situacao[qtdalunos] = "Aprovado";
        }
        else if (media[qtdalunos] >= 5) { 
            situacao[qtdalunos] = "Recuperacao";
        }
        else {
            situacao[qtdalunos] = "Reprovado";
        }

        cout << "\nAluno: " << nomes[qtdalunos];
        cout << "\nMedia: " << media[qtdalunos]; 
        cout << "\nSituacao: " << situacao[qtdalunos] << endl;

        qtdalunos++;
    }
    
    cout << "====TODOS OS ALUNOS====";
    
    for(int i =0; i < qtdalunos; i++) {
        
        cout << "\nalunos: " << nomes[i];
        cout << "\nmédia: " << media[i];
        cout << "\nsituação: " << situacao[i];
        cout << "\n------------";
    }

    return 0;
}