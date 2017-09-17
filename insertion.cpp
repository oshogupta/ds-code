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
    void beg_insert();
    void end_insert();
    void pos_insert();
    void dif_insert();
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
void Circular::beg_insert(){
node *temp=start,*t;
do{t=temp;temp=temp->next;}while(temp!=start);
node *n=new node;
int num;
cout<<"\nEnter the number\n";
cin>>num;
n->info=num;
n->next=start;
t->next=n;
start=n;
}
void Circular::end_insert(){
node *temp=start,*t;
node *n;
int num;
cout<<"\nEnter the number\n";
cin>>num;
do{t=temp;temp=temp->next;}while(temp!=start);
n=new node;
t->next=n;
n->info=num;
n->next=start;
}
void Circular::pos_insert(){
int c=0;
int pos;
cout<<"\nEnter the position\n";
cin>>pos;
node *temp=start,*t;
node *n;
if(pos==1) beg_insert();
else{
do{
    c++;
    if(c==pos){
        n=new node;
        int num;
        cout<<"\nEnter the number\n";
        cin>>num;
        n->info=num;
        t->next=n;
        n->next=temp;
        break;
    }
    t=temp;
    temp=temp->next;
}while(temp!=start);
}
}
void Circular::dif_insert(){
int num;
cout<<"\nEnter the number before which you want to insert\n";
cin>>num;
int number;
cout<<"\nEnter the number you want to insert\n";
cin>>number;
node *n;
node *temp=start,*t=start;
if(temp->info==num){
n=new node;
        n->info=number;
        n->next=temp;
        start=n;
        while(temp->next!=t){
            temp=temp->next;
        }
        temp->next=start;
        }
else{
do{
    if(temp->info==num){
        n=new node;
        n->info=number;
        n->next=temp;
     t->next=n;
        if(temp==start) start=n;
        break;
    }
    t=temp;
    temp=temp->next;
}while(temp!=start);
}
}

int main(){
Circular cir;
cir.createNodes();
int choice;
cout<<"\nEnter 1 for begining insert \nEnter 2 for End insertion \nEnter 3 to enter position of insertion\n Enter 4 for Different insert\n";
cin>>choice;
switch(choice){
case 1:
    cir.beg_insert();
    break;
case 2:
    cir.end_insert();
    break;
case 3:
    cir.pos_insert();
    break;
case 4:
    cir.dif_insert();
    break;
}
cir.display();
}
