#include <iostream>
#include <valarray>

using namespace std;

int main(){
    valarray<double> numeros = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout<<"Valarray original: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }
    cout<<endl;

    double suma = numeros.sum();
    cout<<"Suma de todos los elementos: "<<suma<<endl;

    numeros-=1.0;
    cout<<"Valarray despues de restar 1 a todos los elementos: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }
    cout<<endl;

    numeros*=2.0;
    cout<<"Valarray despues de multiplicar por 2 todos los elementos: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }



}