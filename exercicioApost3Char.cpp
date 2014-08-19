// mostra uso do tipo char.

#include <iostream>
using namespace std;

int main()
{
   //imprime na tela o alfabeto maiusculo.
    cout << "MAIUSCULA" << "\n";
    for(char chm = 65; chm <= 90; chm++)
        cout << chm << " ";
        cout << "\n";

    //imprime na tela o alfabeto minusculo.
    cout << "minuscula" << "\n";
    for(char ch = 97; ch <= 122; ch++)

        cout << ch << " ";

    return 0;
} //fim de main
