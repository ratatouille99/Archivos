#include <iostream>
#include <string.h>

using namespace std;

int maximo = 256;

bool anagrama(string, string);

int main()
{
    bool valor;
    string s, t;

    cin>>s;
    cin>>t;

    valor = anagrama(s,t);
    cout<<valor;

    return 0;
}

bool anagrama(string str1, string str2){
    int contador = 0;

    if(str1.length() != str2.length())
        return false;

    for(int i = 0; i < str1.length(); i++){
        for(int j = 0; j < str1.length(); j++){
            if(str1[i] == str2[j]){
                contador++;
                break;
            }
        }
    }

    if(contador == str1.length()){
        return true;
    }
    else{
        return false;
    }
}
