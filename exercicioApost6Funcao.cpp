//mostra como se chama uma função

#include <iostream>
using namespace std;

void UmaFuncao() // cria função digaAlo.
{
    cout << "... agora estamos em UmaFuncao()...\n";
}               //fim função digaAlo.

int main()
{
    cout << "Estamos em main()...\n";
    UmaFuncao();
    cout << "... e voltamos ao main()\n";
    return 0;
}               //fim de main.
