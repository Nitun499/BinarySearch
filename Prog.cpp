#include<bits/stdc++.h>

using namespace std;
// int GCD(int a,int b){
//   return b==0?a:GCD(b,a%b);
// }
class Node{
  public:
  int data;
  Node* next;
};
Node* head;
void Insert(int val){
  Node* temp1=new Node();
  temp1->data=val;
  temp1->next=NULL;
  if(head==NULL){
    head=temp1;
    return;
  }
  
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=temp1;
}
void Display(){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
}


int main(){
  head=NULL;
  int data,n;
  cout<<"How many element u want "<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"Enter data "<<endl;
    cin>>data;
    Insert(data);
  }
  cout<<"List ";
  Display();
  return 0;
}