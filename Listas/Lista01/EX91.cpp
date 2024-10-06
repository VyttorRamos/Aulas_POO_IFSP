/*
91. Escreva um programa que utilize uma fun��o para exibir o seguinte padr�o:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;

int main() {
    int n = 9;  // Tam m�ximo da linha com asteriscos

    // Parte superior do padr�o
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; ++j)
            cout << "  ";
        for (int j = 0; j < i; ++j)
            cout << "* ";
        cout << endl;
    }

    // Parte inferior do padr�o
    for (int i = n - 2; i > 0; i -= 2) {
        for (int j = 0; j < (n - i) / 2; ++j)
            cout << "  ";
        for (int j = 0; j < i; ++j)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
