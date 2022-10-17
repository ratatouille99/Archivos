#include <iostream>
#include <string>

//Verificar si una letra se repite dentro de una cadena o no
using namespace std;

const int maximo = 256;

bool Caracteres(string str);

int main()
{
    string palabra;

    cout<<"Introducir una palabra: ";
    cin>>palabra;
    //valor = Caracteres(palabra);
    cout<<Caracteres(palabra);

    return 0;
}

bool Caracteres(string str){
    bool lista[maximo] = {0};

    if(str.length() > maximo){
        return false;
    }

    for(int i = 0; i < str.length() ; i++){
        if(lista[int(str[i])] == true){
            return false;
        }
        lista[int(str[i])] = true;
    }

    return true;
}
