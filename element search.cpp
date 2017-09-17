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
    void e_search();
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
node *temp=start ;
cout<<"\nElements in Circular List\n";
do{
    cout<<temp->info<<" ";
    temp=temp->next;
}while(temp!=start);
delete(temp);
}
void Circular::e_search(){
int num;
cout<<endl<<"Enter Number to Search"<<endl;
cin>>num;
node *temp=start;
int c=0;
do{
    if(temp->info==num){cout<<"Found"<<endl;c=1;break;}
    temp=temp->next;
}while(temp!=start);
if(c==0)cout<<"\nNot Found \n";
delete(temp);
}

int main(){
Circular cir;
cir.createNodes();
cir.e_search();
cir.display();
}
