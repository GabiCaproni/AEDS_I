/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Gabi Caproni
 *
 * Created on 15 de maio de 2025, 16:16
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int TAM_MAX = 5;
    int vetor[TAM_MAX];
    int tam = 0;
    int opcao;

    cout << "Informe o tamanho do vetor com valor maximo de " << TAM_MAX << ": ";
    cin >> tam;

    if (tam > TAM_MAX || tam < 0) {
        cout << "Tamanho invalido!" << endl;
        return 1;
    }

    cout << "Digite os " << tam << " elementos do vetor:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vetor[i];
    }

    cout << "O vetor é: ";
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;



        do {
            cout << "-------- MENU --------" << endl;
            cout << endl << "1) Inverta os valores de um vetor";
            cout << endl << "2) Adicione um valor a todos os elementos";
            cout << endl << "3) Adicione um valor a todos os elementos nao divisiveis por tres";
            cout << endl << "4) Remova a 1a ocorrencia de um valor";
            cout << endl << "5) Remova do vetor todas as ocorrencias de um valor";
            cout << endl << "6) Inserir um valor no vetor, se nao estiver cheio";
            cout << endl << "7) Inserir um valor em uma posicao determinada";
            cout << endl << "8) Remover todos os valores repetidos de um vetor";
            cout << endl << "0) Sair" << endl;

            cout << "\nEscolha uma opcao: ";
            cin >> opcao;

            switch (opcao) {
                case 1:
                {
                    int i;
                    int temp;
                    for (i=0; i < tam/2; i++) {
                        temp = vetor[i];
                        vetor[i] = vetor[tam - 1 - i];
                        vetor[tam - 1 - i] = temp;
                    }
                    break;
                }

                case 2:
                {
                    int valor;
                    int i;
                    cout << "Digite o valor que você quer adicionar: ";
                    cin >> valor;
                    for (i=0; i<tam; i++) {
                        vetor[i] += valor;
                    }
                    break;
                }

                case 3:
                {
                    int valor;
                    int i;
                    cout << "Digite o valor que você quer adicionar: ";
                    cin >> valor;
                    for (i=0; i<tam; i++) {
                        if (vetor[i] % 3 != 0) {
                            vetor[i] += valor;
                        }
                    }
                    break;
                }

                case 4: //não entendi
                {
                    int valor, pos = -1;
                    cout << "Digite o valor que você quer remover (1a ocorrencia): ";
                    cin >> valor;
                    for (int i = 0;i<tam; i++) {
                        if (vetor[i] == valor) {
                            pos = i;
                            break;
                        }
                    }
                    if (pos != -1) {
                        for (int i = pos; i < tam - 1; i++) {
                            vetor[i] = vetor[i + 1];
                        }
                        tam--;
                    }
                    break;
                }

                case 5:
                {
                    int valor;
                    cout << "Digite o valor que você quer remover (todas as ocorrencias): ";
                    cin >> valor;
                    int j = 0;
                    for (int i = 0; i < tam; i++) {
                        if (vetor[i] != valor) {
                            vetor[j++] = vetor[i];
                        }
                    }
                    tam = j;
                    break;
                }

                case 6:
                {
                    if (tam<TAM_MAX) {
                        int valor;
                        cout << "Digite um valor que você quer inserir no vetor: ";
                        cin >> valor;
                        vetor[tam++] = valor;
                    } else {
                        cout << "O vetor já está cheio!" << endl;
                    }
                    break;
                }

                case 7:
                {
                    int posicao, valor;
                    cout << "Digite a posição que você quer inserir um valor: ";
                    cin >> posicao;
                    cout << "Digite o valor que você quer inserir: ";
                    cin >> valor;
                    if (tam < TAM_MAX && posicao >= 0 && posicao <= tam) {
                        for (int i = tam; i > posicao; i--) {
                            vetor[i] = vetor[i - 1];
                        }
                        vetor[posicao] = valor;
                        tam++;
                    } else {
                        cout << "Posicao invalida ou vetor cheio!" << endl;
                    }
                    break;
                }

                case 8:
                {
                    for (int i = 0; i < tam; i++) {
                        for (int j = i + 1; j < tam;) {
                            if (vetor[i] == vetor[j]) {
                                for (int k = j; k < tam - 1; k++) {
                                    vetor[k] = vetor[k + 1];
                                }
                                tam--;
                            } else {
                                j++;
                            }
                        }
                    }
                    break;
                }

                case 0:
                    cout << "Você escolheu sair do programa" << endl;
                    break;

                default:
                    cout << "Opcao invalida!" << endl;
            }

            // Imprimir vetor
            cout << "O vetor após a alteração é: ";
            for (int i = 0; i<tam; i++) {
                cout << vetor[i] << " ";
            }
            cout << endl << endl;

        }while(opcao != 0);

        return 0;
    }


