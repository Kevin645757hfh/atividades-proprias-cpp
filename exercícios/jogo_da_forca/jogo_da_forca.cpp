#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::cin;
using std::string;
using std::endl;
int main() {

    string palpite[4];
    
    string dica1[3] {"É um equipamento eletrônico.", "Pode ser usado para programar e jogar.", "Possui teclado e monitor."}, dica2[3] = {"É um animal terrestre.","Possui uma tromba longa.", "É um dos maiores mamíferos do mundo."}, dica3[3] = {"É um esporte muito popular no Brasil", "É jogado com uma bola.", "Cada equipe normalmente tem 11 jogadores"}, dica4[3] = {"É um alimento doce.", "É feito a partir do cacau.", "Muitas pessoas ganham isso na Páscoa."}, dica5[3] = {"Trabalha em missões espaciais.", "Usa uma roupa especial.", "Pode viajar para fora da Terra."}, dica6[3] = {"É um local de estudo", "Contém muitos livros.", "Geralmente exige silêncio."};
    
    string palavra;
    
    char letra;
    bool palavraDescoberta = false;
    int num = 0;

    cout << "deseja começar a jogar o jogo da forca? s/n: ";
    cin >> letra;
    
    if (letra == 's' || letra == 'S') {
        
        cout << "Inicinado o jogo..." << std::endl;
        
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
        cout << "\nJogo iniciado\n";
    }
    else if (letra == 'n' || letra == 'N') {
        
        cout << "Finalizando o jogo";
        return 0;
    }
    else {
        cout << "Vc não digitou s/n.";
    }
    
    cout << "Bem vindo ao jogo da forca escolha um número de 1 a 6 para sortearmos sua palavras: ";
    cin >> num;
    
    if(num == 1){
        palavra = "computador";
    }
    else if (num == 2){
        palavra = "elefante";
    }
    else if(num == 3){
        palavra = "futebol";
    }
    else if(num == 4){
        palavra = "chocolate";
    }
    else if(num == 5){
        palavra = "astronauta";
    }
    else {
        palavra = "biblioteca";
    }
    cout << "p:" << palavra << endl;
    return 0;
}
