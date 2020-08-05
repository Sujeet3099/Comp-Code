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

node* head; //this is empty list at the start so it dosen't point anywhere now

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    /**
     * node formation
     */
    node* temp = new node();
    temp->data = 2;
    temp->next = NULL;

    head = temp; // assigning the value of temp to head so that we can use temp later or
    // we can name it as head because basically it will be pointing to head node of the linked list

    cout<<temp->data<<endl; // printing the data of 1st node
	
   	node* temp1 = new node();
    temp1->data = 5;
    temp1->next = NULL;

    temp->next = temp1;

    cout<<temp1->data<<endl;
	
	node* temp2 = head;// we dont want to change the contents of a just for traversing the linked list
    //so we assign it to a variable that we wont need
	while(temp2 != NULL){
		cout<<temp2->data<<"<<<===>>>";
		temp2 = temp2->next;
	}

	return 0;
}