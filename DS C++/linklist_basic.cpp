#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *link;//self referential structure(conatain pointer a structure of same type)
};
int main(){
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;
    head->link = second;

    second->data = 2;
    second->link = third;

    third->data = 3;
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> " ;
        temp = temp->link;
    }
    return 0;


}