#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {3,3,1,2,1};
    int k, aux;

    for(int i = 0; i < 5; i++){//
        for(int j = 0; j < 5; j++){//
            if(numeros[i] <= numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j]=aux;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(numeros[i] == numeros[j]){
                numeros[j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(numeros[i] == 0){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        if(numeros[i] != 0){
            k++;
        }
    }

    cout<<k<<" , ";
    for(int i = 0; i < 5; i++){
        cout<<numeros[i]<<" ";
    }

    return 0;
}
