#include<iostream>
using namespace std;
#include "Node.cpp"

void printll(Node*head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
Node* takeinput1(){
    int data;
    cin>>data;
    Node*head=NULL;
    while(data!=-1){
        Node*newnode=new  Node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
Node* takeinput2(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node*newnode=new  Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
            //or
            //tail=tail->next;

        }
        cin>>data;
    }
    return head;
}
Node* insertatpos(Node* head,int data,int i){
    Node* newnode=new Node(data);
    Node* temp=head;
    int count=0;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(count<i-1 && temp!=NULL){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        Node* a=temp->next;
        temp->next=newnode;
        newnode->next=a;
    }
    return head;
}

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node*temp=head;
    Node* b=head;
    int count=0;
    if(pos==0){
        head=head->next;
        delete temp;
        return head;
    }
    else if(pos==1){
        Node* a=temp->next;
        b=a->next;
        temp->next=b;
        delete a;
        return head;
    }
    while(temp!=NULL && count<pos-1 && b!=NULL){
        temp=temp->next;
        b=temp->next;
        count++;
    }
    if(b!=NULL){
      temp->next=b->next;
      delete b;
    }
    return head;

}
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return prev;
}
void reversebetter(Node* head){
    if(head->next==NULL){
        return ;
    }reversebetter(head->next);
    Node* q= head->next;
    q->next=head;
    head->next=NULL;
}


int main(){

    //statically
    /*Node n1(10);
    Node*head=&n1;
    Node n2(20);
    n1.next=&n2;
    printll(head);

    //dynamically
    Node *n3=new Node(100);
    Node*head2=n3;
    
    Node *n4=new Node(200);
    n3->next=n4;
    printll(head2);*/
    Node*head=takeinput2();
    printll(head);
    cout<<endl;
    reversebetter(head);
    printll(head);
    


}