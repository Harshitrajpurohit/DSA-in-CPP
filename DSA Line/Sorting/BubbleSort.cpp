#include<iostream>
using namespace std;

class bubble{
	public:
		int flag,temp;
		int bubble_sort(int arr[],int n){
			for(int i=0;i<n-1;i++){
//				flag=0;
				for(int j=0;j<n-1-i;j++){
					if(arr[j]>arr[j+1]){
//						temp=arr[j];
//						arr[j]=arr[j+1];
//						arr[j+1]=temp;

						swap(arr[j],arr[j+1]);
//						flag=1;
					}
				}
//				if(flag==0){
//					break;
//				}
			}
		}
};

int main(){
	int n;
	cout<<"Enter The Number of Element in Array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubble a;
	a.bubble_sort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
