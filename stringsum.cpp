#include<iostream>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        unsigned long long int x=0 , y=0,sum = 0;
        string::iterator it;
        for(it = num1.begin();it!=num1.end();it++){
            x*=10;
            x=x+(*it)-48;
        }
        for(it = num2.begin();it!=num2.end();it++){
            y*=10;
            y+=(*it)-48;
        }
        sum = x+y;
        string str;
        str= to_string(sum);
        return str;
    }
};
int main(){
    string num1,num2;
    cin>>num1>>num2;
    Solution sol;
    cout<<sol.addStrings(num1,num2);
    return  0;
}