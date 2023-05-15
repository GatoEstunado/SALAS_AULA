#include <iostream>
using namespace std;

int main() {
    // Variáveis
    int media;
    int sala[2][3];
    
    // Matriz
    sala[0][0] = 35;
    sala[0][1] = 4;  
    sala[0][2] = 22;
    sala[1][0] = 20;
    sala[1][1] = 36;
    sala[1][2] = 30;
    
    // Usando 2x FOR, para as duas colunas da matriz
    // Interface para apresentar as salas e os alunos
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Sala " << (i * 3 + j + 1) << ": " << sala[i][j] << endl;
        }
    }
    
    // Somar os alunos
    int total = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            total += sala[i][j];
        }
    }
    
    // Calcular a média
    media = total / 6; 
    
    // Interface para apresentar a média de alunos por sala
    cout << "A media de aluno por sala eh: " << media << endl;

    // Interface para apresentar as salas que estão acima da média
    cout << "As seguintes salas estão acima da média: ";
    
    // Usando 2x FOR, para as duas colunas da matriz
    // Para apresentar as salas de forma "correta"
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (sala[i][j] > media) {
                cout << "Sala " << (i * 3 + j + 1) << ", ";
            }
        }
    }
    return 0;
}