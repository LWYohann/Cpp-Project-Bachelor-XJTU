#include"WGMessage.h"

//�������� 
void WG::getData(string Name,float RP,float CinWS,float CoutWS,float RWS,float DL,float BD,float SA,float RV){
	this->Name=Name;
	this->RP=RP;
	this->CinWS=CinWS;
	this->CoutWS=CoutWS;
	this->RWS=RWS;
	this->DL=DL;
	this->BD=BD;
	this->SA=SA;
	this->RV=RV; 
}

void WG::ShowMessage()
{
	//cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;	
	cout<<Name<<'\t'<<RP<<'\t'<<CinWS<<'\t'<<CoutWS<<'\t'<<RWS<<'\t'<<DL<<'\t'<<BD<<'\t'<<SA<<'\t'<<RV<<endl;
}

//��������
void WG::changeName(string name)
{
	this->Name=name;
}
void WG::changeRP(float rp)
{
	this->RP=rp;
}
void WG::changeCinWS(float cinws)
{
	this->CinWS=cinws;
}
void WG::changeCoutWS(float coutws)
{
	this->CoutWS=coutws;
}
void WG::changeRWS(float rws)
{
	this->RWS=rws;
}
void WG::changeDL(float dl)
{
	this->DL=dl;
}
void WG::changeBD(float bd)
{
	this->BD=bd;
}
void WG::changeSA(float sa)
{
	this->SA=sa;
}
void WG::changeRV(float rv)
{
	this->RV=rv;
}

//��ȡ���� 
string WG::getName()
{
	return this->Name; 
}
float WG::getRP()
{
	return this->RP; 
}
float WG::getCinWS()
{
	return this->CinWS; 
}
float WG::getCoutWS()
{
	return this->CoutWS; 
}
float WG::getRWS()
{
	return this->RWS; 
}
float WG::getDL()
{
	return this->DL; 
}
float WG::getBD()
{
	return this->BD; 
}
float WG::getSA()
{
	return this->SA; 
}
float WG::getRV()
{
	return this->RV; 
}
float WG::getCG()
{
	return this->CG; 
}
float WG::getCGT()
{
	return this->CGT; 
}

void WG::Reset()
{
			RTP=0;
			CG=0;
			CGT=0;
}

void WG::Calculate(float AWSH)
{
	RTP=0;
	if(AWSH>=CinWS&&AWSH<=CoutWS)
	{
		RTP=(AWSH>RWS?RP:RP/RWS/RWS/RWS*AWSH*AWSH*AWSH);
		CGT++;
		CG+=RTP*1000;
	}
}

void WG::ShowPower()
{
	cout<<Name<<'\t'<<RP<<'\t'<<RWS<<'\t'<<CGT<<'\t'<<CG<<'\t'<<endl; 
}

