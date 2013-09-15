#include<iostream>
#define MAX 99
using namespace std;
typedef int tabint[MAX];
int main()
{
	// deklarasi variable
	int i, n, temp,j;
	tabint ti;
	// algorithm
	cout<<"Masukkan jumlah array yang akan di sorting : ";
	cin>>n;
	//input
	for(i=0;i<n;i++)
	{
		cout<<"Array ke-["<<i+1<<"] = ";
		cin>>ti[i];
	}	
	for(i=1;i<n;i++)
	{
		temp = ti[i];
		j=i-1;
		while((temp>ti[i])and(j>-1))
		{
			ti[j+1]=ti[j];
			j--;
		}
		ti[j+1]=temp;
	}
	//tampilkan sorting
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" : "<<ti[i]<<endl;
	}
	return 0;
}
