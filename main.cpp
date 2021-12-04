#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
double ln(double num);
double exponent(double num);
int factorial(int num);
int sign(int num);
void cExp(double num);
struct longInt{
	int int1;
	int int2;

};
int main(){
	cout<<ln(exponent(1.0))<<endl;
	cout<<ln(exponent(1.0)*exponent(1.0))<<endl;
	//cout<<exponent(1.0)<<endl;
	cExp(3.14159);
	system("pause");
	return 0;
}
double ln(double num){
	double x=2.71;
	double y=exponent(2.71);
	while(abs(y)>0.00001){ //what
		x = x + -y/exponent(x);
		y = exponent(x) - num;
	}
	return x;
}
double exponent(double num){
	double sum=1;
	for(int i=1;i<20;i++){
		sum+=pow(num,i)/factorial(i);
	}
	return sum;
}
void cExp(double num){
	double realSum=1;
	double imgSum=0;
	for(int i=1;i<17;i++){
		if(i%2==0){
			if(i%4==0){
				realSum+=pow(num,i)/factorial(i);
				//cout<<pow(num,i)/factorial(i)<<endl;
			}
			else{
				//cout<<'1'<<endl;
				realSum+=-pow(num,i)/factorial(i);
				//cout<<-pow(num,i)/factorial(i)<<endl;
			}
		}
		else{
			if((i+1)%4==0){
				imgSum+=pow(num,i)/factorial(i);
			}
			else{
				imgSum+=-pow(num,i)/factorial(i);
			}
		}
	}
	cout<<realSum<<"+i*"<<imgSum<<endl;
	//cout<<pow(3.14159,18) <<' ' <<factorial(18) <<endl;
}
int factorial(int num){
	int prod=num;
	for(int i=num-1;i>=2;i--){
		prod*=i;
	}
	return prod;
}
int sign(int num){
	int sign=1;//pos
	if(num%2!=0){
		sign=-1;//neg
	}
	return sign;
}
