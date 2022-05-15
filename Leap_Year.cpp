#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	ll y;
	cin>>y;
	if(y%4==0){
		if(y%100==0){
			if(y%400==0) cout<<"Leap Year"<<endl;
			else cout<<"Not a Leap Year"<<endl;
		}
		else cout<<"Leap Year"<<endl;
	}
	else cout<<"Not a Leap Year"<<endl;
}