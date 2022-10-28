#include <iostream>
#include <string>
#define NUM_CHARS 26

using namespace std;

bool anagram(string, string);

int main()
{
    string str1 = "anagram";
    string str2 = "naragam";

    cout << anagram(str1, str2) << endl;
    return 0;
}

bool anagram(string str1, string str2){
    int count1[NUM_CHARS] = {0};

    if(str1.length() != str2.length()) return false;

    for(int i = 0; i < str1.length(); i++){
        int index1 = str1[i] - 'a';
        int index2 = str2[i] - 'a';

        count1[index1] += 1;
        count1[index2] -= 1;
    }

    for(int j = 0; j < NUM_CHARS; j++){
        if(count1[j] != 0){
            return false;
        }
    }
    return true;
}
