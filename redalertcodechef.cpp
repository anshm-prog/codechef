#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	int n,d,h;
	cin>>n>>d>>h;
	int arr[n];
	int sum =0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	string res="No";
	for (int i = 0; i <n; ++i)
	{
		if(arr[i]>0)
			sum+=arr[i];
		else 
		{
			if(sum<d)
				sum=0;
			else
				sum-=d;
		}
		if(sum>h){
			res="Yes";
			break;
		}
	}
	
    cout<<res<<endl;
}
int main(){
	int t; cin>>t;
	while (t--){
		solve();
	}
	return 0;
}