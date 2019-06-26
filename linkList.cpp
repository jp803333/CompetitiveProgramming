#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next = nullptr;
};
int main(){
    node* head = new node();
    node* first = new node();
    node* second = new node();
    head->data = 0;
    head->next = first;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = nullptr;
    while(head->next!=nullptr){
        cout<<head->data<<endl;
        head = head->next;
    }  
    return 0;
}