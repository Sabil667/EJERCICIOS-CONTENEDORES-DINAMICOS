#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main(){
    list<double> numeros = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<double, list<double>> numerosStack(numeros);

    cout << "Lista original: ";
    for(const auto& num : numeros){
        cout << num << " ";
    }
    cout << endl;



}