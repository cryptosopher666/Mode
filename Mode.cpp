#include<iostream>
#include<conio.h>
using namespace std;
double mode(double [], int);
int main(){
	int a;
	double c;
	cout<<"How many data's do you wanna enter? : ";
	cin>>a;
	double b[a];
	for(int i=0;i<a;i++){
		cout<<"Data "<<i+1<<" = ";
		cin>>b[i];
	}
	c=mode(b,a);
	cout<<"Mode = "<<c;
	
	return 0;
}

double mode(double arr[], int n){
	int mode[n];
    for (int i = 0; i < n; i++) {
        for (int j = i+1 ; j < n; j++) {
            if (arr[i] == arr[j]) {
                mode[i]+=1;
            }
        }
    }
    for(int k=0;k<n;k++){
    	for(int l=k;l<n;l++){
    		if(mode[k]>mode[l])
    		return arr[mode[l]];
		}
	}
}


