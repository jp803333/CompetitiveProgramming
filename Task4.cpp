#include <iostream>
using namespace std;
class Workshop{
    public:
        int start_time;
        int duration;
        int end_time;
};
class Available_Workshops{
    public:
        int numWorkshops;  
        Workshop arr[];
        Available_Workshops(){};  
};

Available_Workshops* initialize(int start_time[],int duration[],int n){
    Available_Workshops* aw1 = new Available_Workshops();
    aw1->numWorkshops=n;
     for(int i = 0 ; i < n ; i++){
        aw1->arr[i].start_time = start_time[i];
        aw1->arr[i].duration = duration[i];
        aw1->arr[i].end_time = start_time[i] + duration[i];
    }
    return aw1;
}
int CalculateMaxWorkshops(Available_Workshops* ptr){
    int count = ptr->numWorkshops,index;
    Workshop arr2[count],temp2;
    for(int i= count-1; i >= 0; i--){
        temp2.start_time = -1;
        temp2.end_time = -1;
        index=-1;
        for(int j = 0;j<count;j++){
            if(temp2.start_time ==  ptr->arr[j].start_time ){
                if(temp2.end_time<ptr->arr[j].end_time){
                    temp2 = ptr->arr[j];
                    index= j;
                }
            }
            if(temp2.start_time<ptr->arr[j].start_time){
                temp2 = ptr->arr[j];
                index = j;
            }
        }
        ptr->arr[index].start_time = -1;
        ptr->arr[index].duration = -1;
        ptr->arr[index].end_time = -1;
        arr2[i] = temp2;
    }
    int max = 0,temp;
    for (int i = 0; i < count; i++)
    {
        int k=i;
        temp = 1;
        for(int j = i ; j< count-1;j++ ){
            //cout<<"i = "<< i <<" K = "<< k <<" j ="<< j <<endl;
            //cout<<arr2[k].end_time<<" : "<<arr2[j+1].start_time<<endl;
            if(arr2[k].end_time <= arr2[j+1].start_time){
                temp++;
                k=j+1;
            }
            //cout<<"temp : "<<temp<<" max : "<<max<<endl;
            //cout<<endl;
        }
        if(temp>max){
            max = temp;
        }
        /*cout<<endl;
        cout<<"---------------------------------------------";
        cout<<endl;*/
    }
    return  max;
}
int main(){
    int N=6;
    cin>>N;
    int startime[N];//={1,3,0,5,5,8};
    int duration[N];//={1,1,6,2,4,1};
    for(int i = 0; i < N; i++){
        cin>>startime[i];
    }
    cout<<endl;
    for(int i = 0; i < N; i++){
        cin>>duration[i];
    }
    Available_Workshops*  aw2;
    aw2 = initialize(startime,duration,N);
    cout<<"max : "<<CalculateMaxWorkshops(aw2)<<endl;
    //CalculateMaxWorkshops(aw2);
    return  0;
}