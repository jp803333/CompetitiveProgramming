#include<iostream>
using namespace std;
class status{
    public:
        int fun;
     
};
class Appendstatus : public status{
    public:
        string str;
};
class delstatus : status{
    public:
        int ind;
};
class atom{
    private:
        string str;
    public:
        void append(string appendStr){
            str = appendStr;
        };
        void del(int k){
            string::iterator it;
            for ( it  = str.begin()+k-1; it!=str.end()-1; it++)
            {
                *it = *(it+1);
            }
            *it='\n';
        };
        void print(int ind){
            string::iterator it;
            for ( it  = str.begin(); it!=str.end(); it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
            
            //cout<<*(it+ind-1)<<endl;
        };
        void undo(){}

};
int main(){
    int k,fun,ind;
    string str;
    cin>>k;
    status sts[k];
    atom aps;
    while(k!=0){
        cin>>fun;
        switch (fun)
        {
        case 1:
            cin>>str;
            aps.append(str);
            k--;
            break;
        case 2:
            cin>>ind;
            aps.del(ind);
            k--;
            break;
        case 3:
            cin>>ind;
            aps.print(ind);
            k--;
            break;
        case 4:
            aps.undo();
            k--;
            break;
        default:
            cout<<"wrong input"<<endl;
            break;
        }
    }
    return 0;
}