#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long 
using namespace std;
int32_t main(){
	ll a,b;
	cin>>a>>b;
	cout<<"Before Swapping : "<<a<<" "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping : "<<a<<" "<<b<<endl;
	return 0;
}