#include<iostream>
using namespace std;
int main(){
	float s1=52.0f;
	float s2=42.0f;
	float s3=86.0f;
	float s4=76.0f;
	float s5=90.0f;
	float total=s1+s2+s3+s4+s5;
	float percentage=total/500*100;
	cout<<"Marks for Subject first : "<<s1;
	cout<<"\nMarks for Subject second  : "<<s2;
	cout<<"\nMarks for Subject third : "<<s3;
	cout<<"\nMarks for Subject fourth : "<<s4;
	cout<<"\nMarks for Subject fifth : "<<s5;
	cout<<"\nTotal Marks : "<<total;
	cout<<"\nPercentage : "<<percentage;
	string grade=(percentage>=75.0f)?"A":(percentage>=60.0f)?"B":(percentage>=45.0f)?"C":"Fail";
	cout<<"\nGrade based on marks : "<<grade;
}
//output:
//Marks for Subject first : 52
//Marks for Subject second  : 42
//Marks for Subject third : 86
//Marks for Subject fourth : 76
//Marks for Subject fifth : 90
//Total Marks : 346
//Percentage : 69.2
//Grade based on marks : B