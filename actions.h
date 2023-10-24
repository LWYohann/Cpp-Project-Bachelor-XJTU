#ifndef ACTIONS
#define ACTIONS

#include"stdc++.h"
#include"WGMessage.h"
#include"WindMessage.h"

using namespace std;
typedef struct WGDate * List;
typedef struct WGDate Data;

//链表的构成元素
struct WGDate
{
    WG self;
    List next;
};

typedef struct WSDate * WSList;
typedef struct WSDate WSData;
struct WSDate
{
	Wind wpself;
	WSList next;
 };


//信息管理系统选项
void acts();
void visitacts(); 
//主界面选项
void tasks();



#endif
