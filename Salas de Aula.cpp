#include <iostream>
using namespace std;

int main() {
    
    // Variáveis
    int media;
    int pessoas;
    int sala[6];
    
    // Array
    sala[0] = 35;
    sala[1] = 4;
    sala[2] = 22;
    sala[3] = 20;
    sala[4] = 36;
    sala[5] = 30;
    
    // Introduzir o FOR, para a colocação das Salas. Ex: 'Sala 1: 35'.
    for (int i = 0; i < 6; i++) {
    cout << "Sala " << i +1 << ": " << sala[i] << endl;
    }
    
    // Somar as salas e calcular a média
 media = (sala[0]+sala[1]+sala[2]+sala[3]+sala[4]+sala[5]);
 media = (media/6);
    
    // Interface para entregar a médias de alunos por sala
    cout << "A media de aluno por sala eh: " << (media) << endl;
    
    // Interface e uso do FOR, para entregar as salas que estão acima da média.
    cout << "As seguintes salas estão acima da média: ";
    for (int i = 0; i < 6; i++) {
        if (sala[i] > media) {
            cout << "Sala " << i + 1 << ", ";
        }
    }
    return 0;
}
    