#include<iostream>
using namespace std;
int main(){
	int plan,give,month,get=0,totle=0,f=1;
	for(int i=1;i<=12;i++){
		cin>>plan;
		get=get+300-plan;
		if(get<0&&f==1){
			month=i;	
			f=0;
		}
		give=get/100*100;
		get=get-give;
		totle+=give;
	}
	if(f==1) cout<<get+totle*1.2<<endl;
	else cout<<-1*month<<endl;
	return 0;
}
