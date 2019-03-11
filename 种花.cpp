#include<iostream>
using namespace std;
int main(){
	string a;int ans=0,n=0,q[20001];
	getline(cin,a);
	int flag=0,num1=0,num2=0;
	while(a[num1]!=']'){
		if(flag){
			if(a[num1]!=',')
				q[num2++]=a[num1]-'0'; 
		}
		if(a[num1]=='[') flag=1;
		num1++;
	}
	num1+=2;
	while(a[num1]!='\0'){
		if(!flag){
			n=n*10;
			n=n+(a[num1]-'0');
		}
		if(a[num1]=='=') flag=0;
		num1++;
	}
	for(int i=0;i<num2-1;i++){
		if(q[i-1]==0&&q[i+1]==0&&q[i]==0){
			ans++;
			q[i]=1;
		}
	}
	if(n>ans) cout<<"false"<<endl;
	else cout<<"true"<<endl;
	return 0;
} 
