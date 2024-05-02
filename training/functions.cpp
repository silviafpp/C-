#include <iostream>
using namespace std;

// int f(int x) {
//     return x*x;
// }

// int main() {
//     cout << f(5) << endl;
//     cout << f(7) << endl;
// }

// void msgError(string msg) {
//     cout << "Error:" << msg << endl;
// };

// int main() {
//     msgError("banana");
// }

int multiplicacao(int x, int y = 2) {
    return x*y;
}

int main() {
    cout << multiplicacao(6);
};