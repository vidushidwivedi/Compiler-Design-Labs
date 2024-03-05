#include<bits/stdc++.h>
using namespace std;

int main(){
	int state=0;
	string input;
	cout<<"Enter the string: "<<endl;
	cin>>input;
	for(char c: input){
		if(state==0 && c=='0'){
			state=1;
		}
		else if(state==0 && c=='1'){
			state= 2;
		}
		else if(state==1 && c=='0'){
			state= 1;
		}
		else if(state==1 && c=='1'){
			state= 3;
			if(state=3 && c=='0'){
				state= 1;
			}
			else{
				state= 3;
			}
		}
		else if(state==2 && c=='1'){
			state= 2;
		}
		else if(state==2 && c=='0'){
			state= 4;
			if(state==4 && c=='1'){
				state= 2;
			}
			else{
				state=4;
			}
		}
		else{
			state= -1;
			break;
		}
		if(state==3 || state==4){
			cout<<"Input string accepted";
		}
		else{
			cout<<"Input string rejected";
		}

		return 0;
	}





}