#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x>0){
            int y=0;
            int temp = x;
            while(temp!=0){
                y*=10;
                y+=temp%10;
                temp =temp/10;
            }
            if(y==x){
                return true;
            }
            else return false;
        }
        else return false;
    }
};
int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.isPalindrome(n);
    return  0;
}