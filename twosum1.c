#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* arr, int arrSize, int target, int* returnSize) {
    
    int * result = (int*)malloc(2 * sizeof(int));

    for(int i = 0; i < arrSize; i++) {
        for(int j = i + 1; j < arrSize; j++) {

            if(arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;

                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
    free(result);
}
void main(){
    int arr[5];
    int i ;
    int target;
    int returnSize;
    printf("Enter 5 elements : ");
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
  printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter target : ");
    scanf("%d",&target);
    int* answer = twoSum(arr,5,target,&returnSize);
    if (returnSize == 0){
        printf("No two numbers add up to the target.\n");
    } else {
        printf("Indices of the two numbers that add up to the target: %d, %d\n", answer[0], answer[1]);
    }
    free(answer);
}