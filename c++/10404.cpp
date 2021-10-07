#include <iostream>
using namespace std;
int main(){
	while(1){
		char x[10],y[10];
		int n,n1,num,r=0;
		cin>>x>>y;
		if (x[0]=='0' and y[0]=='0')break;
			for(int i=0;i<10;i++){
				n=x[i]-48;
				n1=y[i]-48;
				if((n+n1+r)>9){
					num++;
					r++;	
				}
				else{
					r=0;
				}
			}
		if(num==0)cout<<"No carry operation."<<endl;
		else if(num>1)cout<<num<<" carry operations."<<endl;
		else cout<<num<<" carry operation."<<endl;
		num=0;
	}return 0;
}
