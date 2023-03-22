#include <iostream>

using namespace std;

int main(){

    //variaveis
    int numero_secreto, tentativas, chute;

    //distribuicao de valor para variaveis
    numero_secreto = 42;

    //maing game setup
    cout << "*****************************" << endl;
    cout << "**   JOGO DA ADIVINHACAO  ***" << endl;
    cout << "*****************************" << endl;

    cout << "Neste jogo voce deve acertar o numero secreto. Para isso precisarei saber quantas tentativas voce gostaria de ter: ";
    cin >> tentativas;

    //laco de tentativas
    for(int i = 1; i <= tentativas; i++){

        cout << "Tentativa " << i << " de " << tentativas << endl;
        cout << "Por favor digite o seu chute e direi se foi abaixo ou acima do numero secreto" << endl;
        cin >> chute;

        if(chute < numero_secreto){
            cout << "Seu chute foi menor que o numero secreto, tente novamente" << endl << endl;
        }
        else if(chute > numero_secreto){
            cout << "Seu chute foi maior que o numero secreto, tente novamente" << endl << endl;
        }
        else{
            cout << "PARABENS!!! Seu chute foi correto!";
            i = tentativas + 1;
        }

    }
    return 0;
}
