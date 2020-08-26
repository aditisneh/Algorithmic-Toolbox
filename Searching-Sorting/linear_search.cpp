#include<iostream>
using namespace std;

int LinearSearch(int arr[],int low, int high ,int num ){
	if(high<low)
	cout<<"Not Found";
	if(arr[low]==num)
	 return low;
return LinearSearch(arr,low+1,high,num);


}
int main(){
	int n,num;
	cin>>n;
	int arr[n];
    cout<<"The Array must be sorted";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
}
int low=arr[0];
int high=arr[n-1];
    cout<<"Enter the element to be searched";
    cin>>num;
    cout<<"Element found at-"<<LinearSearch(arr,low, high, num);
	return 0;
}
