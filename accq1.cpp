#include <iostream>
using namespace std;

string change(string ch,char a,char b){
    //cd string result = "";
    for(int i = 0; i < ch.length(); i++){
        if(ch[i] == a){
            ch[i]=b;
        }
        else if(ch[i]==b){
            ch[i]=a;
        }

    }
    return ch;
}

int main(){
    string ab = "";
    cout<<"Enter string";
    cin>>ab;
    char a,b;
    cin>>a;
    cin>>b;
    
    cout<<change(ab,a,b);
    return 0;
}