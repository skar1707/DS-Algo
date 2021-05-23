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
    node* top = NULL;
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
            top = addelement(top,val);
            break;
        case 2:
            top=removeelement(top,&val);
            if(val>0)
                cout<<"Deleted element is "<<val<<"\n";
            else
                cout<<"Stack already Empty\n";
            break;
        case 3:
            showelements(top);
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

node* addelement(node* top,int val)
{
    node* temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(top==NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
    return top;
}

void showelements(node* top)
{
    node* temp = top;
    if(temp==NULL)
    {
        cout<<"Stack Already Empty\n";
    }
    while(temp)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
}

node* removeelement(node* top,int *val)
{
    if(top==NULL)
    {
        *val=-1;
    }
    else{
        *val=top->data;
        node* temp = top;
        top=top->next;
        temp->next=NULL;
        delete temp;
    }
    return top;
}

void tasklist()
{
    cout<<"Enter 1 to add the elemnets\n";
    cout<<"Enter 2 to delete the element from the stack\n";
    cout<<"Enter 3 to list all the elements of the stack\n";
    cout<<"Enter 4 to exit\n";
}