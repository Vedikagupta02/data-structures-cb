#include<iostream>
using namespace std;
int main() {
	int total;
	cin>>total;

	//first line
	for(int i=1;i<=2*total-1;i++){
		cout<<"*";
	}
	cout<<endl;

	for(int rowno=1;rowno<=total-1;rowno++){
		for(int i=1;i<=total-rowno;i++){
			cout<<"*";
		}
		for(int j=1;j<=2*rowno-1;j++){
			cout<<" ";
		}

		for(int k=1;k<=total-rowno;k++){
			cout<<"*";
		}
		cout<<endl;
	}

	for(int rowno=1;rowno<=((total/2)+1);rowno++){
		for(int l=1;l<=rowno+1;l++){
			cout<<"*";
		}
		for(int m=1;m<=((total+2)-(2*rowno));m++){
			cout<<" ";
		}
		for(int n=1;n<=rowno+1;n++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int p=1;p<=2*total-1;p++){
		cout<<"*";
	}
	cout<<endl;


	return 0;
}