#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* root = NULL, *temp, *cur;

struct node* create() {
	cur = (struct node*)malloc(sizeof(struct node));
	scanf("%d", &(cur -> data));
	cur -> left = NULL;
	cur -> right = NULL;
	if (root == NULL)
		root = cur;
	else{
		temp = root;
		while(temp != NULL){
			if(cur -> data < temp -> data && temp -> left == NULL){
				temp -> left = cur;
				return root;
			}
			else if(cur -> data < temp -> data && temp -> left != NULL){
				temp = temp -> left;
			}
			else if(cur -> data > temp -> data && temp -> right == NULL) {
				temp -> right = cur;
				return root;
			}
			else if (cur -> data > temp -> data && temp -> right != NULL) {
				temp = temp -> right;
			}
		}
	}

}

void inOrder(struct node* root) {
	if (root != NULL) {
		inOrder(root -> left);
		printf("%d ", root -> data);
		inOrder(root -> right);	
	}
}

void preOrder(struct node* root) {
	if (root != NULL) {
		printf("%d ", root -> data);
		preOrder(root -> left);
		preOrder(root -> right);
	}
}

void postOrder(struct node* root) {
	if (root != NULL) {
		postOrder(root -> left);
		postOrder(root -> right);
		printf("%d ", root -> data);
	}
}


int main() {
	int ch;
	while(1) {
	printf("\n1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit\n");
	printf("Enter your choice : "); 
	scanf("%d", &ch);
	switch(ch){
		case 1:
			root = create();
			break;
		case 2:
			inOrder(root);
			break;
		case 3:
			preOrder(root);
			break;
		case 4:
			postOrder(root);
			break;
		case 5:
			exit(0);
}
}
}

/*
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
58
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
75
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
13
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
28
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
34
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
70
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
20
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
98
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
16
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
5
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
92
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 1
60
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 2
5 13 16 20 28 34 58 60 70 75 92 98 
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 3
58 13 5 28 20 16 34 75 70 60 98 92
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 4
5 16 20 34 28 13 60 70 92 98 75 58 
1 - create  2 - inorder  3 - preorder  4 - postorder 5 - exit
Enter your choice : 5


*/
