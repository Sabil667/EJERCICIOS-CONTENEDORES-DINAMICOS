#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    vector<int> numeros= {44, 12, 67, 23, 87, 35, 54, 77, 92, 10};
    cout<<"Vector original: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }
    cout<<endl;

    sort(numeros.begin(), numeros.end());
    cout<<"Vector ordenado: ";
    for(const auto& num : numeros){
        cout<<num<<" ";
    }
    cout<<endl;





}