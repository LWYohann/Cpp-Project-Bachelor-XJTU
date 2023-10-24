 #ifndef CHANGEACTIONS
#define CHANGEACTIONS

#include"stdc++.h"
#include"actions.h"
using namespace std;
//¸ü¸Ä 
void changeName(List head,string WGName);
void changeRP(List head,string WGName);
void changeCinWS(List head,string WGName);
void changeCoutWS(List head,string WGName);
void changeRWS(List head,string WGName);
void changeDL(List head,string WGName);
void changeBD(List head,string WGName);
void changeSA(List head,string WGName);
void changeRV(List head,string WGName);

//¼ìË÷
void searchName(List head);
void searchRP(List head);
void searchCinWS(List head);
void searchCoutWS(List head);
void searchRWS(List head);
/*
void searchDL(List head);
void searchBD(List head);
void searchSA(List head);
void searchRV(List head);
*/

//Ã°ÅÝÅÅÐò
List bubbleSortName(List head);
List bubbleSortRP(List head);
List bubbleSortRWS(List head);
List bubbleSortCG(List head);
List bubbleSortCGT(List head);
#endif CHANGEACTIONS

