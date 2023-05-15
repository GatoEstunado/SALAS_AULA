#include <iostream>
using namespace std;

int main() {
    
    // Variáveis
    int media;
    int pessoas;
    int sala[6];
    
    // FOR para gerar um 'loop', junto a colocação dos alunos pelo usuário
    for (int i = 0; i < 6; i++) {
        cout << "Digite o número de alunos na sala " << i + 1 << ": ";
        cin >> sala[i];
    }
    
    // Somar as salas e calcular a média
 media = (sala[0]+sala[1]+sala[2]+sala[3]+sala[4]+sala[5]);
 media = (media/6);
    
    // Interface para entregar a médias de alunos por sala
    cout << "A media de aluno por sala eh: " << (media) << endl;
    
    // Variáveis
    int salaMaior = 0;
    int salaMenor = 0;
    
    // Calcular a sala com maior e menor quantidade de alunos
    for (int i = 1; i < 6; i++) {
        if (sala[i] > sala[salaMaior]) {
            salaMaior = i;
        }
        if (sala[i] < sala[salaMenor]) {
            salaMenor = i;
        }
    }
    
    // Interface que apresenta as salas com maior e menor quantidade de alunos
    cout << "A sala com a maior quantidade de alunos é a: Sala " << salaMaior + 1 << endl;
    
    cout << "A sala com a menor quantidade de alunos é a: Sala " << salaMenor + 1 << endl;
 return 0;   
}
