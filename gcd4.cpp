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
        for(int l = 4; l <= N; l++){
            for(int k = 3; k < l; k++){
                int temp=gcd(k,l);
                if(k==l-1 | temp==1){
                    result += 1*(((k-2)*(k-1))/2);
                }
                else if(temp!=1) {
                    for(int j = 2;j<k;j++){
                        int temp1=gcd(temp,j);
                        if(j==k-1 | temp1==1){
                            result += 1*(j-1);
                        }
                        else if(temp1!=1) {
                            for(int i = 1;i<j;i++){
                                int temp2 = gcd(temp1,i);
                                if(i==j-1 | temp2==1){
                                    result += 1;
                                }
                                else{
                                    result += pow(gcd(i,temp2),4);
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<result<<endl;
    }
    return  0;
}