#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    cout << "O fatorial de " << num << " eh " << fatorial(num) << endl;
    return 0;
}


