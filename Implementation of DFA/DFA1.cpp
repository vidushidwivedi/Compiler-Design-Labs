//Ending with "01"
#include<bits/stdc++.h>
using namespace std;

int main(){
	int state=0;
	string input;
	cout<<"Enter the string:";
	cin>>input;
	for(char c : input){
		if(state==0 && c=='1'){
			state = 0;
		}
		else if (state==0 && c=='0'){
			state = 1;
		}
		else if (state==1 && c=='1'){
			state = 2;
		}
		else if (state==1 && c=='0'){
			state = 1;
		}
		else if (state==2 && c=='0'){
			state = 1;
		}
		else if (state==2 && c=='1'){
			state = 0;
		}
		else{
			state= -1;
			break;
		}
	
	}
	if(state==2){
		cout<<"Input string accepted"<<endl;
	}
	else{
		cout<<"Input string rejected"<<endl;
	}
	return 0;
	
}