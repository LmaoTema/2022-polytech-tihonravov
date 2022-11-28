#include<iostream>


struct Node 
{
    int data;
    Node* next;
};

Node* generate(int n)
{
    Node* ptr = nullptr;
    for(int i=n; i>0; --i)
    {
        Node* new_node = new Node{i, ptr};
        ptr = new_node;
    }
    return ptr;
}