#include<stdio.h>

int linear_search(int arr[], int size,int index, int element){
    
    if (index < size){
        if (arr[index] == element){
            return index + 1;
        }
        else {
            return linear_search(arr, size, index+ 1, element);
        }
    }
    return -1;


}

int main(){
    int size, element, pos, index= 0;
    int arr[size];
    printf("Enter number of elements : ");
    scanf("%d", &size);
    for (int i = 0;i  < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be found : ");
    scanf("%d", &element);
    pos = linear_search(arr, size, index, element);
    if (pos == -1){
        printf("Element not found\n");

    }
    else{
        printf("Element is found at %d.\n", pos);

    }
}
'''
1.
INPUT:
Enter number of elements : 5
12 56 78 37 33
Enter element to be found : 12

OUTPUT:
Element is found at 1.
    
2.
INPUT:
Enter number of elements : 6
12 25 36 48 78 89 
Enter element to be found : 99

OUTPUT:
Element not found
'''
