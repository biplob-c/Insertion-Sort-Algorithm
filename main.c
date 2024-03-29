#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n){
    int key=0;
    for(int i=1; i<n; i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={12, 11, 13, 5, 6, 9, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Input Array: ");
    display(arr, n);

    insertionSort(arr, n);
    printf("Sorted array: ");
    display(arr, n);


    return 0;
}
