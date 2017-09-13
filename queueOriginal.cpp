#include<iostream>
#include<conio.h>
#include<malloc.h>

using namespace std;

struct queue
{
    int no;
    struct queue *next;
};

class Que
{
    queue *start;
public:
    void add();
    void del();
    void display();
    Que()
    {
        start = NULL;
    }
};
int main()
{
    int choice,item;
    Que q;
    while(1)
    {
        cout<< "1.Add the element"<<endl;
        cout<< "2.delete"<<endl;
        cout<< "3.display"<<endl;
        cout<< "enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            q.add();
            break;
        case 2:
            q.del();
            cout<<"the deleted element is";
            break;
        case 3:
            q.display();
            cout<< "the elements diplayed are"<<endl;
            break;
        default:
            cout<< "wrong choice"<<endl;
        }
    }
    return 0;
}

void Que :: add()
{
    struct queue *p,*temp;
    temp=start;
    p=new(struct queue);
    cout<< "enter the data"<<endl;
    cin>>p->no;
    p->next=NULL;
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }
}

void Que :: del()
{
    struct queue *temp;
    int value;
    if(start == NULL)
    {
        cout<< "queue is empty"<<endl;
        getch();
    }
    else
    {
        temp=start;
        value=temp->no;
        start=start->next;
        delete(temp);

    }
}

void Que :: display()
{
    struct queue *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        cout<< "no si "<<temp->no;
        temp=temp->next;
    }
    cout<< "no is "<< temp->no;
}
