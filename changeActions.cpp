#include"changeActions.h"
#include"WGMessage.h"
#include"WGSystem.h"

//更改姓名
//更改 
void changeName(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            string Name;
            cout<<"请输入新型号"<<endl;
            cin>>Name;
            current->self.changeName(Name);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
}

void changeRP(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float RP;
            cout<<"请输入新的额定功率"<<endl;
            cin>>RP;
            current->self.changeRP(RP);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
}

void changeCinWS(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float CinWS;
            cout<<"请输入新的切入风速"<<endl;
            cin>>CinWS;
            current->self.changeCinWS(CinWS);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}
void changeCoutWS(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float CoutWS;
            cout<<"请输入新的切出风速"<<endl;
            cin>>CoutWS;
            current->self.changeCoutWS(CoutWS);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}
void changeRWS(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float RWS;
            cout<<"请输入新的额定风速"<<endl;
            cin>>RWS;
            current->self.changeRWS(RWS);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}
void changeDL(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float DL;
            cout<<"请输入新的设计寿命"<<endl;
            cin>>DL;
            current->self.changeDL(DL);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}
void changeBD(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float BD;
            cout<<"请输入新的叶轮直径"<<endl;
            cin>>BD;
            current->self.changeBD(BD);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}
void changeSA(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float SA;
            cout<<"请输入新的扫风面积"<<endl;
            cin>>SA;
            current->self.changeSA(SA);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}
void changeRV(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float RV;
            cout<<"请输入新的额定电压"<<endl;
            cin>>RV;
            current->self.changeRV(RV);
        }else{
            cout<<"该风机不存在"<<endl;
        }
    }else{
        cout<<"该表为空！"<<endl;
    }
	
}

//检索
void searchName(List head)
{
	List current=head;
	string WGName;
	cout<<"请输入风机型号：";
	cin>>WGName;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//遍历
    if(current){
        while(current){
            if(current->self.getName()==WGName){
                current->self.ShowMessage();
				cout<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				
            }
			current=current->next;
        }
    }else{
        cout<<"该表格为空！"<<endl;
    }	
}

void searchRP(List head)
{
	List current=head;
	float RP;
	cout<<"请输入风机额定功率：";
	cin>>RP;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//遍历
    if(current){
        while(current){
            if(current->self.getRP()==RP){
                current->self.ShowMessage();
				cout<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				
            }
			current=current->next;
        }
    }else{
        cout<<"该表格为空！"<<endl;
    }	
}
void searchCinWS(List head)
{
List current=head;
	float CinWS;
	cout<<"请输入风机切入风速：";
	cin>>CinWS;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//遍历
    if(current){
        while(current){
            if(current->self.getCinWS()==CinWS){
                current->self.ShowMessage();
				cout<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				
            }
			current=current->next;
        }
    }else{
        cout<<"该表格为空！"<<endl;
    }		
 } 
void searchCoutWS(List head)
{
	List current=head;
	float CoutWS;
	cout<<"请输入风机切出风速：";
	cin>>CoutWS;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//遍历
    if(current){
        while(current){
            if(current->self.getCoutWS()==CoutWS){
                current->self.ShowMessage();
				cout<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				
            }
			current=current->next;
        }
    }else{
        cout<<"该表格为空！"<<endl;
    }	
}
void searchRWS(List head)
{
	List current=head;
	float RWS;
	cout<<"请输入风机额定风速：";
	cin>>RWS;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"型号"<<'\t'<<"额定功率"<<'\t'<<"切入风速" <<'\t'<<"额定风速"<<'\t'<<"设计寿命"<<'\t'<<"叶轮直径"<<'\t'<<"扫风面积"<<'\t'<<"额定电压"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//遍历
    if(current){
        while(current){
            if(current->self.getRWS()==RWS){
                current->self.ShowMessage();
				cout<<endl;
				cout<<"---------------------------------------------------------------------------"<<endl;
				
            }
			current=current->next;
        }
    }else{
        cout<<"该表格为空！"<<endl;
    }
}
/*
void searchDL(List head);
void searchBD(List head);
void searchSA(List head);
void searchRV(List head);
*/

//冒泡排序
List bubbleSortName(List head)
{
	WG W;
	int n=0;
	List current=head,record;
	while(current){
        n++;
        current=current->next;
    }
	current=head; 
	
	for(int i=0;i<n;i++){
        while(current->next){
			record=current->next;
			if(record->self.getName()>current->self.getName()){
				W=record->self;
				record->self=current->self;
				current->self=W;
			}
			current=current->next;
        }
		current=head;    
    }
    return head;
}
List bubbleSortRP(List head)
{
	WG W;
	int n=0;
	List current=head,record;
	while(current){
        n++;
        current=current->next;
    }
	current=head; 
	
	for(int i=0;i<n;i++){
        while(current->next){
			record=current->next;
			if(record->self.getRP()>current->self.getRP()){
				W=record->self;
				record->self=current->self;
				current->self=W;
			}
			current=current->next;
        }
		current=head;    
    }
    return head;
}
List bubbleSortRWS(List head)
{
	WG W;
	int n=0;
	List current=head,record;
	while(current){
        n++;
        current=current->next;
    }
	current=head; 
	
	for(int i=0;i<n;i++){
        while(current->next){
			record=current->next;
			if(record->self.getRWS()>current->self.getRWS()){
				W=record->self;
				record->self=current->self;
				current->self=W;
			}
			current=current->next;
        }
		current=head;    
    }
    return head;
}


List bubbleSortCG(List head)
{
	WG W;
	int n=0;
	List current=head,record;
	while(current){
        n++;
        current=current->next;
    }
	current=head; 
	
	for(int i=0;i<n;i++){
        while(current->next){
			record=current->next;
			if(record->self.getCG()>current->self.getCG()){
				W=record->self;
				record->self=current->self;
				current->self=W;
			}
			current=current->next;
        }
		current=head;    
    }
    return head;
}


List bubbleSortCGT(List head)
{
	WG W;
	int n=0;
	List current=head,record;
	while(current){
        n++;
        current=current->next;
    }
	current=head; 
	
	for(int i=0;i<n;i++){
        while(current->next){
			record=current->next;
			if(record->self.getCGT()>current->self.getCGT()){
				W=record->self;
				record->self=current->self;
				current->self=W;
			}
			current=current->next;
        }
		current=head;    
    }
    return head;
}

