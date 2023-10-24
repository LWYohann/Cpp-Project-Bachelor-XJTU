#ifndef WINDMESSAGE
#define WINDMESSAGE

#include"stdc++.h"

using namespace std;

class Wind
{
	protected:
		string Place;
		int N;
		float WSp[200];
	public:
		Wind()
		{
			N=0;
		}
		~Wind(){}
		void getData(string Place,int N,float Sp[]);
		string getPlace();
		int getN();
		float * getWSp(); 
		void WSShowMessage();
}; 

#endif
