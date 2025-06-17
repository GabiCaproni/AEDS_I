/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Gabi Caproni
 *
 * Created on 20 de maio de 2025, 16:40
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    ofstream arquivo("entrada3.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao criar o arquivo.\n";
        return 1;
    }

    srand(time(0));
    int quantidade = 100;

    for (int i = 0; i < quantidade; i++) {
        int valor = rand() % 100; // valores de 0 a 99
        arquivo << valor << "\n ";
    }

    arquivo.close();
    cout << "Arquivo 'entrada3.txt' gerado com sucesso\n";

    return 0;

}

