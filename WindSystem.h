#ifndef WINDSYSTEM
#define WINDSYSTEM

#include"stdc++.h"
#include"actions.h"
using namespace std;


//从文件录入风速信息
WSList WSreadin(WSList head);

//清除所有数据，防止内存泄露
WSList WSclearAll(WSList head);

//根据地点搜索指定风速
WSList WSfindWG(WSList head,string WSPlace);

//显示风速信息 
WSList WSdataFace(WSList head);



#endif
