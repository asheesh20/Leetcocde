#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	ll a,b,temp;
	cin>>a>>b;
	cout<<"Before Swapping : "<<a<<" "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swapping : "<<a<<" "<<b<<endl;	
	return 0;
}