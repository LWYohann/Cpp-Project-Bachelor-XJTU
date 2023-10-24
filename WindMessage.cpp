#include"WindMessage.h"
void Wind::getData(string Place,int N,float Sp[])
{
	this->Place=Place; 
	this->N=N;
	for(int i=0;i<N;i++)
	{
		WSp[i]=Sp[i];
	}
}

string Wind::getPlace()
{
	return this->Place;
}
int Wind::getN()
{
	return this->N;
}
float * Wind::getWSp()
{
	return this->WSp; 
}

void Wind::WSShowMessage()
{
	cout<<"�ص㣺"<<Place<<endl; 
	for(int i=0;i<N;i++)
	{
		cout<<WSp[i]<<'\t'; 
	}
}


