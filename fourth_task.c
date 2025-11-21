/* Task description:
Write a recursive function to print the elements of an array a) forwards b) backwards. Both functions should receive the array and its size on the parameter list. 
Create in main an array of five, and another one of ten integers (initialized). Call both functions for both arrays.

*/


#include <stdio.h>

void print_forward(int* arr, int s){
  if(s == 0){
    return ;
  }
    printf("%d", arr[0]);
    print_forward(arr + 1, s-1);
  
}

void print_backward(int* arr, int s){
  if(s == 0){
    return ;
  }
  print_backward(arr + 1, s-1);
    printf("%d", arr[0]);
    
  
}

int main(){
  int arr[] = {1,2,3,4,5};
  int arr2[] = {1,2,3,4,5,6,7,8,9,10};

  print_forward(arr, 5);
  printf("\n");
  print_backward(arr, 5);




  return 0;
}
