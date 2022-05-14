#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long  
using namespace std;
int32_t main(){
	char ch;
	bool isLowerVowel,isUpperVowel;
	cin>>ch;
	isLowerVowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	isUpperVowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(!isalpha(ch)) cout<<"Not an Alphabet"<<endl;
	else if(isUpperVowel||isLowerVowel) cout<<"Vowel"<<endl;
	else cout<<"Consonant"<<endl;
	return 0;
}