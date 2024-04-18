//ALGORITHM FOR QUICK SORT

//quicksort(A,lb,ub)
//{
//  if(lb<ub)
//	{
//	loc=partition(A,lb,ub);
//	quicksort(A,lb,loc-1);
//	quicksort(A,loc+1,ub);
//	}
//}
//
//partition(A,lb,ub)
//{
//pivot=a[lb];
//start=lb;
//end=ub;
//while(start<end)
//{
//	while(a[start]<=pivot)
//	{
//	start++;
//	}
//
//	while(a[end]>pivot)
//	{
//	end--;
//	}
//
//	if(start<end)
//	{
//	swap(a[start],a[end])
//	}
//}
//swap(a[lb],a[end]);
//return end;
//}
////program
//
//#include <stdio.h>
//
//void swap(int *a, int *b) {
//int temp = *a; // function to swap the elements using the temp variable..
//*a = *b;
//*b = temp;
//}
//
//int partition(int A[], int lb, int ub) {
//int pivot = A[lb];
//int start = lb;
//int end = ub;
//
//while (start < end) {
//while (A[start] <= pivot) {
//start++;
//}
//while (A[end] > pivot) {
//end--;
//}
//if (start < end) {
//swap(&A[start], &A[end]);
//}
//}
//swap(&A[lb], &A[end]);
//return end;
//}
//
//void quicksort(int A[], int lb, int ub) {
//if (lb < ub) {
//int loc = partition(A, lb, ub);
//quicksort(A, lb, loc - 1);
//quicksort(A, loc + 1, ub);
//}
//}
//int main() {
//int arr[10], size;
//printf("How many elements you want to sort: ");
//scanf("%d", &size); // I limited the size upto 10 elements......
//printf("\nEnter the elements: ");
//for (int i = 0; i < size; i++) {
//scanf("%d", &arr[i]);
//}
//quicksort(arr, 0, size - 1);
//printf("\nsorted array: ");
//for (int i = 0; i < size; i++) {
//printf("%d ", arr[i]);
//}
//
//return 0;
//}













// You are using GCC
#include<iostream>

// using namespace std;
// #define size 10
// int a[size];
// int front=0;
// int end=size-1;
// int partition(int a[],int lb,int ub){
//     int pivot=a[lb];
//     int start=lb;
//     int end=ub;
//     while(start<end){
    
//         while(a[start]<=pivot){
//             start++;
//         }
//         while(a[end]>pivot){
//             end--;
//         }
//         // swap(a[start],a[end]);
//         if(start<end){
//             swap(a[start],a[end]);
//         }
        
//     }
//     swap(a[lb],a[end]);
//     return end;
// }


// void quicksort(int a[],int start,int end){
    
//     if(start<end){
//         int loc=partition(a,start,end);
//         quicksort(a,start,loc-1);
//         quicksort(a,loc+1,end);
//     }

// }

// int main(){
//     int a[size]={5,7,3,9,8,0,7,-5,-3,1};
//     int start=0;
//     int end=size-1;
//     quicksort(a,start,end);
    
    
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
// }


#include<iostream>
#include<algorithm>

using namespace std;
#define size 10


int partition(float a[],int lb,int ub){
    float pivot=a[lb];
    int start=lb;
    int end=ub;

    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}

void quicksort(float a[],int start,int end){
    if(start<end){
        float loc=partition(a,start,end);
        quicksort(a,start,loc-1);   
        quicksort(a,loc+1,end);

    }
}



int main(){
    float a[size]={5.5,7.2,3.09,9.00,8.234,0,7.45,-5.65,-3.1,1};
    int start=0;
    int end=size-1;

    quicksort(a,start,end);

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}
