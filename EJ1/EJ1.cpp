#include <iostream>
#include <vector>

using namespace std;

int main(){
vector<int> numeros;

numeros.push_back(5);
numeros.push_back(10);
numeros.push_back(15);
numeros.push_back(20);
numeros.push_back(25);
numeros.push_back(30);

cout<<"Elementos del vector: "<<endl;
for(vector<int>::iterator it=numeros.begin(); it !=numeros.end(); ++it){
    cout<<*it<<" ";



}
    cout<<endl;
}
