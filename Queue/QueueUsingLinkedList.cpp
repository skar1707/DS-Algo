#include <iostream>

using namespace std;
struct node
{
    int data;
    node* next;
};
node* addelement(node*,int);
void showelements(node*);
node* removeelement(node*,int*);
void tasklist();
int main()
{
    node* front = NULL;
    node* rear = NULL;
    int choice = 0;
    int val=0;    

    do
    {
        tasklist();
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the Elemnet\n";
            cin>>val;
            rear = addelement(rear,val);
            if(front==NULL)
                front = rear;
            break;
        case 2:
            front = removeelement(front,&val);
            if(front==NULL)
                rear=front;
            if(val>0)
                cout<<"Deleted element is "<<val<<"\n";
            else
                cout<<"Queue already Empty\n";
            break;
        case 3:
            showelements(front);
            break;
        case 4:
            cout<<"Thanks for visiting\nGoodBye\n";
            break;
        default:
            cout<<"Wrong Choice Please try again\n";
            break;
        }
    }while(choice!=4);

    return 0;
}

node* addelement(node* rear,int val)
{
    node* temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(rear==NULL)
    {
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    return rear;
}

void showelements(node* front)
{
    node* temp = front;
    if(temp==NULL)
    {
        cout<<"Queue Already Empty\n";
    }
    while(temp)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

node* removeelement(node* front,int *val)
{
    if(front==NULL)
    {
        *val=-1;
    }
    else{
        *val=front->data;
        node* temp = front;
        front=front->next;
        temp->next=NULL;
        delete temp;
    }
    return front;
}

void tasklist()
{
    cout<<"Enter 1 to add the elemnets\n";
    cout<<"Enter 2 to delete the element from the Queue\n";
    cout<<"Enter 3 to list all the elements of the Queue\n";
    cout<<"Enter 4 to exit\n";
}