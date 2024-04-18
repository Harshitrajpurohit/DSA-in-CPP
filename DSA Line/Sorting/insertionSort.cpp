#include<iostream>
using namespace std;

class insertion{
	public:
		int temp,j,i;
		int insertion_code(int arr[],int n){
			for(i=1;i<n;i++){
				temp=arr[i];
				j=i-1;
				while(j>=0 && arr[j]>temp){
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=temp;
			}
		}
};

main(){
	int n;
	cout<<"Enter The Number of Element in Array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion obj1;
	obj1.insertion_code(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
