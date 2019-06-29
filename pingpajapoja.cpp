#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int x,y,k;
	    cin>>x>>y>>k;
	    int sum = x+y;
	    int iq = sum/k,ir=sum%k;
	    if(iq%2 == 0 && ir >= 0 && ir <k){
	        cout<<"Chef"<<endl;
	    }
	    else if(iq%2 != 0 && ir >= 0 && ir <k){
	        cout<<"Paja"<<endl;
	    }
	    t--;
	}
	return 0;
}
