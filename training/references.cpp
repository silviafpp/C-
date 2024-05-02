#include <iostream>
using namespace std;

//referencia é um nome alternativo(alias) para uma variavel
string food = "Pizza";
//create a reference for a variable
string &meal = food;


int main() {
    cout << food << endl;
    cout << meal << endl;
    cout << &food << endl;
    return 0;
}