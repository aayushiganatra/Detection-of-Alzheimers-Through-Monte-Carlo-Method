

#include<bits/stdc++.h>

using namespace std;
/*
Stage 1 <60 and <=65 unit
Stage 2 >65 and <=70 unit
Stage 3 >70 and <=75 unit
Stage 4 >75 and <=90
*/
const  float S_Matrix[4][4]={{0.9294,0.0656,0.0045,0.0005},{0,0.5048,0.3765,0.1187},{0,0,0.5572,0.4428},{0,0,0,1}}; //Stocastic matrix of different stages(Blood Pre..)
#define vector<int> bp; //It is for enter data of CDR


void mk(float,float,float,float);
void Symp_Matrix(int *a);
int main(){
	int a[4];
	cout<<"Enter First 5 CDR Report Data Out of 100 "<<endl;
	for(int i=0;i<5;i++){
		cin >>*(a+i);
		if(*(a+i)<20)
			*(a+i)=0;
		else if(20<=*(a+i)<=40)
			*(a+i)=1;
		else if(40<=*(a+i)<60)
			*(a+i)=2;
		else 
		    *(a+i)=3;
	}	
	*(a+5)=11;
	Symp_Matrix(a); 
	return 0;
}
//Find Probability for next day stage of blood pressure
void mk(float a,float b,float c,float d){
	int age=1;
	float s[21][4]; //Current Stage
		s[0][0]=a;
		s[0][1]=b;
		s[0][2]=c;
		s[0][3]=d;
	//Count probability vector at which stage of all days-->
	while(age!=20){
		for(int i=0;i<4;i++)
			s[age][i]=s[age-1][0]*S_Matrix[i][0]+s[age-1][1]*S_Matrix[i][1]+s[age-1][2]*S_Matrix[i][2]+s[age-1][3]*S_Matrix[i][3];
		age+=1;
	}
	cout<<"PROBABILITY"<<endl;
	cout<<"IN STAGE 1"<<"          "<<"In Stage 2"<<"           "<<"In Stage 3"<< "           "<<"In Stage 4"<<endl;
	for(int i=0;i<21;i++){
		for(int j=0;j<4;j++)
			cout<<s[i][j]<<"          ";
		cout<<endl;
	}
	for(int i=1;i<21;i++){
		if(s[i][0]>s[i][1] && s[i][0]>s[i][2] && s[i][0]>s[i][3])
			cout<<"In stage 1"<<endl;
		else if(s[i][1]>s[i][0] && s[i][1]>s[i][2] && s[i][1]>s[i][3])
			cout<<"IN satge 2"<<endl;
			else if(s[i][2]>s[i][0] && s[i][2]>s[i][1] && s[i][1]>s[i][3])
			cout<<"IN satge 3"<<endl;
		else
			cout<<"In stage 4"<<endl;
	}

		
}
void Symp_Matrix(int *a){
	int i=0;
	float Pr0to0=0,Pr0to1=0,Pr0to2=0,Pr0to3=0,Pr1to0=0,Pr1to1=0,Pr1to2=0,Pr1to3=0,Pr2to0=0,Pr2to1=0,Pr2to2=0,Pr2to3=0,
	Pr3to0=0,Pr3to1=0,Pr3to2=0,Pr3to3=0;
	while(*(a+i+1)!=11){
	//	cout<<*(a+i)<<endl;
	//	cout<<"HI HI HI"<<endl;
		if(*(a+i)==0 && *(a+i+1)==0)
			Pr0to0++;
		else if(*(a+i)==0 && *(a+i+1)==1)
			Pr0to1++;
		else if(*(a+i)==0 && *(a+i+1)==2)
			Pr0to2++;
		else if(*(a+i)==0 && *(a+i+1)==3)
			Pr0to3++;
		else if(*(a+i)==1 && *(a+i+1)==0)
			Pr1to0++;
		else if(*(a+i)==1 && *(a+i+1)==1)
			Pr1to1++;
		else if(*(a+i)==1 && *(a+i+1)==2)
			Pr1to2++;
		else if(*(a+i)==1 && *(a+i+1)==3)
			Pr1to3++;
		else if(*(a+i)==2 && *(a+i+1)==0)
			Pr2to0++;
		else if(*(a+i)==2 && *(a+i+1)==1)
			Pr2to1++;
		else if(*(a+i)==2 && *(a+i+1)==2)
			Pr2to2++;
		else if(*(a+i)==2 && *(a+i+1)==3)
			Pr2to3++;
		else if(*(a+i)==3 && *(a+i+1)==0)
			Pr3to0++;
		else if(*(a+i)==3&& *(a+i+1)==1)
			Pr3to1++;
		else if(*(a+i)==3 && *(a+i+1)==2)
			Pr3to2++;
		else
			Pr3to3++;
		i++;
	}
	cout<<" I "<<i<<endl;
	Pr0to0=Pr0to0/i;
	Pr0to1=Pr0to1/i;
	Pr0to2=Pr0to2/i;
	Pr0to3=Pr0to3/i;
	Pr1to0=Pr1to0/i;
	Pr1to1=Pr1to1/i;
	Pr1to2=Pr1to2/i;
	Pr1to3=Pr1to3/i;
	Pr2to0=Pr2to0/i;
	Pr2to1=Pr2to1/i;
	Pr2to2=Pr2to2/i;
	Pr2to3=Pr2to3/i;
	Pr3to0=Pr3to0/i;
	Pr3to1=Pr3to1/i;
	Pr3to2=Pr3to2/i;
	Pr3to3=Pr3to3/i;
	float Pr0=Pr0to0+Pr1to0+Pr2to0+Pr3to0;
	float Pr1=Pr0to1+Pr1to1+Pr2to1+Pr3to1;
	float Pr2=Pr0to2+Pr1to2+Pr2to2+Pr3to2;
	float Pr3=Pr0to3+Pr1to3+Pr2to3+Pr3to3;
	cout<<Pr0<<" "<<Pr1<<" "<<Pr2<<" "<<Pr3<<endl;
	
	mk(Pr0,Pr1,Pr2,Pr3);
}
