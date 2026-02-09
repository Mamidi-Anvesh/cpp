#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
	int n1=mid-left;
	int n2=right-(mid+1);
	int leftArr[n1],rightArr[n2];
	for(int i=0;i<n1;i++){
		leftArr[i]=arr[left+i];
	}
	for(int j=0;j<n2;j++){
		rightArr[j]=arr[mid+1+j];
	}
	
	int i=0,j=0,k=1;
	
	while(i<n1&&j<n2){
		if(leftArr[i]<rightArr[j]){
			arr[k]=leftArr[i];
			i++;
		}
		else{
			arr[k]=rightArr[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=leftArr[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=rightArr[j];
		j++;
		k++;
	}
}
mergeSort(int arr[],int left,int right){
	while(left<right){
		int mid=(left+(right-left))/2;
		
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);
		
		merge(arr,left,mid,right);
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int man(){
	int n=5;
	int arr[]={4,1,5,2,3};
	int left=0,right=n-1;
	
	mergeSort(arr,left,right);
	printArray(arr,n);
	return 0;
}
