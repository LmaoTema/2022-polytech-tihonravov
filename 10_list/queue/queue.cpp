#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
 

struct Node
{
    int data;               
    struct Node* next;     
}*rear = NULL, *front = NULL;

struct Node* newNode(int item)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    if (node != NULL)
    {
        node->data = item;
        node->next = NULL;
        return node;
    }
    else 
    {
        cout <<"\nHeap Overflow" <<endl;
        exit(EXIT_FAILURE);
    }
}
 
// Функция для удаления переднего элемента из очереди
int dequeue()    
{
    if (front == NULL)
    {
        cout <<"\nQueue Underflow" <<endl;
        exit(EXIT_FAILURE);
    }
 
    struct Node* temp = front;

    front = front->next;

    if (front == NULL) 
    {
        rear = NULL;
    }

    int item = temp->data;
    free(temp);
    return item;
}
void enqueue(int item)       //Функция для вставки элемента в начало 
{
    
    struct Node* node = newNode(item);
    if (front == NULL)
    {
        front = node;
        rear = node;
    }
    else
    {
        rear->next = node;
        rear = node;
    }
}
 
int peek()
{
    if (front != NULL) 
    {
        return front->data;
    }
    else 
    {
        exit(EXIT_FAILURE);
    }
} 
int isEmpty() 
{
    return rear == NULL && front == NULL;
}
 
int main()
{
    enqueue(15);
    enqueue(21);
    enqueue(69);
    enqueue(32);
 
    cout<< peek() <<endl;
 
    dequeue();
    dequeue();
    dequeue();
    dequeue();
 
    if (isEmpty()) 
    {
        cout <<"The queue is empty"<<endl;
    }
    else 
    {
        cout <<"The queue is not empty"<<endl;
    }
 
    return 0;
}

