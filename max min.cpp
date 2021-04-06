#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}cout<<endl;
	int currmin=arr[0];
	int currmax=arr[0];
	for(int i=0;i<n;i++)
	{
		//max element
		if(arr[i]>currmax)
		{
			currmax=arr[i];
		}
		//min element
		if(arr[i]<currmin)
		{
			currmin=arr[i];
		}
	}
	cout<<"maxvel - "<<currmax<<endl;
	cout<<"minvel - "<<currmin<<endl;
}
