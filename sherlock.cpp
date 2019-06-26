//sherlock
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len;
    len = str.length();
    char charstr[len]; 
    string::iterator it;
    int i = 0;
    for(it = str.begin(); it != str.end();it++){
        if(*it != ' '){
            charstr[i] = *it;
            i++;
        }
    }
    int charlen = i;
    int row = int(sqrt(i));
    int col = row+1;
    char arr[row][col];
    int  k = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(k<charlen){
                arr[i][j] = charstr[k];
                k++;
            }
        }   
    }
    k=0;
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            if(k<=charlen){
                cout<<arr[j][i];
                k++;
            }
        }
        cout<<" ";   
    }
    return 0;
}