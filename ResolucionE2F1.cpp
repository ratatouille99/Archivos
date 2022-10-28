#include <iostream>
#include <string>
#define NUM_CHARS 26

using namespace std;

bool anagram(string, string);

int main(){
    string str1 = "anagram";
    string str2 = "naragam";

    bool resultado = anagram(str1, str2);

    cout<<resultado;

    return 0;
}

bool anagram(string str1, string str2){
    int count1[NUM_CHARS] = {0};//creamos dos array que guardan todas las letras del alfabeto
    int count2[NUM_CHARS] = {0};

    if(str1.length() != str2.length()) return false;

    for(int i = 0; i < str1.length(); i++){
        int index1 = str1[i] - 'a';//obtenemos una direccion de la letra que tenemos
        int index2 = str2[i] - 'a';//ejemplo : c - a = 2 ---> ahora tenemos 2 como direccion

        count1[index1]+= 1;//ya con la direccion sumamamos a la misma uno para identificarla
        count2[index2]+= 1;
    }

    for(int j = 0; j < NUM_CHARS; j++){
        if(count1[j] != count2[j]){//comparamos ambos arrays
            return false;
        }
    }
    return true;
}
