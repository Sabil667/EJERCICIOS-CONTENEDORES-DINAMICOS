#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main(){
    auto cuadrado = [](int num) -> int { return num * num; };
    vector<int> numeros = {1, 2, 3, 4, 5};

    auto resultado = make_unique<vector<int>>();

    for_each(numeros.begin(), numeros.end(), [&](int num) {
        resultado->push_back(cuadrado(num));
    });

    cout << "Numeros originales: ";
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;



}