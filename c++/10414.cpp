#include <iostream>
#include <vector>
#include <string>
using namespace std;
void alg(long long x){
	vector<int> v,v1;
	long long y;
	const char *s[4]={" kuti "," lakh "," hajar "," shata "};
	v.push_back(10000000);
	v.push_back(100000);
	v.push_back(1000);
	v.push_back(100);
	for(int i=0;i<5;i++){
		//cout<<x/v[i]<<s[i]<<endl;
		if(i==4){
			cout<<x;
			return;	
		}
		if(x/v[i]==0)continue;
		//cout<<x/v[i];
		if (i==0 and x/v[0]>100){
			//cout<<"*"<<x/v[0]<<"*";
			alg(x/v[0]);
			y =(x/v[0])%100;
		}
		else y= x/v[i];
		cout<<y<<s[i];
		x = x%v[i];
		
		
	}
	
	
}

int main(){
	long long x;
	int e;
	//const char *s[4]={" kuti "," lakh "," hajar "," shata "};
	while(cin>>x){
		cout<<e+1<<". ";
		alg(x);
		cout<<endl;
		e++;
	}	
	return 0;
}
