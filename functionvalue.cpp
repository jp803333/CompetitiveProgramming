#include<iostream>
using namespace std;
unsigned long long int fu(int t){
    if( (t == 1) | (t == 2)){
        return 1;
    }
    else if(t%2==0){
        return (2*fu(t-1) - fu(t-2) + 2);
    }
    else{
        return (3*fu(t-2));
    }
}

int main(){
    unsigned long long int t,p;
    cin>>t>>p;
    while(t!=0){
        t--;
        int start,end;
        cin>>start>>end;
        unsigned long long int ret=0,temp,fut;
        for(int i =start;i<=end;i++){
            fut = fu(i);
            temp = ret;
            ret += fu(i);
            /*if(ret>p){
                ret = ret%p;
            }*/
        }
        cout<<ret%p<<endl;
    }
    return 0;
}