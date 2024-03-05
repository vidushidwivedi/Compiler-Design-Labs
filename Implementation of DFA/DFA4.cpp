#include<bits/stdc++.h>
using namespace std;

int main(){
	int state=0;
	string input;
	cout<<"Enter the string:";
	cin>>input;
	for(char c : input){
		if(input.size()%2==0){
			if(state==0 && c=='1'){
			state = 1;
			}
			else if (state==0 && c=='0'){
				state = 3;
			}
			else if (state==1 && c=='1'){
				state = 0;
			}
			else if (state==1 && c=='0'){
				state = 2;
			}
			else if (state==2 && c=='0'){
				state = 1;
			}
			else if (state==2 && c=='1'){
				state = 3;
			}
			else if (state==3 && c=='1'){
				state = 2;
			}
			else if (state==3 && c=='0'){
				state = 0;
			}
			else{
				state= -1;
			break;
		}
		}
		else{
			state= -1;
			break;
		}
	
	}
	if(state==0){
		cout<<"Input string accepted"<<endl;
	}
	else{
		cout<<"Input string rejected"<<endl;
	}
	return 0;
	
}