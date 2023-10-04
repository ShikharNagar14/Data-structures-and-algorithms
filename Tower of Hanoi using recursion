#include<iostream>
using namespace std;
void towerofhanoi(int n,char S,char T,char D){
	if(n==1){
		cout<<S<<"to"<<D<<endl;
		return ;
	}
	
	towerofhanoi(n-1,S,D,T);
	cout<<S<<"to"<<D<<endl; 
	towerofhanoi(n-1,T,S,D);

}
int main(){
	int n=3;
	towerofhanoi(n,'S','T','D');

}
