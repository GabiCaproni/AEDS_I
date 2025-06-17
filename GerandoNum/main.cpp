/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Gabi Caproni
 *
 * Created on 8 de maio de 2025, 16:58
 */

#include <cstdlib>
#include <iostream> //comando de entrada e saida do c++
#include <time.h>
#include <fstream>


using namespace std;

/*
 * 
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) { 
    float num,  nummin, nummax;
    int i = 1, quantnum;

    ofstream arquivo("quantnumvetores.txt");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    cout << "----------------Altura gerados----------------" << endl;
    srand(time(NULL)); // inicializa a semente para geração aleatória

    cout << "Digite a quantidade de números que você quer que sejam gerados: ";
    cin >> quantnum;

    cout << "Digite a altura mínima que você quer que seja gerada: ";
    cin >> nummin;

    cout << "Digite a altura máxima que você quer que seja gerada: ";
    cin >> nummax;

    if (nummax <= nummin) {
        cout << "Erro: o número máximo deve ser maior que o mínimo." << endl;
        return 1;
    }

    while (i <= quantnum) {
        num = (100 + rand()%81)/100.0; 
        cout << "A altura " << i << " gerada é: " << num << endl;
        arquivo << num << endl;
        i++;
    }

    arquivo.close();
    return 0;
}

