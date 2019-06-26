#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
        int size = s.size();
        if(size >1){
            char temp1 = *(s.end()-1),temp2 = *s.begin();
            s.erase(s.begin());
            s.pop_back();
            s.shrink_to_fit();
            reverseString(s);
            s.resize(size);
            if(temp1 != ' ' | temp2 != ' '){
                s.insert(s.begin(),temp1);
                s.insert(s.end()-2,temp2);
                s.pop_back();
                s.pop_back();
            }
            s.shrink_to_fit();
        }
}
int main(){
    vector<char> s = {'j','i','t','n','a','w','d'};
    reverseString(s);
    for(auto it = s.begin(); it!= s.end();it++){
        cout<<"\""<<*it<<"\""<<",";
    }
    return 0;
}
