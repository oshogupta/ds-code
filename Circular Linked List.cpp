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
};
void Circular::createNodes(){
node *n,*t;
n=t=NULL;
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
node *temp=start    ;
do{
    cout<<temp->info<<" ";
    temp=temp->next;
}while(temp!=start);
delete(temp);
}
int main(){
Circular cir;
cir.createNodes();
cir.display();
}
