#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main(){
    vector<double> numeros = {1.0, 2.0, 3.0, 4.0, 5.0};
    transform(numeros.begin(); numeros.end(), numeros.begin(), [](double num){return num*2;}));

    cout<< "Numeros originales: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }
    cout<<endl;

}