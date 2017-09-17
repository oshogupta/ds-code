#include<iostream>
using namespace std;
class Circular{

struct node{
int info;
struct node *next;
}*start;
public:
    Circular(){
    start=NULL;
    }
    void createNodes();
    void display();
    void circular_sort();
};

void Circular::createNodes(){
node *n,*t;
n=t=NULL;
cout<<"\nEnter the elements of linked list\n";
while(1){
    int num;
    cin>>num;
    if(num==-999) break;
    n=new node;
    n->info=num;
    if(start==NULL) start=n;
    else t->next=n;
    t=n;
}
n->next=start;
}

void Circular::display(){
node *temp=start ;
cout<<"\nElements in Circular List\n";
do{
    cout<<temp->info<<" ";
    temp=temp->next;
}while(temp!=start);
delete(temp);
}

void Circular::circular_sort(){
node *temp=start,*t;
while(temp->next!=start){
    t=temp->next;
    while(t!=start){
        if(temp->info > t->info){int x=temp->info;temp->info=t->info;t->info=x;}
        t=t->next;
    }
temp=temp->next;
}
}

int main(){
Circular cir;
cir.createNodes();
cir.circular_sort();
cir.display();
}
