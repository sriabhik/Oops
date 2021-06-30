#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node * link;
};
Node *Insert(Node * head){
    int val;cin>>val;

    if(head == NULL)
        {
            head = new Node();
            head->data = val;
            head->link=NULL;  
            return head;
        }
    Node * temp ;temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    Node * newNode = new Node();
    temp->link = newNode;
    newNode->data = val;
    newNode->link = NULL;
    return head;
}
void Display(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> " ;
        temp = temp->link;
    }
    cout <<endl;
}
int main(){

    Node * head = NULL;
    bool f= true;
    int ch;
    while(f){
        cin >> ch;
        switch(ch)
        {
            case 1: 
                head = Insert(head);
                break; 
            case 2:
                Display(head);
                break;
            
                
        }
    }


}