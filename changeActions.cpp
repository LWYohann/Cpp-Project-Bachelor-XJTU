#include"changeActions.h"
#include"WGMessage.h"
#include"WGSystem.h"

//��������
//���� 
void changeName(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            string Name;
            cout<<"���������ͺ�"<<endl;
            cin>>Name;
            current->self.changeName(Name);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
}

void changeRP(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float RP;
            cout<<"�������µĶ����"<<endl;
            cin>>RP;
            current->self.changeRP(RP);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
}

void changeCinWS(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float CinWS;
            cout<<"�������µ��������"<<endl;
            cin>>CinWS;
            current->self.changeCinWS(CinWS);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}
void changeCoutWS(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float CoutWS;
            cout<<"�������µ��г�����"<<endl;
            cin>>CoutWS;
            current->self.changeCoutWS(CoutWS);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}
void changeRWS(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float RWS;
            cout<<"�������µĶ����"<<endl;
            cin>>RWS;
            current->self.changeRWS(RWS);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}
void changeDL(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float DL;
            cout<<"�������µ��������"<<endl;
            cin>>DL;
            current->self.changeDL(DL);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}
void changeBD(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float BD;
            cout<<"�������µ�Ҷ��ֱ��"<<endl;
            cin>>BD;
            current->self.changeBD(BD);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}
void changeSA(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float SA;
            cout<<"�������µ�ɨ�����"<<endl;
            cin>>SA;
            current->self.changeSA(SA);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}
void changeRV(List head,string WGName)
{
	List current=findWG(head,WGName);
	if(current){
        if(current->self.getName()==WGName){
            float RV;
            cout<<"�������µĶ��ѹ"<<endl;
            cin>>RV;
            current->self.changeRV(RV);
        }else{
            cout<<"�÷��������"<<endl;
        }
    }else{
        cout<<"�ñ�Ϊ�գ�"<<endl;
    }
	
}

//����
void searchName(List head)
{
	List current=head;
	string WGName;
	cout<<"���������ͺţ�";
	cin>>WGName;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//����
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
        cout<<"�ñ��Ϊ�գ�"<<endl;
    }	
}

void searchRP(List head)
{
	List current=head;
	float RP;
	cout<<"������������ʣ�";
	cin>>RP;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//����
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
        cout<<"�ñ��Ϊ�գ�"<<endl;
    }	
}
void searchCinWS(List head)
{
List current=head;
	float CinWS;
	cout<<"��������������٣�";
	cin>>CinWS;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//����
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
        cout<<"�ñ��Ϊ�գ�"<<endl;
    }		
 } 
void searchCoutWS(List head)
{
	List current=head;
	float CoutWS;
	cout<<"���������г����٣�";
	cin>>CoutWS;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//����
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
        cout<<"�ñ��Ϊ�գ�"<<endl;
    }	
}
void searchRWS(List head)
{
	List current=head;
	float RWS;
	cout<<"������������٣�";
	cin>>RWS;
	
    cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"�ͺ�"<<'\t'<<"�����"<<'\t'<<"�������" <<'\t'<<"�����"<<'\t'<<"�������"<<'\t'<<"Ҷ��ֱ��"<<'\t'<<"ɨ�����"<<'\t'<<"���ѹ"<<endl;		cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	//����
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
        cout<<"�ñ��Ϊ�գ�"<<endl;
    }
}
/*
void searchDL(List head);
void searchBD(List head);
void searchSA(List head);
void searchRV(List head);
*/

//ð������
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

