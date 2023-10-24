#include"WGSystem.h"
#include"WindSystem.h"
#include"interface.h"
#include"WGMessage.h"
#include"WindMessage.h"
#include"changeActions.h"
#include <windows.h>

//增加风机信息
List add(List head)
{
	string Name;
	float RP,CinWS,CoutWS,RWS,DL,BD,SA,RV;
	if(head==NULL)
	{
		//为首结点动态分配空间
		head=new Data;
		cout<<"请依次输入风机的型号、额定功率、切入风速、切出风速、额定风速、设计寿命、叶轮直径、扫风面积、额定电压："<<endl;
		cin>>Name>>RP>>CinWS>>CoutWS>>RWS>>DL>>BD>>SA>>RV; 
		head->self.getData(Name,RP,CinWS,CoutWS,RWS,DL,BD,SA,RV);
		//令下一个节点为空
		head->next=NULL; 
	}
	else//否则遍历找到空节点并分配 
	{
		List current,record;
		current=head;
		while(current->next)
		{
			current=current->next;
			record=current->next;
		 } 
		 if(current==head)
		 {
		 	record=current->next;
		 }
	 	cout<<"请依次输入风机的型号、额定功率、切入风速、切出风速、额定风速、设计寿命、叶轮直径、扫风面积、额定电压："<<endl;
		cin>>Name>>RP>>CinWS>>CoutWS>>RWS>>DL>>BD>>SA>>RV; 
		 //为新结点动态分配空间
        record= new Data;
        record->self.getData(Name,RP,CinWS,CoutWS,RWS,DL,BD,SA,RV);
        //令下一个结点为空
		record->next=NULL;
		current->next=record;
	}
	return head;
}
	
	
//更改风机信息
List changeActs(List head)
{
	int choose;
	string WGName;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"--1.更改风机型号    2.更改额定功率    3.更改切入风速--"<<endl;
	cout<<"------------------------------------------------------"<<endl;
    cout<<"--4.更改切出风速    5.更改额定风速    6.更改设计寿命--"<<endl;
    cout<<"------------------------------------------------------"<<endl;
	cout<<"--7.更改叶轮直径    8.更改扫风面积    9.更改额定电压--"<<endl;
	cout<<"------------------------------------------------------"<<endl;
    cout<<"请输入1-9:";
	cin>>choose;
	cout<<endl;
	cout<<"请输入你希望更改的风机的型号"<<endl;
	cin>>WGName;
	 if(choose==1){
        changeName(head,WGName);
    }else if(choose==2){
        changeRP(head,WGName);
    }else if(choose==3){
        changeCinWS(head,WGName);
    }else if(choose==4){
        changeCoutWS(head,WGName);
    }else if(choose==5){
        changeRWS(head,WGName);
    }else if(choose==6){
		changeDL(head,WGName);
	}else if(choose==7){
		changeBD(head,WGName);
	}else if(choose==8){
		changeSA(head,WGName);
	}else if(choose==9){
		changeRV(head,WGName);
	}
	else{
        cout<<"无效输入!"<<endl;
    }
	return head;
}

//显示所有风机信息
List dataFace(List head)
{
	List current=head;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	if(current==NULL){
		cout<<"表格为空！"<<endl;
	}else{
		while(current){
			current->self.ShowMessage();
			cout<<endl;
			cout<<"---------------------------------------------------------------------------"<<endl;
			current=current->next;
		}
	}
    return head;
}

//删除风机信息
List excludeActs(List head)
{
	string WGName;
    cout<<"请输入你要删除的风机的型号:";
    cin>>WGName;
    List current=head,before;
    
    if(current){
		while(current->next!=NULL&&current->self.getName()!=WGName){
			before=current;
			current=current->next;
		}
        if(current->self.getName()==WGName){
            if(current==head){
                List record=head;
                head=head->next;
                delete record;
                return head;
            }else{
                before->next=current->next;
                delete current;
            }
        }else{
            cout<<"该风机不存在！"<<endl;
        }
    }else{
		cout<<"该表为空!"<<endl;
    }
	return head;
}

//显示风机信息
List showWGActs(List head)
{
	int choose;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"--1.检索风机型号    2.检索额定功率    3.检索切入风速--"<<endl;
	cout<<"------------------------------------------------------"<<endl;
    cout<<"--4.检索切出风速    5.检索额定风速    6.检索设计寿命--"<<endl;
    cout<<"------------------------------------------------------"<<endl;
	//cout<<"--7.检索叶轮直径    8.检索扫风面积    9.检索额定电压--"<<endl;
	//cout<<"------------------------------------------------------"<<endl;
    cout<<"请输入1-6:";
	cin>>choose;
	if(choose==1){
        searchName(head);
    }else if(choose==2){
        searchRP(head);
    }else if(choose==3){
        searchCinWS(head);
    }else if(choose==4){
        searchCoutWS(head);
    }else if(choose==5){
        searchRWS(head);
    }else if(choose==6){
		//searchDL(head);
	}
	/*else if(choose==7){
		searchBD(head);
	}else if(choose==8){
		searchSA(head);
	}else if(choose==9){
		searchRV(head);
	}*/
	else{
        cout<<"无效输入!"<<endl;
    }
	return head;
}

//从文件录入风机信息
List readin(List head)
{
	ifstream fin;
	cout<<"请确保风机数据文件位于D盘！"<<endl<<"---------------------------"<<endl;
	char address[]="D:\\Data.txt";
	string Name;
	float RP,CinWS,CoutWS,RWS,DL,BD,SA,RV;
	List current,record,recall;
	fin.open(address);
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
	if(!fin.is_open()){
		cout<<"打开文件失败！"<<endl;
	}else{
		while(fin>> Name>>RP>>CinWS>>CoutWS>>RWS>>DL>>BD>>SA>>RV)
		{
			recall=new Data;			
			if(head==NULL){
				head=recall;
			}else{
				current->next=recall;
			}
			recall->self.getData(Name,RP,CinWS,CoutWS,RWS,DL,BD,SA,RV);
				recall->next=NULL;
			current=recall;
			
		 } 
		 cout<<"读取中";
		 Sleep(500);
		 cout<<"."; 
		 Sleep(500);
		 cout<<".";
		 Sleep(500);
		 cout<<".";
		 fin.clear();
		 cout<<"文件读取成功！"<<endl; 
	}
	return head; 
}

//对风机信息进行排序
List sortData(List head)
{
	int choose;
    cout<<"-----------------------------------------"<<endl;
    cout<<"1.根据风机型号排序        2.根据额定功率排序"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"3.根据额定风速排序                        "<<endl;
    cout<<"-----------------------------------------"<<endl;
	cin>>choose;
    if(choose==1){
        head=bubbleSortName(head);
    }else if(choose==2){
        head=bubbleSortRP(head);
    }else if(choose==3){
        head=bubbleSortRWS(head);
    }else{
        cout<<"无效操作！"<<endl;
    }
    cout<<"排序中 ";
    Sleep(500);
	 cout<<"."; 
	 Sleep(500);
	 cout<<".";
	 Sleep(500);
	 cout<<"."<<endl;
    cout<<"排序成功！请返回查看排序后的风机信息。" <<endl;
    return head;
}

//根据风机型号搜索指定风机
List findWG(List head,string WGName)
{
	List current=head;
	if(current==NULL) return current;
    while(current->next!=NULL&&current->self.getName()!=WGName){
        current=current->next;
    }
    return current;
}

//清除所有数据，防止内存泄露
List clearAll(List head)
{
	    List current=head,record;
	if(head!=NULL){
        while(current){
            record=current->next;
            delete current;
            current=record;
        }
	}
    return head=NULL;
}

List Sim(List head,WSList wshead,string Place)
{
	List current=head;
	WSList now=WSfindWG(wshead,Place);
	int N=now->wpself.getN();
	float * SP=now->wpself.getWSp();
	if(current==NULL){
		cout<<"表格为空！"<<endl;
	}else{
		if(now->wpself.getPlace()==Place)
		{
			while(current){
			current->self.Reset();
			for(int i=0;i<N;i++)
			{
				current->self.Calculate(SP[i]);
			}
			//cout<<endl;
			//cout<<"---------------------------------------------------------------------------"<<endl;
			//cout<<current->self.getCG()<<endl;
			current=current->next;
			}
		}
		else
		{
			cout<<"该地点不存在！"<<endl;
		}
	}
    return head;
}

List ShowSim(List head)
{
	List current=head;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"额定风速"<<'\t'<<"累计启机时长"<<'\t'<<"累计发电量" <<endl;		
	cout<<"---------------------------------------------------------------------------"<<endl;
	if(current==NULL){
			cout<<"表格为空！"<<endl;
		}else{
			while(current){
				current->self.ShowPower();
				cout<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				current=current->next;
			}
		}
	    return head;
}
