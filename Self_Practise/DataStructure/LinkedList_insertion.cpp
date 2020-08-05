#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

struct node
{
	int data;
	node* next;
};
node* head = NULL;
/**
 * funtion by value passing
 * @param  int to be inserted at the begining
 * @return int
 */
void insertAtBegining(int x){
	node* temp = new node();
	temp->data = x;
	temp->next = NULL;
	if(head != NULL)
		temp->next = head;
	head = temp;
}
void print(){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"<<<====>>>";
		temp = temp->next;
	}
}
void insertAtNth(int n,int x){
	node* temp1 = new node();
	temp1->data = x;
	temp1->next = NULL;
	if(n == 1){
		temp1->next = head;
		head = temp1;
		return;
	}
	node* temp2 = head;

	for(int i=0; i<n-2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

}
void insertAtEnd(int x){
	node* ptr = head;
	node* temp = new node;
	temp->data = x;
	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	temp->next = NULL;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
    insertAtBegining(6);
   	insertAtBegining(10);
   	insertAtBegining(11);
   	insertAtNth(1,14);
   	insertAtEnd(81);
   	print();

	return 0;
}