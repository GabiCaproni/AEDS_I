/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Gabi Caproni
 *
 * Created on 12 de junho de 2025, 17:35
 *
 * Autor: Gabriella Caproni da Silva
 * Local: Unifal - Campus Santa Clara
 * Data: 12/06/2025
 * Disciplina: AEDs I - Prática
 * Objetivo: O objetivo deste programa é fazer métodos de ordenação implementados com ponteiros 
 * (Bubble Sort, Selection Sort e Insertion Sort).
 * O projeto é dividido em:
 * 1. OrdenacaoPonteiros.h`: que haje declarando as funções de ordenação e junto com as funções de troca e listagem.
 * 2. OrdenacaoPonteiros.cpp: é onde há o corpo das funções declaradas no OrdenacaoPonteiros.h e da função de troca. 
 * 3. Main.cpp: é onde as funções foram implementadas com um vetor que possui dados aleatorios para serem ordenados
 * */ 

#include <cstdlib>
#include <iostream>
#include <vector>   
#include "OrdenacaoPonteiros.h" 

using namespace std;


int main(int argc, char** argv) {

    const int TAM = 10;
   
    // --- Teste com Bubble Sort ---
    cout << "\n--- Teste com Bubble Sort ---\n";
    vector<int> vAleat1 = {5, 9, 2, 8, 1, 10, 4, 7, 3, 6};
    cout << "Estado do vetor aleatório antes da ordenação:\n";
    listagem(vAleat1.data(), TAM);
    bubbleSortPonteiros(vAleat1.data(), vAleat1.data() + TAM);
    cout << "Estado do vetor aleatório depois da ordenação (Bubble Sort):\n";
    listagem(vAleat1.data(), TAM);

    // --- Teste com Selection Sort ---
    cout << "\n--- Teste com Selection Sort ---\n";
    vector<int> vAleat2 = {11, 19, 12, 18, 13, 17, 14, 16, 15, 20}; 
    cout << "Estado do vetor aleatório antes da ordenação:\n";
    listagem(vAleat2.data(), TAM);
    selectionSortPonteiros(vAleat2.data(), vAleat2.data() + TAM);
    cout << "Estado do vetor aleatório depois da ordenação (Selection Sort):\n";
    listagem(vAleat2.data(), TAM);

    // --- Teste com Insertion Sort ---
    cout << "\n--- Teste com Insertion Sort ---\n";
    vector<int> vAleat3 = {23, 27, 21, 30, 25, 20, 29, 22, 28, 24};
    cout << "Estado do vetor aleatório antes da ordenação:\n";
    listagem(vAleat3.data(), TAM);
    insertionSortPonteiros(vAleat3.data(), vAleat3.data() + TAM);
    cout << "Estado do vetor aleatório depois da ordenação (Insertion Sort):\n";
    listagem(vAleat3.data(), TAM);

    cout << "\nExemplo final do vetor ordenado usando o BubbleSort:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "O " << i + 1 << " º elemento do vetor ordenado é: " << vAleat1[i] << endl;
    }
    cout << "\nExemplo final do vetor ordenado usando o SelectionSort:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "O " << i + 1 << " º elemento do vetor ordenado é: " << vAleat2[i] << endl;
    }
    cout << "\nExemplo final do vetor ordenado usando o InsertionSort:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "O " << i + 1 << " º elemento do vetor ordenado é: " << vAleat3[i] << endl;
    }

    return 0;
}