#include <iostream>
using namespace std;
int main(){
    int test=1;
    int pile=5,maxtake=2;
    //cin>>test;
    while(test != 0){
        //cin>>pile>>maxtake;
        for(int  i = 1 ; pile>-1; i++){
            if(pile == 0){
                if(1%2!=0){
                    cout<<"Arpa"<<endl;
                    break;
                }else{
                    cout<<"Dishant"<<endl;
                    break;
                }
            }
            else{
                if(maxtake==pile){
                    pile=0;
                    continue;
                }
                else if(maxtake<pile){
                    if(pile%2==0){
                        if(maxtake>=pile/2){
                            pile -= ((pile/2)-1);
                        }else{
                            pile-=maxtake;
                        }
                    }else{
                        if(maxtake>=(pile+1)/2){
                            pile -= (pile/2);
                        }
                        else{
                            pile-=maxtake;
                        }

                    }
                }
            }
        }
        test--;
    }
    return 0;
}