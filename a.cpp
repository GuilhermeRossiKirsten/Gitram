#include<stdio.h>
#include <
#include<iostream>
using namespace std;

int main(){
    cout << "*************************" << endl;
    cout << "****jogoDaAdivinhacao****" << endl;
    cout << "*************************" << endl;

    
    cout << "Digite um numero" << endl;
    int chute;
    cin >> chute;
    cout << "seu chute foi "<< chute << endl;
    
    
    const int NUMERO_SECRETO = 42;
    cout << "O numero secreto e " << NUMERO_SECRETO << ". Nao conte para ninguem" << endl;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    if (acertou)
    {
        cout << "ganhou" << endl;
    }
    else if (maior)
    {
        cout << "maior" << endl;
    }
    else{
        cout << "menor" << endl;
        
    }

    
    
}   