#include <iostream>
#include <string>

using namespace std;

int main(){
    string palabra;
    int contador = 0;
    bool valor;

    cin>>palabra;

    for(int i = 0; i < palabra.length(); i++){
        for(int j = 0; j < palabra.length(); j++){
            if(palabra[i] == palabra[j])
                contador++;
        }
        if(contador >= 2){
            cout<<"false";
            break;
        }
        else{
            contador = 0;
        }
    }

    if(contador == 0){
        cout<<"true";
    }

    return 0;
}
