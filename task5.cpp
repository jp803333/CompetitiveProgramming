#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        int id;
        string name;
        double cgpa;
        student(){}
        student(int id1,string name1,double cgpa1){
            id    =   id1;
            name  =   name1;
            cgpa  =   cgpa1;
        }
        int getID(){
            return id;
        }
        string getName(){
            return name;
        }
        double getCGPA(){
            return cgpa;
        }
};
class priorities{
    public:
        int num; 
        int index = 0;
        student arr[100];
        priorities(){};
        void getStudent(){
            student temp;
            for (int i = 0; i < index; i++){
                for(int j = 0; j < index-1; j++){
                     if(arr[j].getCGPA() < arr[j+1].getCGPA()){
                        temp        =   arr[j];
                        arr[j]      =   arr[j+1];
                        arr[j+1]    =   temp;
                    }
                    if(arr[j].getCGPA() == arr[j+1].getCGPA()){
                        if(arr[j].getName().compare(arr[j+1].getName()) == 0){
                            if(arr[j].getID()>arr[j].getID()){
                                 temp        =   arr[j];
                                arr[j]      =   arr[j+1];
                                arr[j+1]    =   temp;
                            }
                        }
                        else if(arr[j].getName().compare(arr[j+1].getName()) > 0){
                            temp        =   arr[j];
                            arr[j]      =   arr[j+1];
                            arr[j+1]    =   temp;
                        }
                    }
                }
            }
            for(int i = 0; i < index;i++){
                arr[i]      =   arr[i+1];
            }
            index--;
        }
};
int main(){
    int N,id;
    string cmd,name;
    double cgpa;
    cin>>N;
    priorities ptr;
    student std;
    for(int i = 0;i<N;i++){
        cin>>cmd;
        if(cmd.compare("ENTER")==0){
            cin>>name>>cgpa>>id;
            transform(name.begin(),name.end(),name.begin(),::tolower);
            std = student(id,name,cgpa);
            ptr.arr[ptr.index] = std;
            ptr.index++;     
        }
        else if(cmd.compare("SERVED") == 0){
            ptr.getStudent();
            //ptr.index--;
        }
        else if((cmd.compare("SERVED") == 0) & ptr.index == 0){
            cout<<"QUEUE is Empty"<<endl;
        }
        else{
            cout<<"Wrong input"<<endl;
        }
    }
    int index = ptr.index;
    for(int i = 0; i < index;i++){
        cout<<ptr.arr[i].getName()<<endl;
    }

    return 0;
}