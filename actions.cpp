#include"actions.h"
#include"interface.h"
#include"WGSystem.h"
#include"WindSystem.h"
#include <windows.h>
#include"changeActions.h"

//账号密码
const string ID="admin";
const string PASSWORD="admin";

//主界面
void tasks()
{
	int task;
	outFace();
	cout<<"请输入0-2:"; 
	while(cin>>task)
	{
		if(task==0)
		{
			cout<<"系统即将关闭 ";
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
			//访客系统 
			cout<<"正在进入访客模式 "; 
			 Sleep(500);
			 cout<<"."; 
			 Sleep(500);
			 cout<<".";
			 Sleep(500);
			 cout<<"."<<endl;
			visitacts(); 
		}
		else if(task==2)
		{//管理员 
			string id,password;
			cout<<"请输入账号：";
			cin>>id;
			 if(id==ID)
			 {
			 	cout<<"请输入密码：" ;
				 cin>>password; 
				if(password==PASSWORD)
				{
                acts();
				}
				else
				{
					cout<<"密码错误"<<endl;
				}
            }
			else
			{
				cout<<"账号错误"<<endl;
			} 
			 
		 }
		 else if(task==3)
		 {
		 	cout<<"作者：储能91班 刘文宇 黄汉骐"<<endl; 
		  } 
		  else
		  {
		  	cout<<"无效输入！"<<endl;
		  }
		  //清屏
		system("pause");
		system("CLS");
        outFace();
		//选择
        cout<<"请输入0-2："<<endl;
	}
} 

//访客系统 
void visitacts()
{
	int a;
	List head=NULL;
	WSList wshead=NULL; 
	 //清屏
	system("pause");
	system("CLS");

	MainFace();
	cout<<"注意：您正在处于访客模式，仅能录入和查看信息。请输入0-7：";
	   while(cin>>a)
	   {
	        if(a==1)
			{	
				cout<<"该功能在访客模式不可用，请登录后重试！" <<endl;
				//head=add(head); //增加风机信息
	        }
			else if(a==2)
			{
				cout<<"该功能在访客模式不可用，请登录后重试！" <<endl;
				//head=changeActs(head);//更改风机信息
	        }
			else if(a==3)
			{
				cout<<"该功能在访客模式不可用，请登录后重试！" <<endl;
				//head=excludeActs(head);//删除风机信息
	        }
			else if(a==4)
			{
				head=dataFace(head);//显示所有风机信息
	        }
			else if(a==5)
			{
				head=readin(head);//从文件录入风机信息
	        }
			else if(a==6)
			{
				head=showWGActs(head);//显示风机信息
	        }
			else if(a==7)
			{
				cout<<"该功能在访客模式不可用，请登录后重试！" <<endl;
	            //head=sortData(head);//对风机信息进行排序
	        }
	        
			else if(a==0)
			{
				cout<<"将返回主界面 "<<endl;
				head=clearAll(head);
				wshead=WSclearAll(wshead);
				Sleep(1000);
				break;
			}
			//清屏
		system("pause");
		system("CLS");

		MainFace();
		cout<<"注意：您正在处于访客模式，仅能录入和查看信息。请输入0-7：";
		}	
}





//风机管理二级界面
void acts()
{
	int a;
	List head=NULL;
	WSList wshead=NULL;
	 //清屏
	system("pause");
	system("CLS");

	MainFace();
	cout<<"请输入0-7：";
	   while(cin>>a)
	   {
	        if(a==1)
			{	
				head=add(head); //增加风机信息
	        }
			else if(a==2)
			{
			
				head=changeActs(head);//更改风机信息
	        }
			else if(a==3)
			{
				head=excludeActs(head);//删除风机信息
	        }
			else if(a==4)
			{
				head=dataFace(head);//显示所有风机信息
	        }
			else if(a==5)
			{
				head=readin(head);//从文件录入风机信息
	        }
			else if(a==6)
			{
				head=showWGActs(head);//显示风机信息
	        }
			else if(a==7)
			{
	            head=sortData(head);//对风机信息进行排序
	        }
	        else if(a==9)
			{
				wshead=WSreadin(wshead);//从文件录入风速信息
				//wshead=WSdataFace(wshead);//显示所有风速信息
				string Place;
				cout<<"请输入你希望模拟运行的地点"<<endl;
				cin>>Place;
				head=Sim(head,wshead,Place);
				head=bubbleSortCG(head); 
				head=ShowSim(head);
	        }
			else if(a==0)
			{
				cout<<"将返回主界面"<<endl;
				head=clearAll(head);
				wshead=WSclearAll(wshead);
				Sleep(1000);
				break;
			}
			//清屏
		system("pause");
		system("CLS");

		MainFace();
		cout<<"请输入0-7：";
		}
 } 
