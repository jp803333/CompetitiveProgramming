#include <iostream>
#include <string>
#include <iterator>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    char temp;
    for(int i = 0;i<n;i++){
        auto it = s.begin()+i;
        auto it2 = t.begin();
        while(true) {
            if(*it == *it2 && it != s.end() && it2 != t.end()){
                it++;
                it2++;
            }
            else if(it == s.end() | it2 == t.end()){
                cout<<i;
                return 0;
            }
            else{
                break;
            }
        }
    }
    return 0;
}