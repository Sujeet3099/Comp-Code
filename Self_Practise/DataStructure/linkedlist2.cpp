#include"bits/stdc++.h"
using namespace std;

/**
 * Copyright (c)
 * author        :   Sujeet Kumar 
 * question name :   
 * link          :   
 */


#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define repA(i,v) for(auto i:v)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define vi vector<int>
#define vll vector<ll>
#define vi2(n,m) vector<vector<int> > v(n,vector<int>(m));

struct node{
	int data;
	node* next;
};
node* head = NULL;

void insertAtbegin(int n);

void insertAtLast(int n){
	node* temp = head;
	node* temp1 = new node;
	temp1->data = n;
	temp1->next = NULL;
	if(head == NULL){
		head = temp1;
		return;
	}
	while(temp->next!=NULL)	temp = temp->next;
	temp->next = temp1;
}

void insertAtN(int n,int pos){
	if(pos == 0){
		insertAtbegin(n);
		return;
	}
	node* temp = head;
	node* new_node = new node;
	new_node->data = n;
	new_node->next = NULL;
	for(int i = 0;i<pos-1 && temp->next!=NULL;temp = temp->next,++i);
	new_node->next = temp->next;
	temp->next = new_node;
}

void insertAtbegin(int n){
	node* temp = new node;
	temp->data = n;
	temp->next = head;
	head = temp;
}

void deleteAtLast(){
	node* temp = head;
	while(temp->next->next!=NULL)	temp=temp->next;
	// delete(temp->next);
	temp->next = NULL;
}

void print(){
	node* temp = head;
	while(temp->next!= NULL){
		cout<<temp->data<<"-> ";
		temp = temp->next;
	}
	cout<<temp->data;
}

void reverse(){
	node *temp = head,*prev = NULL,*nexxt = NULL;
	while(temp!=NULL){
		nexxt = temp->next;
		temp->next = prev;
		prev = temp;
		temp = nexxt;
	}
	head = prev;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
   
	insertAtLast(1);
	insertAtLast(2);
	insertAtLast(3);
	insertAtLast(1);
	insertAtbegin(10);
	insertAtLast(18);
	insertAtN(9,2);
	// deleteAtLast();
	print();
	reverse();
	cout<<endl;
	print();
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
