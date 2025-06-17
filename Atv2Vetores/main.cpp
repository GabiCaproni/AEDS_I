/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Gabi Caproni
 *
 * Created on 8 de maio de 2025, 17:15
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    const int TAM = 10;
    float alturas[TAM], media, soma = 0;
    int cont = 0, i = 0, limiteinf, limitesup;

    ifstream arquivo("quantnumvetores.txt");
    if (!arquivo.is_open()) {
        cout << "\nErro: Arquivo não encontrado.\n";
        return 1;
    }

    cout << "Digite o limite inferior para fazer a busca em um intervalo de valores: ";
    cin >> limiteinf;
    
    cout << "Digite o limite superior para fazer a busca em um intervalo de valores: ";
    cin >> limitesup;
    // Leitura dos dados do arquivo
    i = 0;
    while (i < TAM && arquivo >> alturas[i]) {
        soma += alturas[i];
        i++;
    }


    // Cálculo da média
    media = soma / TAM;

    // Contagem de valores acima da média
    i = 0;
    cont = 0;
    while (i < TAM) {
        if (alturas[i] > media) {
            cont++;
        }
        i++;
    }
    

    // Impressão dos dados
    i = 0;
    while (i < TAM) {
        cout << "O " << i + 1 << "° valor é: " << alturas[i] << endl;
        i++;
    }
    
    //busca do intervalo
    cout << "As alturas que estão dentro do intervalo são: " << endl;
    i = 0;
    cont = 0;
    while (i < TAM) {
        if (alturas[i] > limitesup && alturas[i] < limiteinf) {
            cout << "A altura é:" << alturas[i] << endl;
        }
        i++;
    }

    cout << "A média dos valores é: " << media << endl;
    cout << cont << " valores estão acima da média." << endl;

    arquivo.close();
    return 0;
}
