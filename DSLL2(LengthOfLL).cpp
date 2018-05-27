#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*start=NULL;
void star(){
	node *n;
	if(start==NULL){
		start=new node;
		cin>>start->data;
		start->next=NULL;
	}
	else{
		n=new node;
		cin>>n->data;
		n->next=start;
		start=n;
	}
}
void end(){
	node *t,*n;
	if(start==NULL){
	start=new node;
		cin>>start->data;
		start->next=NULL;	
	}
	else{
		n=new node;
		cin>>n->data;
		n->next=NULL;
		t=start;
		while(t->next!=NULL)
		t=t->next;
		t->next=n;
	}
}
void show(){
	node *n;
	n=start;
	while(n!=NULL){
		cout<<n->data;
		n=n->next;
	}
}
void len(){
	int n1;
	node *n;
	n=start;
	while(n!=NULL){
		n1++;
		n=n->next;
	}
	cout<<"Length Of LinkedList Is"<<n1;
}
main(){
	star();
	star();
	end();
	end();
	show();
	len();
	}
