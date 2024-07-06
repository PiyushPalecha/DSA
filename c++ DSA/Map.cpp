#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> marksMap;
    marksMap["piyush"] = 98;
    marksMap["mitul"] = 95;
    marksMap["amit"] = 97;

    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr != marksMap.end(); itr++){
        cout <<(*itr).first <<" " <<(*itr).second<<"\n";
    }
    return 0;

}

