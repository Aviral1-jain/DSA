#include <iostream>
#include"Node.cpp"
using namespace std;
Node* takeinput(){
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1){
//	Node n(data);// deallocate as scopoe is here only so use dynamic allocatioin
Node *newNode=new Node(data);
if(head==NULL){
		head=newNode;
		tail=newNode;
}
else{
 tail->next=newNode;
 tail=tail->next;
}
	cin>>data;	
	}
	return head;
}
void print(Node *head){
	/*Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}*/
		while(head!=NULL){//print only time as head=null so takaea temp pointer
		cout<<head->data<<" ";
		head=head->next;
	}
}
void del(Node *head){
	Node *temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
		
	}
	Node *a=temp->next;
	temp->next=NULL;
	delete a;
	
	
	//delete temp;
}
int main(){
	Node *head=takeinput();
	print(head);
 del(head);
 cout<<endl;
 	print(head);
	return 0;
}
