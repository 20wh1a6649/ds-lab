#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[], int n){
	int i, j, temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp  = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void selection_sort(int a[],int n){
	int i, j, min, temp;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
void insertion_sort(int a[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
void display(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n,i,ch;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
        printf("\n1 - Bubble Sort 2 - Selection Sort 3 - Insertion Sort\nEnter your choice: ");
	scanf("%d",&ch);

	printf("\nElements in sorted order: ");
	switch(ch){
		case 1: bubble_sort(a,n);
			display(a,n);
			break;
		case 2: selection_sort(a,n);
                        display(a,n);
                        break;
		case 3: insertion_sort(a,n);
                        display(a,n);
                        break;
	}
	printf("\n");
}




/*Enter no. of elements: 5
Enter elements: 23 78 12 90 44
1 - Bubble Sort 2 - Selection Sort 3 - Insertion Sort
Enter your choice: 1
Elements in given order: 
Elements in sorted order: 12 23 44 78 90  

Enter no. of elements: 5
Enter elements: 23 45 89 12 11
1 - Bubble Sort 2 - Selection Sort 3 - Insertion Sort
Enter your choice: 2
Elements in sorted order: 11 12 23 45 89 

Enter no. of elements: 4
Enter elements: 23 99 25 10
1 - Bubble Sort 2 - Selection Sort 3 - Insertion Sort
Enter your choice: 3
Elements in sorted order: 10 23 25 99


*/
