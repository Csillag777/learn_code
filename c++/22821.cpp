#include <iostream>
#include <string>
using namespace std;

int main(){
	int m,n;
	string str;
	char map[1000][1000];
	while(cin>>m>>n){
		int num=48;
		for(int i=0;i<m;i++){
			cin>>str;
			//cout<<str<<endl;
			for(int i1=0;i1<n;i1++){
				map[i][i1]=str[i1];
			}
		}
		//cout<<map[1][0]<<endl;
		int n1,x1=0;
		int l1[1000],l2[1000],ln1=0,ln2=0;
			for(int i=0;i<m;i++){
			for(int i1=0;i1<n;i1++){
				if(map[i][i1]=='@'){
					num++;
					map[i][i1]=num;
					
					if(map[i][i1+1]=='@')map[i][i1+1]=num;
					if(map[i+1][i1]=='@')map[i+1][i1]=num;
					if(map[i][i1-1]=='@')map[i][i1-1]=num;
					if(map[i-1][i1]=='@')map[i-1][i1]=num;
					
					if(map[i-1][i1+1]=='@')map[i-1][i1+1]=num;
					if(map[i+1][i1+1]=='@')map[i+1][i1+1]=num;
					if(map[i+1][i1-1]=='@')map[i+1][i1-1]=num;
					if(map[i-1][i1-1]=='@')map[i-1][i1-1]=num;
					}
				else if(map[i][i1]!='*'){
					n1 = map[i][i1];
					if(map[i][i1+1]=='@')map[i][i1+1]=n1;
					else if(map[i][i1+1]!='*' and map[i][i1]!=map[i][i1+1]and(i1+1)<n){
						l1[ln1]=map[i][i1];
						ln1++;
						l2[ln2]=map[i][i1+1];
						ln2++;
					}
					if(map[i+1][i1]=='@')map[i+1][i1]=n1;
					if(map[i][i1-1]=='@')map[i][i1-1]=n1;
					if(map[i-1][i1]=='@')map[i-1][i1]=n1;
					
					if(map[i-1][i1+1]=='@')map[i-1][i1+1]=n1;
					if(map[i+1][i1+1]=='@')map[i+1][i1+1]=n1;
					if(map[i+1][i1-1]=='@')map[i+1][i1-1]=n1;
					if(map[i-1][i1-1]=='@')map[i-1][i1-1]=n1;
				}
					//if(map[i][i1]!='*')num=map[i][i1];
					
				
				
				
				
			}
		}
		
		for(int i=0;i<m;i++){
			for(int i1=0;i1<n;i1++){
				cout<<map[i][i1];
			}
			cout<<endl;
		}
		cout<<num-48-ln1<<endl;
	}
	
	
	return 0;
}
