#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "Boa noite" << endl;

    system("pause");
    return 0;
}
