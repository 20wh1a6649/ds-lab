#include<stdio.h>

int binary_search(int arr[], int size, int element){
    int low = 0;
    int high = (size - 1);
    int mid = 0;
    while ( low <= high){
        mid = (low + high ) / 2;
        if (arr[mid] == element){
            return mid;

        }
        else if ( arr[mid] < element) {
            low = mid + 1;
        }
        else if(arr[mid] > element){
            high = mid - 1;
        }

    }
    return - 1;

    }


int main(){
    int size, key;
    
    printf("Enter number of elements : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in sorted order : ");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);

    }
    printf("Element to be searched : ");
    scanf("%d", &key);
    int pos = binary_search(arr, size, key);
    if (pos == -1){
        printf("Element is not found\n");
        }

    else{
        printf("Element is found at %d\n", pos + 1 );

    }

    }
/*
  1.
    INPUT:
    Enter number of elements : 3
    Enter elements in sorted order : 1 45 67
    Element to be searched : 67
    
    OUTPUT:
    Element is found at 3
    
  2.
  
    INPUT:
    Enter number of elements : 5
    Enter elements in sorted order : 23 45 67 89 99
    Element to be searched : 12
    
    OUTPUT:
    Element is not found

*/    
