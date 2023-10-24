#ifndef WGSYSTEM
#define WGSYSTEM

#include"stdc++.h"
#include"actions.h"
using namespace std;

//增加风机信息
List add(List head);
//更改风机信息
List changeActs(List head);
//删除风机信息
List excludeActs(List head);
//显示所有风机信息
List dataFace(List head);
//从文件录入风机信息
List readin(List head);
//显示风机信息
List showWGActs(List head);
//对风机信息进行排序
List sortData(List head);
//清除所有数据，防止内存泄露
List clearAll(List head);
//根据风机型号搜索指定风机
List findWG(List head,string WGName);
//模拟运行
List Sim(List head,WSList wshead,string Place);

List ShowSim(List head);




#endif WGSYSTEM
