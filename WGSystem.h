#ifndef WGSYSTEM
#define WGSYSTEM

#include"stdc++.h"
#include"actions.h"
using namespace std;

//���ӷ����Ϣ
List add(List head);
//���ķ����Ϣ
List changeActs(List head);
//ɾ�������Ϣ
List excludeActs(List head);
//��ʾ���з����Ϣ
List dataFace(List head);
//���ļ�¼������Ϣ
List readin(List head);
//��ʾ�����Ϣ
List showWGActs(List head);
//�Է����Ϣ��������
List sortData(List head);
//����������ݣ���ֹ�ڴ�й¶
List clearAll(List head);
//���ݷ���ͺ�����ָ�����
List findWG(List head,string WGName);
//ģ������
List Sim(List head,WSList wshead,string Place);

List ShowSim(List head);




#endif WGSYSTEM
