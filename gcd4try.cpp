#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
int main(){
    int testcase;
    cin>>testcase;
    int N;
    while(testcase!=0){
        cin>>N;
        testcase--;
        int result=0;
        for(int i = 1 ; i < N-3;i++){
            if(i==1){
                result +=
            }
            for(int j = i+1; j < N-2;j++){
                for (int k = j+3; i < N-1; k++)
                {
                    for (int l = k; k <= N; l++)
                    {

                    }
                    
                }
                
            }
        }
        cout<<result<<endl;
    }
    return  0;
}