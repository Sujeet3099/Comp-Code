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
	node *next;
};

void insert(int n, node **head){
	node *temp = new node;
	temp->data = n;
	temp->next = NULL;
	if(*head == NULL){
		*head = temp;
		return;
	}
	else{
		node *t = *head;
		while(t->next!=NULL)	t = t->next;
		t->next = temp;
		return;
	}
}
void print(node *head){
	node *t = head;
	while(t->next!=NULL){
		cout<<t->data<<"-> ";
		t = t->next;
	}
	cout<<t->data<<endl;
	return;
}
void MoveNode(node** destRef, node** sourceRef)  
{  
    /* the front source node */
    node* newNode = *sourceRef;  
    assert(newNode != NULL);  
  
    /* Advance the source pointer */
    *sourceRef = newNode->next;  
  
    /* Link the old dest off the new node */
    newNode->next = *destRef;  
  
    /* Move dest to point to the new node */
    *destRef = newNode;  
}  

node* mergeSort(node **head1,node **head2){
	// node *merge = NULL;
	// node **track = &merge;
	node *a = *head1,*b = *head2;
	node dummy;  
  
    /* tail points to the last result node */
    node* tail = &dummy;  

    dummy.next = NULL;  
    while (1)  
    {  
        if (a == NULL)  
        {
            tail->next = b;  
            break;  
        }  
        else if (b == NULL)  
        {  
            tail->next = a;  
            break;  
        }  
        if (a->data <= b->data)  
            MoveNode(&(tail->next), &a);  
        else
            MoveNode(&(tail->next), &b);  
  
        tail = tail->next;  
    }  
    return(dummy.next); 
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    clock_t start=clock();
    
	node *head1 = NULL,*head2 = NULL;

	// insert(1,&head1);
	// insert(2,&head1);
	// insert(3,&head1);
	// insert(4,&head1);
	// insert(5,&head1);
	// insert(6,&head1);
	// insert(1,&head2);
	// insert(2,&head2);
	// insert(3,&head2);
	// insert(4,&head2);
	
	int n,m;cin>>n;
	rep(i,0,n){
		int t;cin>>t;
		insert(t,&head1);
	}
	cin>>m;
	rep(i,0,m){
		int t;cin>>t;
		insert(t,&head2);
	}

	print(head1);
	print(head2);

	node *merged = mergeSort(&head1,&head2);
	print(merged);
	
	clock_t end=clock();
	cerr<<fixed<<setprecision(10)<<((double)(end-start))/CLOCKS_PER_SEC<<endl;
	
	return 0;
}

/**
 * Test Cases:-
 */
