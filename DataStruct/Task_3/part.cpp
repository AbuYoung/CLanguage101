#include <stdio.h>
#include <stack>
#include <queue>
#include <time.h>
#include <string.h>
#include <windows.h>
using namespace std;

#define MAXSIZE 3
typedef struct Carinfo{
    char CarID[20];
    int in_time_year;
	int in_time_month;
	int in_time_day;
	int in_time_hour;
	int in_time_minute;
	int in_time_second;
	int local;
}carr;


void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,(ForeColor%16)|(BackGroundColor%16*16));}

int main(int argc, char** argv) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // 获取控制台句柄
    stack<Carinfo> port,tmp;//停车场
	queue<Carinfo> block,btmp;//通道
    time_t timep;
	struct tm *p;
    int FLAG;	
	Carinfo newcar;
	while(true)
    {
		system("cls");
		printf("\n请输入要进行的服务:\n1:进车\n2:出车并查看停车费用\n3:查看车库和街道状态\n");
		scanf("%d",&FLAG);
		switch(FLAG){
		case 1:
			{
				printf("请输入汽车车牌:");
				scanf("%s",&newcar.CarID);
				time(&timep);
				p=gmtime(&timep);
				newcar.in_time_year		=p->tm_year+1900;
				newcar.in_time_month	=p->tm_mon+1;
				newcar.in_time_day		=p->tm_mday;
				newcar.in_time_hour		=p->tm_hour;
				newcar.in_time_minute	=p->tm_min;
				newcar.in_time_second	=p->tm_sec;
				
				if(port.size()<MAXSIZE)
				{
					newcar.local=port.size()+1;
					port.push(newcar);
				}
				else
				{
					newcar.local=block.size()+1;
					block.push(newcar);
				}
				break;
			}
		case 2:
			{
				char carid[20];
				printf("请输入汽车车牌:");
				scanf("%s",&carid);
				int flag;
				while(!port.empty())
				{
					newcar=port.top();
					port.pop();
					flag=0;
					for(int i=0;i<20;i++)
					{
						if(carid[i]!=newcar.CarID[i])
						{
							flag=1;
							break;
						}
					}
					if(flag==0)//我要的就是这辆车
					{
						printf("%s\n入库时间",newcar.CarID);
						printf("%d/%d/%d  %d:%d:%d\n",newcar.in_time_year,newcar.in_time_month,newcar.in_time_day,newcar.in_time_hour,newcar.in_time_minute,newcar.in_time_second);
						printf("从%3d位置撤出",newcar.local);
					}
					else
						tmp.push(newcar);
				}
				while(!tmp.empty())
				{
					port.push(tmp.top());
					tmp.pop();
					port.top().local=port.size();
				}
				if(port.size()<MAXSIZE && !block.empty())
				{
					newcar=block.front();
					printf("现在街道中的%s车入库",newcar.CarID);
					time(&timep);
					p=gmtime(&timep);
					newcar.in_time_year		=p->tm_year+1900;
					newcar.in_time_month	=p->tm_mon+1;
					newcar.in_time_day		=p->tm_mday;
					newcar.in_time_hour		=p->tm_hour;
					newcar.in_time_minute	=p->tm_min;
					newcar.in_time_second	=p->tm_sec;
					newcar.local=port.size()+1;
					port.push(newcar);
					block.pop();
				}
				break;
			}
		case 3:
			{SetColor(10,0);
			//	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED); // 设置为红色
				printf("车库状态:\n");
				if(port.empty())
					printf("没有车\n");
				while(!port.empty())
				{
					newcar=port.top();
					printf("%s\n入库时间(位置%3d号车位)",newcar.CarID,newcar.local);
					printf("%d/%d/%d  %d:%d:%d\n",newcar.in_time_year,newcar.in_time_month,newcar.in_time_day,newcar.in_time_hour,newcar.in_time_minute,newcar.in_time_second);
					tmp.push(newcar);
					port.pop();
				}
				while(!tmp.empty())
				{
					port.push(tmp.top());
					tmp.pop();
				}
				SetColor(14,0);
			//	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);// 设置为黄色    
				printf("\n\n街道状态:\n");
				if(block.empty())
					printf("没有车\n");
				while(!block.empty())
				{
					block.front().local=btmp.size()+1;
					btmp.push(block.front());
					block.pop();
				}
				while(!btmp.empty())
				{
					block.push(btmp.front());
					printf("%s\n开始等待时间(位置%3d号车位)",btmp.front().CarID,btmp.front().local);
					printf("%d/%d/%d  %d:%d:%d\n",btmp.front().in_time_year,btmp.front().in_time_month,btmp.front().in_time_day,btmp.front().in_time_hour,btmp.front().in_time_minute,btmp.front().in_time_second);
					btmp.pop();
				}
				SetColor(15,0);
			//	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);// 设置为白色
			}
		default:
			break;
		}
		printf("\n\n\n");
		system("pause");
    }
    printf("hello world!");
    return 0;
}