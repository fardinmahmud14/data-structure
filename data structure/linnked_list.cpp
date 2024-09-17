#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    struct node *next;
};
 
int main(){
    node *head=nullptr;
    node *s=new node;
    int a;
    cin>>a;
    s->data=a;
    s->next=nullptr;
    head=s;

    node *p=new node;
    int b;
    cin>>b;
    p->data=b;
    p->next=nullptr;
    s->next=p;

    /*node *q=new node;
    q->data=11;
    q->next=nullptr;
    p->next=q;*/

    node *cur=head;
    while(cur!=nullptr){
        cout<<cur->data<<" ";
        cur=cur->next;
    }

   
  
    return 0;
}