#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class stack
{

    int top;
    int Stack[500];
public:
    void push();
    void pop();
    void display();
    stack()
    {
        top=-1;
    }
};

void stack::push()
{
    int item;
    if(top>500)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top=top+1;
        Stack[top]=item;
    }
}

void stack::pop()
{
    int item;
    if(top==-1)
    {
        cout<< "stack is empty"<<endl;
    }
    else
    {
        item=Stack[top];
        top=top-1;
    }
}
 void stack::display()
 {
     for(int i=top;i>=0;i--)
     {
         cout<< Stack[i];
     }

 }

int main()
{
    stack s;
    int choice;

       while(1)
       {
        cout<< "1.Push"<<endl;
        cout<< "2.Pop"<<endl;
        cout<< "3.display"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<< "enter the element"<<endl;
            cin>>choice;
                 s.push();
            break;
            case 2:s.pop();
            break;
            case 3: s.display();
            break;
            case 4:default: cout<< "wrong choice"<<endl;
        }

       }
       return(0);
}
