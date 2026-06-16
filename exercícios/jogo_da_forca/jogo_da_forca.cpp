#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;
int main() {

    string palpite[4];
    
     srand(time(NULL));
    
    string dica1[3] {"É um equipamento eletrônico.", "Pode ser usado para programar e jogar.", "Possui teclado e monitor."}, dica2[3] = {"É um animal terrestre.","Possui uma tromba longa.", "É um dos maiores mamíferos do mundo."}, dica3[3] = {"É um esporte muito popular no Brasil", "É jogado com uma bola.", "Cada equipe normalmente tem 11 jogadores"}, dica4[3] = {"É um alimento doce.", "É feito a partir do cacau.", "Muitas pessoas ganham isso na Páscoa."}, dica5[3] = {"Trabalha em missões espaciais.", "Usa uma roupa especial.", "Pode viajar para fora da Terra."}, dica6[3] = {"É um local de estudo", "Contém muitos livros.", "Geralmente exige silêncio."};
    
    string palavra[6] = {"computador", "elefante", "futebol", "chocolate", "astronauta", "biblioteca"};
    
    
    int sorteio = rand() % 6;
    
    char letra;
    bool palavraDescoberta = false;

    cout << "deseja começar a jogar o jogo da forca? s/n: ";
    cin >> letra;
    
    if (letra == 's' || letra == 'S') {
        
        cout << "Inicinado o jogo..." << std::endl;
        
        std::this_thread::sleep_for(std::chrono::seconds(2));
        
        cout << "\nJogo iniciado\n";
    }
    else if (letra == 'n' || letra == 'N') {
        
        cout << "Finalizando o jogo";
        return 0;
    }
    else {
        cout << "Vc não digitou s/n.";
    }
    
   cout << "\nDica: ";

    if (sorteio == 0)
        cout << dica1[0];

    else if (sorteio == 1)
        cout << dica2[0];

    else if (sorteio == 2)
        cout << dica3[0];

    else if (sorteio == 3)
        cout << dica4[0];

    else if (sorteio == 4)
        cout << dica5[0];

    else
        cout << dica6[0];


   for (int tentativa = 0; tentativa < 4; tentativa++) {

    cout << "\nDigite sua palavra (tentativa " << tentativa + 1 << "/4): ";
    cin >> palpite[tentativa];


    if (palpite[tentativa] == palavra[sorteio]) {
        cout << "Você acertou!";
        palavraDescoberta = true;
        break;
    }
    else {

        cout << "Você errou!\n";


        if (tentativa == 1) { // depois do 2º erro
            cout << "\nNova dica: ";

            if (sorteio == 0)
                cout << dica1[1];
            else if (sorteio == 1)
                cout << dica2[1];
            else if (sorteio == 2)
                cout << dica3[1];
            else if (sorteio == 3)
                cout << dica4[1];
            else if (sorteio == 4)
                cout << dica5[1];
            else
                cout << dica6[1];
        }


        if (tentativa == 2) { // depois do 3º erro
            cout << "\nÚltima dica: ";

            if (sorteio == 0)
                cout << dica1[2];
            else if (sorteio == 1)
                cout << dica2[2];
            else if (sorteio == 2)
                cout << dica3[2];
            else if (sorteio == 3)
                cout << dica4[2];
            else if (sorteio == 4)
                cout << dica5[2];
            else
                cout << dica6[2];
        }
    }
}

     return 0;
}