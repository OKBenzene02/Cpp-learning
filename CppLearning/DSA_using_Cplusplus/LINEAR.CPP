#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
void linear(int n,int m){
	int arr[1000],count=0;
	//clrscr();
	for(int i=0; i<n; i++){
		arr[i]=rand();
	}
	for(int i=0; i<n; i++){
		if(arr[i]==m){
			cout<<"The element is at index\t"<<i<<"\n";
			count =1;
		}
	}
	if(count==0){
		cout<<"\nThe element is not found.\n";
	}
	cout<<"\nThe elements in array are :";
	for(int i=0; i<n; i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
}

int main(){
	int a,b;
	//clrscr();
	cout<<"Enter the size of array:";
	cin>>a;
	cout<<"\nEnter element to search:";
	cin>>b;
	clock_t t;
	t = clock();
	linear(a,b);
	t = clock()-t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	cout<<"\nThe time taken for the program :"<<time_taken<<"s";
	//getch();
	return 0;
}
