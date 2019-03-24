#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

long long a,maxa=-1e100,mina=1e100;

int main(){
	int n;
	cin>>n;
	for(int i=n-1;i>=0;i--){
		cin>>a;
		if(a<mina) mina=a;
		if(a>maxa) maxa=a;
	}
	cout<<mina<<" "<<maxa<<endl;
	return 0;
}
