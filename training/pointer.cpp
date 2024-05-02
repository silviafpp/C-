#include <iostream>
using namespace std;

int main() {
    string food = "pizza";   // Cria uma variável chamada "food" com o valor "pizza" e a armazena na memória.
    string *ptr = &food;     // Cria um ponteiro/variavel chamado "ptr" que armazena o endereço de memória de "food".

    cout << food << endl;   // Imprime o valor da variável "food" (saída: pizza).
    cout << &food << endl;   // Imprime o endereço de memória de "food".
    cout << ptr << endl;     // Imprime o valor armazenado no ponteiro "ptr" (que é o endereço de "food").
    cout << *ptr << endl;    // Imprime o valor armazenado no endereço apontado por "ptr" (que é o valor de "food").
    cout << &ptr << endl;    // Imprime o endereço de memória do ponteiro "ptr".

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso.
}
