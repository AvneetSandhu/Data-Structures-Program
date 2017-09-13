#include<iostream>
#include<conio.h>
#include<malloc.h>
#include<process.h>
#include<stdio.h>

using namespace std;

struct stack
{
    int no;
    struct stack *next;
}*start;

typedef struct stack st;

class Stack
{
public:
    void push();
    void pop();
    void display();
};

void Stack :: push()
{
    st *node;
    node=new(st);
    cout<< "Enter the new node"<<endl;
    cin>>node->no;
    node->next=start;
    start=node;
}
void Stack :: pop()
{
    st *temp;
    temp=start;
    if(start==NULL)
    {
        cout<< "stack is empty"<<endl;
    }
    else
    {
        start=start->next;
        delete(temp);
    }

}

void Stack :: display()
{
    st *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        cout<< "no is "<<temp->no;
        temp=temp->next;
    }
    cout<< "no is "<<temp->no;
}

int main()
{
    Stack s;
    int choice , item;
    while(1)
    {
        cout<< "1.push the element"<<endl;
        cout<< "2.pop the element"<<endl;
        cout<< "3.display the stack"<<endl;
        cout<< "enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            cout<< "the deleted item is"<<item;
            break;
        case 3:
            s.display();
            break;

        default:
            cout<< "wrong choice"<<endl;
        }



    }
    return(0);
}
