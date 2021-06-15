#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		node* next;
		int data;

		node(int val){
			next=NULL;
			data=val;
		}

};

void inserttail(node* &head, int val){

	node* n= new node(val);

	if(head==NULL){
		head=n;
		return;
	}

	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

void inserthead(node* &head, int val){
	node* n= new node(val);

	n->next= head;
	head= n;
}
void deletehead(node* &head)
{
	node* todelete= head;
	head=head->next;
	delete todelete;
}

void hatao(node* &head, int val){

	if(head==NULL) return;

	if(head->next=NULL){
		deletehead(head);
		return;
	}

node* temp=head;
while(temp->next->data!=val){
	temp=temp->next;
}
node* todelete= temp->next;
temp->next=temp->next->next;
delete todelete;
}

node* rev(node* &head){
	node* curr=head;
	node* prev=NULL;
	node* nxtptr;

	while(curr!=NULL){
		nxtptr=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxtptr;
	}
	return prev;
}

node* rikrev(node* &head){
	if(head==NULL || head->next==NULL) return head;

	node* newnode= rikrev(hrad->next);
	head->next->next= hrad->next;
	head->next=NULL;
	
	
} 



bool searchs(node* &head, int key){
	node* temp=head;
	while(temp->data==key){
		return true;
		temp=temp->next;
	}
	return false;
}


void display(node* head){

	node* temp= head;
	while(temp!=NULL){
		cout<< temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
node* head= NULL;

inserttail(head,1);
inserttail(head,2);
inserttail(head,3);
inserttail(head,4);
display(head);
// node* nh= rev(head);

// display(nh);
hatao(head, 2);
display(head);
}