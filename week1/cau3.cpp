#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10] = {1,4,5,3,7,2,4,8,4,9};
	int tich = 1;
	int kq[10];
	for(int i=1;i<=10;i++)
	{
		tich*=arr[i];
	}
	for(int i=1;i<=10;i++){
		res[i]=tich/i;
		cout<<kq[i]<<",";
	}
}
//967680,483840,322560,241920,193536,161280,138240,120960,107520,96768
