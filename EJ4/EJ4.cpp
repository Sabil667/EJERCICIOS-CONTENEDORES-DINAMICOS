#include <iostream>
#include <valarray>

using namespace std;

int main(){
    valarray<double> numeros = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout<<"Valarray original: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }




}