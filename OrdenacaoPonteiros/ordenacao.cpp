/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include <cstdlib>
#include "OrdenacaoPonteiros.h" 

using namespace std;

// Troca de dois elementos usando ponteiros
void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para listar os elementos de um vetor (usando ponteiros)
void listagem(int* inicio, int tam) {
    cout << "[";
    for (int i = 0; i < tam; i++) {
        cout << *(inicio + i); // Acessa o elemento usando aritmética de ponteiros
        if (i < tam - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}


// Bubble Sort usando ponteiros
// *inicio: ponteiro para o primeiro elemento do array
// *fim: ponteiro para a posição após o último elemento do array 
void bubbleSortPonteiros(int* inicio, int* fim) {
    int* i = inicio;
    while (i != fim) {
        int* j = inicio;
        int* limite = fim;
        int* k = inicio; // Contador para saber quantos elementos já estão ordenados no final
        while (k != i) { // Para cada elemento já processado por 'i', diminuímos o limite
            limite--;
            k++;
        }
        
        while (j != limite && (j + 1) != fim) { 
            if (*j > *(j + 1)) {
                trocar(j, j + 1);
            }
            j++;
        }
        i++;
    }
}

// Selection Sort usando ponteiros
void selectionSortPonteiros(int* inicio, int* fim) {
    int* i = inicio;
    while (i != fim) {
        int* menor = i; // aponta para o menor elemento encontrado
        int* j = i + 1;  // busca pelo próximo elemento

        while (j != fim) {
            if (*j < *menor) {
                menor = j;
            }
            j++;
        }
        // Troca o elemento atual com o menor elemento encontrado
        if (menor != i) {
            trocar(i, menor);
        }
        i++; //  próxima posição para continuar a ordenação
    }
}

// Insertion Sort usando ponteiros
void insertionSortPonteiros(int* inicio, int* fim) {
    int* i = inicio + 1; // começa do segundo elemento
    while (i != fim) {
        int chave = *i; // Valor a ser inserido na posição correta
        int* j = i;     // Ponteiro para a posição atual da chave

        // Move os elementos maiores que a chave para a direita
        while (j != inicio && *(j - 1) > chave) {
            *j = *(j - 1); // elemento é movido para a direita
            j--;           // ponteiro é movido para a esquerda
        }
        *j = chave; // chave na posição correta
        i++;        // o próximo elemento é movido 
    }
}