#include"WindSystem.h"
#include"interface.h"
#include"WindMessage.h"
#include"changeActions.h"
#include <windows.h>

//���ļ�¼�������Ϣ
WSList WSreadin(WSList head)
{
	ifstream WSfin;
	cout<<"��ȷ�����������ļ�λ��D�̣�"<<endl<<"---------------------------"<<endl;
	char address[]="D:\\WSData.txt";
	WSList current,record,recall;
	string Place;
	int N=157;
	float WS[200];
	WSfin.open(address);
	current=head;
	recall=head;
	if(head==NULL){
		recall=head;
	}else{
		//ͨ�������ҵ��ս��
		while(current->next){
			current=current->next;
			recall=current->next;
		}
		if(current==head)
			recall=current->next;
	}
	if(!WSfin.is_open()){
		cout<<"���ļ�ʧ�ܣ�"<<endl;
	}else{
		while(WSfin>> Place)
		{
			for(int i=0;i<N;i++)
			{
				WSfin>>WS[i];
			}
			recall=new WSData;			
			if(head==NULL){
				head=recall;
			}else{
				current->next=recall;
			}
			recall->wpself.getData(Place,N,WS);
				recall->next=NULL;
			current=recall;
		 } 
	}
	cout<<"��ȡ�ɹ���"<<endl; 
	return head;
}

WSList WSdataFace(WSList head)
{
	WSList current=head;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	if(current==NULL){
		cout<<"���Ϊ�գ�"<<endl;
	}else{
		while(current){
			current->wpself.WSShowMessage();
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			current=current->next;
		}
	}
    return head;
}

//����������ݣ���ֹ�ڴ�й¶
WSList WSclearAll(WSList head)
{
	WSList current=head,record;
	if(head!=NULL){
        while(current){
            record=current->next;
            delete current;
            current=record;
        }
	}
    return head=NULL;
}
//���ݵص���������
WSList WSfindWG(WSList head,string WSPlace)
{
	WSList current=head;
	if(current==NULL) return current;
    while(current->next!=NULL&&current->wpself.getPlace()!=WSPlace){
        current=current->next;
    }
    return current;
}


