#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int l = 4; l <= N; l++){
        for(int k = 3; k < l; k++){
            for(int j = 2; j < k; j++){
                for(int i = 1; i < j;i++){
                    cout<<"( "<<i<<" , "<<j<<" , "<<k<<" , "<<l<<")"<<endl;
                    cout<<endl;    
                }
            }
        }
    }
    return 0;
}