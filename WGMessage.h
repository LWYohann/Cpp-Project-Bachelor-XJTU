#ifndef WGMESSAGE
#define WGMESSAGE
#include"stdc++.h"

using namespace std;

class WG//Wind Generator 
{ 	
	protected:
		string Name;
		float RP;//Rated Power(MW)
		float RTP;//Real Time Power(MW) 
		float CinWS;//Cut-in Wind Speed(m/s)
		float CoutWS;//Cut-out Wind Speed(m/s)
		float RWS;//Rated Wind Speed(m/s)
		float DL;//Designed Life(Year)
		float BD;//Blade Diameter (m)
		float SA;//Swept Area(m^2)
		float RV;//Rated Voltage(V)
		float CG;//Cumulative Generation(kWh)
		float CGT; //Cumulative Generation Time(h)
	public:
		WG()
		{
			RTP=0;
			CG=0;
			CGT=0;
		}
		~WG(){}
		//传输数据 
		void getData(string Name,float RP,float CinWS,float CoutWS,float RWS,float DL,float BD,float SA,float RV);
		//输出信息 
		void ShowMessage();
		//更改数据 
		void changeName(string name);
		void changeRP(float rp);
		void changeCinWS(float cinws);
		void changeCoutWS(float coutws);
		void changeRWS(float rws);
		void changeDL(float dl);
		void changeBD(float bd);
		void changeSA(float sa);
		void changeRV(float rv);
		//获取数据 
		string getName();
		float getRP();
		float getCinWS();
		float getCoutWS();
		float getRWS();
		float getDL();
		float getBD();
		float getSA();
		float getRV();
		float getCG();
		float getCGT();

		
		void Calculate(float AWSH);//Average Wind Speed in an Hour 
		void Reset();
		void ShowPower(); 
		//void OutputInfo();
		//void OutputPower(int NumOfHour,float NowWS);
};

#endif

