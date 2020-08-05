#include"bits/stdc++.h"
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

struct bstnode{
	int data;
	node* left;
	node* right;
};

node* rootNode = NULL;

int insert(int data){
	node* newNode = new bstnode;
	if(rootNode == NULL){
		newNode->data = data;
		newNode->left = newNode->right = NULL;
	}
	else{
		if(data <= rootNode->data)
			
	}
	return rootNode;

}



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	
	return 0;
}