#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int num,nu,da;
	cin>>num;
	for(int mm=0;mm<num;mm++){
		bool c=1;
	cin>>nu>>da;
	int arr[10086];
	for(int i=0;i<nu;i++){
		
		cin>>arr[i];
	}
	
	for(int i =1;i<nu;i++){
	
		if(arr[i]-arr[i-1]>1||arr[i]-arr[i-1]<-da) {
		cout<<"lose"<<endl;
		 c=0;
		 break;
		}
	} 
	if(c) {
		cout<<"win"<<endl;
		}
}
    return 0;
}

