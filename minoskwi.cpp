#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class coordinate{
    public:
        float x,y;
};
class shape {
    public:
        int corner;
        coordinate crdcorner[];
        shape(coordinate* crd,int k){
            corner = k;
            for(int i = 1; i<=k; i++){
                crdcorner[i].x = crd[i].x;
                crdcorner[i].y = crd[i].y;
            }
        };
        shape(int crn){
            corner = crn;
            for(int i = 1; i<=crn; i++){
                crdcorner[i].x = cos(((2*i - 1)*(3.14))/crn);
                crdcorner[i].y = sin(((2*i - 1)*(3.14))/crn);
            }
        }
        void print(){
            for(int i = 0;i<corner;i++){
                cout<<crdcorner[i].x<<" "<<crdcorner[i].y<<endl;
            }
        }
};
int main() {
    int start,end,sum;
    cin>>start>>end;  
    shape s1 =  shape(start);
    shape s2 =  shape(start+1);
    s1.print();
    s2.print();
    return 0;
}
