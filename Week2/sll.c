#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node* link;
};
struct node *head = NULL, *cur, *temp, *temp1;

struct node* create(){
		int n;
		printf("Enter no of nodes : ");
		scanf("%d", &n);
		while(n--){
			cur = (struct node*)malloc(sizeof(struct node));
			printf("Enter node data : ");
			scanf("%d", &(cur-> data));
			cur->link = NULL;
			if (head == NULL){
		   		 head = cur;
		 	} else{
				temp = head;
				while(temp -> link != NULL){
				temp =	temp -> link;
																					
				}
				temp -> link = cur;
				}}
		return head;
}

struct node* insert_begin(int ele){
		cur = (struct node*)malloc(sizeof(struct node));
		cur -> data = ele;
		cur -> link = head;
		head = cur;
		return head;

}

struct node* insert_end(int ele){
		cur = (struct node*)malloc(sizeof(struct node));
		temp = head;
		cur -> data = ele;
		cur ->link = NULL;
					
		while(temp -> link != NULL){
			temp = temp -> link;
		}
		temp -> link = cur;
		return head;
}

struct node* insert_pos(int pos, int ele){
		int c = 1;
		cur = (struct node*)malloc(sizeof(struct node));
		cur -> data = ele;
		temp = head;
		while(c < (pos - 1)){
			temp = temp -> link;
			c++;
		}
		cur -> link = temp -> link;
		temp -> link = cur;
		return head;
}

struct node* delete_begin(){
		temp = head;
			head = temp -> link;
				printf("Deleted element : %d\n", temp -> data);
					free(temp);
						return head;
}

struct node* delete_end(struct node* head){
		temp = head;
		while(temp -> link != NULL){
			temp1 = temp;
			temp = temp -> link;
		}
		temp1 -> link = NULL;
		printf("Deleted Element : %d\n", temp -> data);
		free(temp);
		return head;
}

struct node* delete_pos(int pos, struct node* head){
		temp = head;
		int c = 1;
		while(c < pos){
			temp1 = temp;
			temp = temp -> link;
			c++;
		}
		temp1 -> link = temp-> link;
		printf("Delted element : %d\n", temp -> data);
		free(temp);
		return head;
}

void display(struct node* head){
		temp = head;
		while(temp != NULL){
			printf("%d->", temp -> data);
			temp = temp -> link;
		}
		printf("NULL\n");
}
void reverse_display(struct node* head){
		if(head != NULL){
			reverse_display(head -> link);
			printf("%d->", head->data);
		}
}
int search(struct node* head, int key){
		int c =1;
		temp = head;
		while(temp != NULL){
			if(key == temp -> data){
				return c;
			}
			temp = temp -> link;
			c++;
		}
		return -1;
}

//struct node* sort(struct node* head){
void sort(struct node* head){
       struct node* temp = head;
		int x;
		while(temp != NULL){
			temp1 = head;
			while(temp1 != NULL){
				if(temp1 -> data > temp1 -> link->data){
					x = temp1 -> data;
					temp1 -> data = temp1 -> link -> data;
					temp1 -> link-> data = x;
				}
				temp1 = temp1 -> link;
				}
				temp = temp -> link;
				}
//				return head;
}

int main(){
		int ch, ele, pos, key;
			while(1){
					printf(" 1 : create \n 2 : insert_begin \n 3 : inser_end\n 4 : insert_pos \n 5 : delete_begin\n 6 : delete_end\n 7 : delete_pos\n 8 : display\n 9 : reverse display\n 10 : search\n 11 : sort\n 12 : exit\n");
				printf("Enter choice : ");
				scanf("%d", &ch);
				switch(ch){
				case 1:
					head = create();
					break;
				case 2:
					printf("Element to be inserted : ");
					scanf("%d", &ele);
					head = insert_begin(ele);
					break;
				case 3:
        			printf("Element to be inserted : ");
					scanf("%d", &ele);
					head = insert_end(ele);
					break;
				case 4:
					printf("Enter position and ele : ");
					scanf("%d %d", &pos, &ele);
					head = insert_pos(pos, ele);
					break;
				case 5:
					head = delete_begin(head);
					break;
				case 6:
			    	head = delete_end(head);
				    break;
				case 7:
					printf("Position where element is to be deleted : ");
					scanf("%d", &pos);
					head = delete_pos(pos, head);
				    break;
				case 8:
					display(head);
				    break;
				case 9:
					reverse_display(head);
					break;
				case 10:
				
					printf("Enter key : ");
					scanf("%d", &key);
					pos = search(head, key);
			    	if(pos == -1){
						printf("Elemnt ot found \n");}
						else{
							printf("Element found at %d\n", pos);
						}
				    break;
				case 11:
//					head = sort(head);
					sort(head);
					break;
				case 12:
			exit(0);
					}

			}

}
/*
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 1
Enter no of nodes : 5
Enter node data : 34
Enter node data : 1
Enter node data : 56
Enter node data : 78
Enter node data : 2
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
34->1->56->78->2->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 2
Element to be inserted : 15
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
15->34->1->56->78->2->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 3
Element to be inserted : 55
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
15->34->1->56->78->2->55->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 4
Enter position and ele : 3 999
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
15->34->999->1->56->78->2->55->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 5
Deleted element : 15
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
34->999->1->56->78->2->55->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 6
Deleted Element : 55
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
34->999->1->56->78->2->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 7
Position where element is to be deleted : 3
Delted element : 1
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 8
34->999->56->78->2->NULL
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 9
2->78->56->999->34-> 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 10
Enter key : 78
Element found at 4
 1 : create
 2 : insert_begin
 3 : inser_end
 4 : insert_pos
 5 : delete_begin
 6 : delete_end
 7 : delete_pos
 8 : display
 9 : reverse display
 10 : search
 11 : sort
 12 : exit
Enter choice : 12


*/
