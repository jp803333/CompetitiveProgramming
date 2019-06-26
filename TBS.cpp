//triple bubble sort
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int cycle = n-2,temp;
    for(int i = 0; i < cycle; i++){
        for(int j = 1; j < n-1; j++){
            if(arr[j-1]>arr[j+1]){
                temp        = arr[j+1];
                arr[j+1]    = arr[j-1];
                arr[j-1]    = temp;
            }
        }    
    }
    int flag=0;
    for(int i = 0; i < n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = i;
            break;
        }
    }
    cout<<flag<<endl;

    return 0;
}