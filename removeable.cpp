#include<iostream>
using namespace std;
string removeduplicates(string s)
{
	int n=s.length();
	string ans= "";
	ans=ans+s[0];
	char first=s[0];
	for(int i=1;i<n;i++)
	{
		char ch=s[i];
		if(ch !=first)
		{
			ans=ans+s[i];
			first=s[i];
		}
	}
	return ans;
}

int main()
{
	string s1;
	cout<<"ENter String:";
	cin>>s1;
	cout<<"Entered string is: "<<s1<<endl;
	cout<<"After removing consecutive duplicates,string:" <<removeduplicates(s1)<<endl;
	
}
