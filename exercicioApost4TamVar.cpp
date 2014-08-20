// Esse exemplo aborda o uso do comando "sizeof()", que mostra o tamanho de determinada variavél
//Pode ser usado para alocação de memória.


#include <iostream>
using namespace std;

int main()
{
    cout << "*** Tamanho das Variaveis ***" << "\n";

    cout << "Tamanho de int = ";
            cout << sizeof (int);
            cout << "bytes.\n";

    cout << "Tamanho de short int = ";
            cout << sizeof (short);
            cout << "bytes.\n";

    cout << "Tamanho de bool = ";
            cout << sizeof (bool);
            cout << "byte.\n";

    cout << "Tamanho de char = ";
            cout << sizeof (char);
            cout << "bytes.\n";

    cout << "Tamanho de long = ";
             cout << sizeof (long);
             cout << "bytes.\n";

    cout << "Tamanho de float = ";
             cout << sizeof (float);
             cout << "bytes.\n";

    cout << "Tamanho de double = ";
             cout << sizeof (double);
             cout << "bytes.\n";
    return 0;

}
