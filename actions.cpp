#include"actions.h"
#include"interface.h"
#include"WGSystem.h"
#include"WindSystem.h"
#include <windows.h>
#include"changeActions.h"

//�˺�����
const string ID="admin";
const string PASSWORD="admin";

//������
void tasks()
{
	int task;
	outFace();
	cout<<"������0-2:"; 
	while(cin>>task)
	{
		if(task==0)
		{
			cout<<"ϵͳ�����ر� ";
			Sleep(500);
			 cout<<"."; 
			 Sleep(500);
			 cout<<".";
			 Sleep(500);
			 cout<<"."<<endl;
			 
			cout<<"BYE~~"<<endl;
			Sleep(1000);
			break;
		}
		else if(task==1)
		{
			//�ÿ�ϵͳ 
			cout<<"���ڽ���ÿ�ģʽ "; 
			 Sleep(500);
			 cout<<"."; 
			 Sleep(500);
			 cout<<".";
			 Sleep(500);
			 cout<<"."<<endl;
			visitacts(); 
		}
		else if(task==2)
		{//����Ա 
			string id,password;
			cout<<"�������˺ţ�";
			cin>>id;
			 if(id==ID)
			 {
			 	cout<<"���������룺" ;
				 cin>>password; 
				if(password==PASSWORD)
				{
                acts();
				}
				else
				{
					cout<<"�������"<<endl;
				}
            }
			else
			{
				cout<<"�˺Ŵ���"<<endl;
			} 
			 
		 }
		 else if(task==3)
		 {
		 	cout<<"���ߣ�����91�� ������ �ƺ���"<<endl; 
		  } 
		  else
		  {
		  	cout<<"��Ч���룡"<<endl;
		  }
		  //����
		system("pause");
		system("CLS");
        outFace();
		//ѡ��
        cout<<"������0-2��"<<endl;
	}
} 

//�ÿ�ϵͳ 
void visitacts()
{
	int a;
	List head=NULL;
	WSList wshead=NULL; 
	 //����
	system("pause");
	system("CLS");

	MainFace();
	cout<<"ע�⣺�����ڴ��ڷÿ�ģʽ������¼��Ͳ鿴��Ϣ��������0-7��";
	   while(cin>>a)
	   {
	        if(a==1)
			{	
				cout<<"�ù����ڷÿ�ģʽ�����ã����¼�����ԣ�" <<endl;
				//head=add(head); //���ӷ����Ϣ
	        }
			else if(a==2)
			{
				cout<<"�ù����ڷÿ�ģʽ�����ã����¼�����ԣ�" <<endl;
				//head=changeActs(head);//���ķ����Ϣ
	        }
			else if(a==3)
			{
				cout<<"�ù����ڷÿ�ģʽ�����ã����¼�����ԣ�" <<endl;
				//head=excludeActs(head);//ɾ�������Ϣ
	        }
			else if(a==4)
			{
				head=dataFace(head);//��ʾ���з����Ϣ
	        }
			else if(a==5)
			{
				head=readin(head);//���ļ�¼������Ϣ
	        }
			else if(a==6)
			{
				head=showWGActs(head);//��ʾ�����Ϣ
	        }
			else if(a==7)
			{
				cout<<"�ù����ڷÿ�ģʽ�����ã����¼�����ԣ�" <<endl;
	            //head=sortData(head);//�Է����Ϣ��������
	        }
	        
			else if(a==0)
			{
				cout<<"������������ "<<endl;
				head=clearAll(head);
				wshead=WSclearAll(wshead);
				Sleep(1000);
				break;
			}
			//����
		system("pause");
		system("CLS");

		MainFace();
		cout<<"ע�⣺�����ڴ��ڷÿ�ģʽ������¼��Ͳ鿴��Ϣ��������0-7��";
		}	
}





//��������������
void acts()
{
	int a;
	List head=NULL;
	WSList wshead=NULL;
	 //����
	system("pause");
	system("CLS");

	MainFace();
	cout<<"������0-7��";
	   while(cin>>a)
	   {
	        if(a==1)
			{	
				head=add(head); //���ӷ����Ϣ
	        }
			else if(a==2)
			{
			
				head=changeActs(head);//���ķ����Ϣ
	        }
			else if(a==3)
			{
				head=excludeActs(head);//ɾ�������Ϣ
	        }
			else if(a==4)
			{
				head=dataFace(head);//��ʾ���з����Ϣ
	        }
			else if(a==5)
			{
				head=readin(head);//���ļ�¼������Ϣ
	        }
			else if(a==6)
			{
				head=showWGActs(head);//��ʾ�����Ϣ
	        }
			else if(a==7)
			{
	            head=sortData(head);//�Է����Ϣ��������
	        }
	        else if(a==9)
			{
				wshead=WSreadin(wshead);//���ļ�¼�������Ϣ
				//wshead=WSdataFace(wshead);//��ʾ���з�����Ϣ
				string Place;
				cout<<"��������ϣ��ģ�����еĵص�"<<endl;
				cin>>Place;
				head=Sim(head,wshead,Place);
				head=bubbleSortCG(head); 
				head=ShowSim(head);
	        }
			else if(a==0)
			{
				cout<<"������������"<<endl;
				head=clearAll(head);
				wshead=WSclearAll(wshead);
				Sleep(1000);
				break;
			}
			//����
		system("pause");
		system("CLS");

		MainFace();
		cout<<"������0-7��";
		}
 } 
