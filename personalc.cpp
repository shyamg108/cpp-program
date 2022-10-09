#include<iostream>
using namespace std;

class node{
    public:
  int data;
  node *prevLink,*nextLink;

};
node *head=NULL;

void insertion(int x){
   node * obj=new node;
   node *temp;
    temp=head;
    if(head==NULL){
         
   obj->data=x; 
    obj->prevLink=NULL;
    obj->nextLink=NULL;
    head=obj;
    }
    else{
        while(temp->nextLink!=NULL){
            temp->data=x;
            temp->prevLink=obj;
            temp->nextLink=NULL;
        }
    }
}
void display(){
    node * temp;
    if(head==NULL){
        cout<<"Node is Empty";
    }
    else{
        while(temp->nextLink!=NULL){
            cout<<temp->data<<" ";
            temp=temp->nextLink;
        }
    }
}
int main(){
    insertion(15);
     insertion(20);
     insertion(25 );
    return 0;
}