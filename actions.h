#ifndef ACTIONS
#define ACTIONS

#include"stdc++.h"
#include"WGMessage.h"
#include"WindMessage.h"

using namespace std;
typedef struct WGDate * List;
typedef struct WGDate Data;

//����Ĺ���Ԫ��
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


//��Ϣ����ϵͳѡ��
void acts();
void visitacts(); 
//������ѡ��
void tasks();



#endif
