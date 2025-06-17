/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Gabi Caproni
 *
 * Created on 28 de maio de 2025, 21:22
 */

#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int const TAM = 5;
    int vetor[TAM], vetor2[TAM], uniao[2*TAM], interseccao[TAM], tamanho, tamInter;
    tamInter = 0;
    tamanho=TAM;
    

    cout << "Digite os 20 elementos do vetor inicial:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vetor[i];
    }

    cout << "O vetor inicial é: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho;) {
            if (vetor[i] == vetor[j]) {
                for (int k = j; k < tamanho - 1; k++) {
                    vetor[k] = vetor[k + 1];
                }
                tamanho--;
            } else {
                j++;
            }
        }
    }
    cout << "Os valores repetidos foram removidos.\n";
    
    cout << "O vetor final sem valores repitidos é: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    sort(vetor, vetor+tamanho);
    cout << "O vetor final com os valores ordenados é: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    tamanho=TAM;
    cout << "Digite os elementos do segundo vetor (sem repetições):" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vetor[i];
    }

    cout << "O segundo vetor é: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < tamanho; i++) {
        uniao[i]=vetor[i];
        uniao[TAM+i]=vetor2[i];
    }

    cout << "A união dos vetores sem repetição é: ";
    for (int i = 0; i < tamanho; i++) {
        cout << uniao[i] << " ";
    }

    // Cálculo da interseção 
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (vetor[i] == vetor2[j]) {
                int repetido = 0;
                for (int k = 0; k < tamInter; k++) {
                    if (interseccao[k] == vetor[i]) {
                        repetido = 1;
                        break;
                    }
                }
                if (repetido == 0) {
                    interseccao[tamInter] = vetor[i];
                    tamInter++;
                }
            }
        }
    }

    cout << "Interseção dos dois vetores: ";
    for (int i = 0; i < tamInter; i++) {
        cout << interseccao[i] << " ";
    }
    cout << endl;


    return 0;
}



