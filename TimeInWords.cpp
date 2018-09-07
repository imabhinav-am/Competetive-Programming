#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ctr=0;

void print(int h,int m)
{
	string sh,sm;
 	if(h==1)	sh="one";
 	if(h==2)	sh="two";
 	if(h==3)	sh="three";
 	if(h==4)	sh="four";
 	if(h==5)	sh="five";
 	if(h==6)	sh="six";
 	if(h==7)	sh="seven";
 	if(h==8)	sh="eight";
 	if(h==9)	sh="nine";
 	if(h==10)	sh="ten";
 	if(h==11)	sh="eleven";
 	if(h==12)	sh="twelve";
 	if(m==1)	sm="one";
 	if(m==2)	sm="two";
 	if(m==3)	sm="three";
 	if(m==4)	sm="four";
 	if(m==5)	sm="five";
 	if(m==6)	sm="six";
 	if(m==7)	sm="seven";
 	if(m==8)	sm="eight";
 	if(m==9)	sm="nine";
 	if(m==10)	sm="ten";
 	if(m==11)	sm="eleven";
 	if(m==12)	sm="twelve";
 	if(m==13)	sm="thirteen";
 	if(m==14)	sm="fourteen";
 	if(m==16)	sm="sixteen";
 	if(m==17)	sm="seventeen";
 	if(m==18)	sm="eighteen";
 	if(m==19)	sm="nineteen";
 	if(m==20)	sm="twenty";
 	if(m==21)	sm="twenty one";
 	if(m==22)	sm="twenty two";
 	if(m==23)	sm="twenty three";
 	if(m==24)	sm="twenty four";
 	if(m==25)	sm="twenty five";
 	if(m==26)	sm="twenty six";
 	if(m==27)	sm="twenty seven";
 	if(m==28)	sm="twenty eight";
 	if(m==29)	sm="twenty nine";
 	if(m==0)
 	cout<<sh<<" o' clock";
 	else if(m<15 && ctr==1)
 	cout<<sm<<" minutes to "<<sh;
	else if(m<15)
 	cout<<sm<<" minutes past "<<sh;
 	else if(m==15 && ctr==1)
 	cout<<"quarter to "<<sh;
	else if(m==15)
 	cout<<"quarter past "<<sh;
 	else if(m<30 && ctr==1)
 	cout<<sm<<" minutes to "<<sh;
	else if(m<30)
 	cout<<sm<<" minutes past "<<sh;
 	else if(m==30)
 	cout<<"half past "<<sh;
 	else if(m<45)
	{	ctr++;
		m=60-m;
		if(h<12)
		print(h+1,m);
		else
		print(1,m);
	}
	else if(m==45)
	{	ctr++;
		m=60-m;
		if(h<12)
		print(h+1,m);
		else
		print(1,m);
	}
	else if(m>45)
	{	ctr++;
		m=60-m;
		if(h<12)
		print(h+1,m);
		else
		print(1,m);
	}
}

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
 	print(h,m);
    return 0;
}

