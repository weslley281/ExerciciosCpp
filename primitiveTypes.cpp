#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    bool isAdmin = 1;
    cout << isAdmin << endl;

    unsigned short int age = 27;

    system("pause");
    return 0;
}
