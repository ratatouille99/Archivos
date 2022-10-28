#include <iostream>
#include <string>
#include <map>

using namespace std;

bool anagram(string, string);

int main(){
    string s = "anagram";
    string t = "naragam";

    cout<<anagram(s,t)<<endl;

    return 0;
}

bool anagram(string str1, string str2){

    if(str1.length() != str2.length()) return false;

    map<char,int>Map;

    for(int i = 0; i < str1.length(); i++){
        Map[str1[i]] += 1;//aca ya hemos mapeado el string
    }

    for(int i = 0; i < str2.length(); i++){
        if(Map.find(str2[i]) != Map.end()){
            Map[str2[i]] -= 1;
        }
        else{
            return false;
        }
    }

    for(auto item : Map){
        if(item.second != 0){
            return false;
        }
    }
    return true;
}
