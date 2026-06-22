#include <stdio.h>
#include <stdlib.h>

int main (){
    int arr[10]={4,8,9,6,3,56,89,75,23,77};
    int n = sizeof(arr);
    int pos ;
    int item ;
    printf("The elements in the array are :\n");
    for (int i=0;i<n-1;i++){
        printf("%d ",arr[i]  );
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert :");
    scanf("%d",&item);
    if (pos>n+1)
    {
        printf("Invalid position");
    }
    for (int i=0;i<n;i++){
        while(i>=pos){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[pos]=item;
        n=n+1;
    }
    printf("The elements in the array after insertion are :\n");  
      for (int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}