#include <bits/stdc++.h>
#include <windows.h>	//for SetConsoleTextAttribute
#include <conio.h>	//for getche()
//getche()library function---read characters

void show(int a,int b)		//function to show position
{
	std::cout<<"\nYou're at ("<<a<<"),"<<'('<<b<<')'<<std::endl;	
}

int main()
{
	typedef char ch;
	ch dir='a';
	 int x=10,y=10;
	 signed int k=~15;	//-16
	bool flag;
	std::cout<<"---Type Enter to quit---\n";
	std::cout<<"---w,a,s,d to move north west south east---\n";
	std::cout<<"---x,y---\n";
	show(x,y);
	flag=false;
	while(dir!='\r')
	{
		std::cout<<"GO : ";	
		dir=getche();
		switch(dir)
		{
			case 'w':
			y++;
			show(x,y);
			break;

			case 'd':
			x++;
			show(x,y);
			break;

			case 'a':
			x--;
			show(x,y);
			break;

			case 's':
			y--;
			show(x,y);
			break;

			case '\r':
			std::cout<<"\n..You have decided to go to sleep..";
			break;

			default:
			std::cout<<"\n..It's (w,a,s,d).."<<"\n..Are you stupid?..\n";
			break;
		}
		if((x==16 && y==16)||(x==-16 && y==-16))
		{
			std::cout<<"..You have reached the world border..\n";
		}else if((x>16 || y>16) || (x<k || y<k))
		{
			std::cout<<"..You have passed the border..\n";
			std::cout<<"..You have been shot dead by the guards..\n";
			dir='\r';
			flag=true;
		}
	}
	if(flag==true)
	{
		//int a=4;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		FlushConsoleInputBuffer(hConsole);
		SetConsoleTextAttribute(hConsole, 12);
		std::string lose="\n**Game Over**";
		int g;
		for(g=0;g<lose.length();g++)
		{
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout<<lose[g];
		}
		SetConsoleTextAttribute(hConsole, 15);
		
	}
}