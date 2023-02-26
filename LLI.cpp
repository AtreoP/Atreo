#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void Insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void Insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void Insertatposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        Insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        Insertattail(tail,d);
        return;
    }
    Node* NodetoInsert=new Node(d);
    NodetoInsert->next=temp->next;
    temp->next=NodetoInsert;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void Deleteathead(Node* &head,int d){
   if(d == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
}
void Deleteattail(Node* &head,int d){
    Node* curr=head;
    Node* prev=NULL;
    int cnt = 1;
    while(cnt < d) {
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

    prev -> next = curr -> next;
    curr -> next  = NULL;
    delete curr;

}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    Insertattail(tail,12);
    print(head);
    Insertattail(tail,15);
    print(head);
    Insertatposition(tail,head,4,22);
    print(head);
    Deleteathead(head,1);
    print(head);
    Deleteattail(head,2);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}