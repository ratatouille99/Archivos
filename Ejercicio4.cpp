#include <iostream>
#include <string>

using namespace std;

bool isValid(string s);

int main()
{
    string s = "((";

    cout<<isValid(s);

    return 0;
}

bool isValid(string s){

    int numeros[3] = {0};

    if(s.length() % 2 == 1){
        return false;
    }

    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == char(40)){
            numeros[1]++;
        }
        else if(s[i] == char(91)){
            numeros[2]++;
        }
        else if(s[i] == char(123)){
            numeros[3]++;
        }
    }

    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == char(41)){
            numeros[1]--;
        }
        else if(s[i] == char(93)){
            numeros[2]--;
        }
        else if(s[i] == char(125)){
            numeros[3]--;
        }
    }

    for(int i = 0; i < 3; i++){
        if(numeros[i] != 0){
            return false;
        }
    }
    return true;
}
