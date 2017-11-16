#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head = NULL;
void create(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;
    if(head==NULL)
    {

        head = nptr;

    }
    else{
        node* tptr = head;
        while(tptr->next!=NULL)
        {
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}
void print()
{
    node* tptr = head;
    while(tptr!=NULL){
        cout<< tptr->data << " ";
        tptr= tptr->next;
    }
    cout<<endl;
}


int main(){
    create(1);
    print();
    create(2);
    print();
    create(3);
    print();
    create(4);
    print();
     create(1);
    print();
    create(2);
    print();
    create(3);
    print();
    create(4);
    print();
    return 0;

}


