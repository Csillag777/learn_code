#include <iostream>
using namespace std;
int main(){
	int x,y;
	//cout<<"*";
	while(cin>>x){
	if (x==0) break;
	y=x%11;
	if(y==0)cout<<x<<" is a multiple of 11."<<endl;
	else cout<<x<<" is not a multiple of 11."<<endl;
	}
	return 0;
}
