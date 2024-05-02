#include <iostream>
using namespace std;

struct 
{
    string nome;
    int idade;
    string codPostal;
    string rua;
    string cidade;
    string pais;
} pessoa, pessoa1, pessoa2;



int main() {

    pessoa.nome = "joana";
    pessoa.idade = 15;
    pessoa.codPostal = 94;
    pessoa.rua = "rua da rua";
    pessoa.cidade = "banana";
    pessoa.pais = "Cazaquistao";

    cout << "A "<< pessoa.nome << " tem " << pessoa.idade << " anos";
    
}