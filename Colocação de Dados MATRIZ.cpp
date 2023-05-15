#include <iostream>
using namespace std;

int main() {
    // Variáveis
    int media;
    int sala[2][3];
   
   // Loop, junto a inserção de dados pelo usuário
   for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o número de alunos na sala " << (i * 3 + j + 1) << ": ";
            cin >> sala[i][j];
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
    
    // Variáveis
   int salaMaior = 0;
   int salaMenor = 0;
   
   // Calcular as salas que tem a maior e a menor quantidade de alunos
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (sala[i][j] > sala[salaMaior / 3][salaMaior % 3]) {
                salaMaior = i * 3 + j;
            }

            if (sala[i][j] < sala[salaMenor / 3][salaMenor % 3]) {
                salaMenor = i * 3 + j;
            }
        }
    }
    // Interface para apresentar as salas com maior e menos quantidade de alunos
    cout << "A sala com maior quantidade de alunos é a Sala: " << salaMaior + 1 << endl;
    cout << "A sala com menor quantidade de alunos é a Sala: " << salaMenor + 1 << endl;
    
    return 0;
}
