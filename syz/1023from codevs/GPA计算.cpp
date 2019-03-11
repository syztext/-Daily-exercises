#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double a,b,sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++){	
		cin>>a>>b;
		sum1+=a*b;sum2+=a;
	}
	printf("%1.2f",sum1/sum2);
	return 0;
}
