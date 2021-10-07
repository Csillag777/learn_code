#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
int main(){
	int x,n,x1,y,d=0,sum=0;
	vector <int> v;
	cin>>x;
	for(int r=0;r<x;r++){
		cin>>n;
		//cout<<n;
		for(int i=0;i<n;i++){
			cin>>x1;
			sum=sum+x1;
			v.insert(v.end(),x1);
		}
		if(v.size()%2==0){
			y=v[v.size()/2];
			//cout<<"*"<<y;
			for(int i1=0;i1<v.size();i1++){
				d = d+ pow(pow((v[i1]-y),2),1/2);
			}
			
		}
		if(v.size()%2==1){
			y=2*(sum)/(2*n);
			//cout<<y<<endl;
			//cout<<v.size()<<endl;
			for(int i1=0;i1<v.size();i1++){
				d = d+ sqrt(pow((v[i1]-y),2));
				//cout<<"*"<<d;
			}
			
			
		}
		//
		cout<<d<<endl;
		d=0;
		sum=0;
		v.clear();
	}
	
	return 0;
}
