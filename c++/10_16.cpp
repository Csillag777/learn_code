#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
int main(){
	int x,c,y;
	double m,m1,b;
	map<double,double>map1;
	vector<double>l1;
	vector<double>l2;
	cin>>c;
	for(int i=0;i<c;i++){
		cin>>x;
		cin>>y;
		l1.push_back(x);
		l2.push_back(y);
	}
	for(int i=0;i<l1.size()-1;i++){
		for(int i3=i+1;i3<l1.size();i3++){
			if((l1[i3]-l1[i])==0 and (l2[i3]-l2[i])!=0){
				m1= 0.99999+l1[i];
				map1[m1]=0.999;
				continue;
		}
		m = (l2[i3]-l2[i])/(l1[i3]-l1[i]);
		b = l2[i3]-m*l1[i3];
		m1 = 10*m+2*b;
		map1[m1]=m;
		}
	}
	cout<<map1.size()<<endl;
	
	return 0;
}
