#include <iostream>
using namespace std;

int somaNumero(int x, int y){
    return x+y;
}

double somaNumero(double x, double y){
    return x+y;
}

//function overloading

int soma(int k) {
    if (k>0){
        return k+ soma(k - 1);
    } else {
        return 0;
    }
}

int main() {

    cout << somaNumero(2,5);
    return 0;
}

