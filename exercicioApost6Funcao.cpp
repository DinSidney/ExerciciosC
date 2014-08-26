//mostra como se chama uma função dentro de outra.

#include <iostream>
using namespace std;

void OutraFuncao()  // cria função OutraFuncao().
{
    cout << "... dentro de OutraFuncao...\n";
}                   // fim funçao OutraFuncao

void UmaFuncao()    // cria função UmaFuncao().
{
    cout << "... agora estamos em UmaFuncao()...\n";
    OutraFuncao();
}                   //fim função digaAlo.

int main()
{
    cout << "Estamos em main()...\n";
    UmaFuncao();
    cout << "... e voltamos ao main()\n";
    return 0;
}                   //fim de main.
