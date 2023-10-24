#include"WGSystem.h"
#include"WindSystem.h"
#include"interface.h"
#include"WGMessage.h"
#include"WindMessage.h"
#include"changeActions.h"
#include <windows.h>

//���ӷ����Ϣ
List add(List head)
{
	string Name;
	float RP,CinWS,CoutWS,RWS,DL,BD,SA,RV;
	if(head==NULL)
	{
		//Ϊ�׽�㶯̬����ռ�
		head=new Data;
		cout<<"���������������ͺš�����ʡ�������١��г����١�����١����������Ҷ��ֱ����ɨ����������ѹ��"<<endl;
		cin>>Name>>RP>>CinWS>>CoutWS>>RWS>>DL>>BD>>SA>>RV; 
		head->self.getData(Name,RP,CinWS,CoutWS,RWS,DL,BD,SA,RV);
		//����һ���ڵ�Ϊ��
		head->next=NULL; 
	}
	else//��������ҵ��սڵ㲢���� 
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
	 	cout<<"���������������ͺš�����ʡ�������١��г����١�����١����������Ҷ��ֱ����ɨ����������ѹ��"<<endl;
		cin>>Name>>RP>>CinWS>>CoutWS>>RWS>>DL>>BD>>SA>>RV; 
		 //Ϊ�½�㶯̬����ռ�
        record= new Data;
        record->self.getData(Name,RP,CinWS,CoutWS,RWS,DL,BD,SA,RV);
        //����һ�����Ϊ��
		record->next=NULL;
		current->next=record;
	}
	return head;
}
	
	
//���ķ����Ϣ
List changeActs(List head)
{
	int choose;
	string WGName;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"--1.���ķ���ͺ�    2.���Ķ����    3.�����������--"<<endl;
	cout<<"------------------------------------------------------"<<endl;
    cout<<"--4.�����г�����    5.���Ķ����    6.�����������--"<<endl;
    cout<<"------------------------------------------------------"<<endl;
	cout<<"--7.����Ҷ��ֱ��    8.����ɨ�����    9.���Ķ��ѹ--"<<endl;
	cout<<"------------------------------------------------------"<<endl;
    cout<<"������1-9:";
	cin>>choose;
	cout<<endl;
	cout<<"��������ϣ�����ĵķ�����ͺ�"<<endl;
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
        cout<<"��Ч����!"<<endl;
    }
	return head;
}

//��ʾ���з����Ϣ
List dataFace(List head)
{
	List current=head;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	if(current==NULL){
		cout<<"���Ϊ�գ�"<<endl;
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

//ɾ�������Ϣ
List excludeActs(List head)
{
	string WGName;
    cout<<"��������Ҫɾ���ķ�����ͺ�:";
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
            cout<<"�÷�������ڣ�"<<endl;
        }
    }else{
		cout<<"�ñ�Ϊ��!"<<endl;
    }
	return head;
}

//��ʾ�����Ϣ
List showWGActs(List head)
{
	int choose;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"--1.��������ͺ�    2.���������    3.�����������--"<<endl;
	cout<<"------------------------------------------------------"<<endl;
    cout<<"--4.�����г�����    5.���������    6.�����������--"<<endl;
    cout<<"------------------------------------------------------"<<endl;
	//cout<<"--7.����Ҷ��ֱ��    8.����ɨ�����    9.�������ѹ--"<<endl;
	//cout<<"------------------------------------------------------"<<endl;
    cout<<"������1-6:";
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
        cout<<"��Ч����!"<<endl;
    }
	return head;
}

//���ļ�¼������Ϣ
List readin(List head)
{
	ifstream fin;
	cout<<"��ȷ����������ļ�λ��D�̣�"<<endl<<"---------------------------"<<endl;
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
		//ͨ�������ҵ��ս��
		while(current->next){
			current=current->next;
			recall=current->next;
		}
		if(current==head)
			recall=current->next;
	}
	if(!fin.is_open()){
		cout<<"���ļ�ʧ�ܣ�"<<endl;
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
		 cout<<"��ȡ��";
		 Sleep(500);
		 cout<<"."; 
		 Sleep(500);
		 cout<<".";
		 Sleep(500);
		 cout<<".";
		 fin.clear();
		 cout<<"�ļ���ȡ�ɹ���"<<endl; 
	}
	return head; 
}

//�Է����Ϣ��������
List sortData(List head)
{
	int choose;
    cout<<"-----------------------------------------"<<endl;
    cout<<"1.���ݷ���ͺ�����        2.���ݶ��������"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"3.���ݶ��������                        "<<endl;
    cout<<"-----------------------------------------"<<endl;
	cin>>choose;
    if(choose==1){
        head=bubbleSortName(head);
    }else if(choose==2){
        head=bubbleSortRP(head);
    }else if(choose==3){
        head=bubbleSortRWS(head);
    }else{
        cout<<"��Ч������"<<endl;
    }
    cout<<"������ ";
    Sleep(500);
	 cout<<"."; 
	 Sleep(500);
	 cout<<".";
	 Sleep(500);
	 cout<<"."<<endl;
    cout<<"����ɹ����뷵�ز鿴�����ķ����Ϣ��" <<endl;
    return head;
}

//���ݷ���ͺ�����ָ�����
List findWG(List head,string WGName)
{
	List current=head;
	if(current==NULL) return current;
    while(current->next!=NULL&&current->self.getName()!=WGName){
        current=current->next;
    }
    return current;
}

//����������ݣ���ֹ�ڴ�й¶
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
		cout<<"���Ϊ�գ�"<<endl;
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
			cout<<"�õص㲻���ڣ�"<<endl;
		}
	}
    return head;
}

List ShowSim(List head)
{
	List current=head;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�����"<<'\t'<<"�ۼ�����ʱ��"<<'\t'<<"�ۼƷ�����" <<endl;		
	cout<<"---------------------------------------------------------------------------"<<endl;
	if(current==NULL){
			cout<<"���Ϊ�գ�"<<endl;
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
