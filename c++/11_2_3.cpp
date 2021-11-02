#include <iostream>
#include <cstring>
using namespace std;

void addnode(int x[],int y[],int i,int j,int &cnt,int n,int m, char map[105][105],bool done[105][105]){
	done[i][j]=true;
	x[cnt]=i;
	y[cnt]=j;	
	cnt++;
}

bool check(int i,int j,int n,int m,char map[105][105],bool done[105][105],char c){
	if(i>-1&&j>-1&&i<n&&j<m&&map[i][j]==c&&done[i][j]==false)
		return true;
	return false;
}



void bfs(int i,int j,int n,int m,char map[105][105],bool done[105][105],char c){
	int head=0,tail=1;
	int que_x[10001]={i},que_y[10001]={j};
	while(head<tail){
		int tx = que_x[head],ty=que_y[head];
		map[tx][ty]='*';
		if(check(tx,ty+1,n,m,map,done,c)) addnode(que_x,que_y,tx,ty+1,tail,n,m,map,done);
		if(check(tx+1,ty,n,m,map,done,c)) addnode(que_x,que_y,tx+1,ty,tail,n,m,map,done);
		if(check(tx,ty-1,n,m,map,done,c)) addnode(que_x,que_y,tx,ty-1,tail,n,m,map,done);
		if(check(tx-1,ty,n,m,map,done,c)) addnode(que_x,que_y,tx-1,ty,tail,n,m,map,done);
		
		if(check(tx+1,ty+1,n,m,map,done,c)) addnode(que_x,que_y,tx+1,ty+1,tail,n,m,map,done);
		if(check(tx+1,ty-1,n,m,map,done,c)) addnode(que_x,que_y,tx+1,ty-1,tail,n,m,map,done);
		if(check(tx-1,ty-1,n,m,map,done,c)) addnode(que_x,que_y,tx-1,ty-1,tail,n,m,map,done);
		if(check(tx-1,ty+1,n,m,map,done,c)) addnode(que_x,que_y,tx-1,ty+1,tail,n,m,map,done);
		
		head++;
	}
	//cout<<tail<<endl;
	
}

int main(){
	int n,m;
	char map[105][105];
	bool done[105][105];
	while(cin>>n>>m){
		if (m==0)break;
		memset(map,0,sizeof(map));
		memset(done,0,sizeof(done));
		int i,j;
		for(int i=0;i<=n;i++)
			map[i][m]='*';
		for(int i=0;i<=m;i++)
			map[n][i]='*';
			
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>map[i][j];
				
		int c1=0,c2=0,c3=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]=='A'){
					
					bfs(i,j,n,m,map,done,'A');
					c1++;	
				}
				if(map[i][j]=='B'){
					
					bfs(i,j,n,m,map,done,'B');
					c2++;	
				}
				if(map[i][j]=='C'){
					
					bfs(i,j,n,m,map,done,'C');
					c3++;	
				}
			}
		}
		cout<<"A: "<<c1<<endl;
		cout<<"B: "<<c2<<endl;
		cout<<"C: "<<c3<<endl;
	}
	
	return 0;
}
