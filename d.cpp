#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {10,23,4,5,70};
	int low ,high ;
	high = arr[0];
	for(int i=1;i<5;i++)
	{
		if(high<arr[i])
		{
			high = arr[i];
		}
	}
	cout<<"The Largest number of the array is "<<high<<endl;
	low = arr[0];
	for(int i=1;i<5;i++)
	{
		if(low>arr[i])
		{
			low = arr[i];
		}
	}
	cout<<"The Lowest Number of the array is "<<low<<endl;
}
