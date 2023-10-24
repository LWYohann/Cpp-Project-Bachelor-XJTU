#include"WindSystem.h"
#include"interface.h"
#include"WindMessage.h"
#include"changeActions.h"
#include <windows.h>

//从文件录入风速信息
WSList WSreadin(WSList head)
{
	ifstream WSfin;
	cout<<"请确保风速数据文件位于D盘！"<<endl<<"---------------------------"<<endl;
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
		//通过遍历找到空结点
		while(current->next){
			current=current->next;
			recall=current->next;
		}
		if(current==head)
			recall=current->next;
	}
	if(!WSfin.is_open()){
		cout<<"打开文件失败！"<<endl;
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
	cout<<"读取成功！"<<endl; 
	return head;
}

WSList WSdataFace(WSList head)
{
	WSList current=head;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	if(current==NULL){
		cout<<"表格为空！"<<endl;
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

//清除所有数据，防止内存泄露
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
//根据地点搜索风速
WSList WSfindWG(WSList head,string WSPlace)
{
	WSList current=head;
	if(current==NULL) return current;
    while(current->next!=NULL&&current->wpself.getPlace()!=WSPlace){
        current=current->next;
    }
    return current;
}


