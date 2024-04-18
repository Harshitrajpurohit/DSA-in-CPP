#include<iostream>
using namespace std;

// class Selection{
// 	public:
// 		int i,j,min;
// 		int Sort(int arr[],int n){
// 			for(i=0;i<n-1;i++){
// 				min=i;
// 				for(j=i+1;j<n;j++){
// 					if(arr[j]<arr[min]){
// 						min=j;
// 					}
// 				}
// 				if(min!=i){
// 					swap(arr[i],arr[min]);
// 				}
// 			}
// 		}
// };

void selectionsort(int arr[],int n){

	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(arr[i],arr[min]);
		}
	}

	cout<<"\nElements in sorted array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter Nummber of elements in first arr : ";
	cin>>n;
	int arr[n];
		cout<<"Enter Elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	// int m;
	// cout<<"Enter Nummber of elements in second arr : ";
	// cin>>m;
	// int arr1[m];
	// cout<<"Enter Elements : ";
	// for(int i=0;i<;i++){
	// 	cin>>arr1[i];
	// }	
	// Selection obj1;
	// obj1.Sort(arr,n);5
	selectionsort(arr,n);
	// cout<<endl;
	// selectionsort(arr1,m);



}
