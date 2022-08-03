#include <iostream.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <fstream.h>

using namespace std;

class product
{
	public:
	/*fnset_serialnum()
	{
		for(int count = 0; count == objnum; count ++)
		{
				
		}
	}*/
};

class computers : public product
{
	public:
	string brand;
	int os, ram, cpu, colour;
	void fngetdata()
	{
		ofstream outf("computers.txt");
		cout <<"brand name:";
		cin >> brand;
		outf <<"brand:"<<brand;
		cout <<"os: 1.android\t2.harmony os\t3.without os";
		cin >> os;
		while(os != 1 || os != 2 || os != 3 )
		{
			if(os == 1 || os == 2 || os == 3)
			{
				switch(os)
				{
					case 1:
					outf <<"os:android\n";
					
					case 2:
					outf <<"os:harmony os\n";
					
					case 3:
					outf <<"os:none\n";
				}
				break;
			}
			else
			{
				cout << "wrong input enter again" << endl;
				cout <<"os: 1.android\t2.harmony os\t3.without os";
				cin >> os;
			}
		}
		cout <<"ram: 1.2 GB\t2.4 GB\t3.8 GB";
		cin >> ram;
		while(ram != 1 || ram != 2 || ram != 3 )
		{
			if(ram == 1 || ram == 2 || ram == 3)
			{
				switch(ram)
				{
					case 1:
					outf <<"ram:2 GB\n";
					
					case 2:
					outf <<"ram:4 GB\n";
					
					case 3:
					outf <<"ram:4 GB\n";
				}
				break;
			}
			else
			{
				cout << "wrong input enter again" << endl;
				cout <<"ram: 1.2 GB\t2.4 GB\t3.8 GB";
				cin >> ram;
			}
		}
		cout <<"cpu: 1.2 cores\t2.4 cores\t3.8 cores";
		cin >> cpu;
		while(cpu != 1 || cpu != 2 || cpu != 3 )
		{
			if(cpu == 1 || cpu == 2 || cpu == 3)
			{
				switch(cpu)
				{
					case 1:
					outf <<"cpu:2 GB\n";
					
					case 2:
					outf <<"cpu:4 GB\n";
					
					case 3:
					outf <<"cpu:4 GB\n";
				}
				break;
			}
			else
			{
				cout << "wrong input enter again" << endl;
				cout <<"cpu: 1.2 cores\t2.4 cores\t3.8 cores";
				cin >> cpu;
			}
		}
		cout <<"cpu: 1.black\t2.white\t3.gold";
		cin >> colour;
		while(colour != 1 || colour != 2 || colour != 3 )
		{
			if(colour == 1 || colour == 2 || colour == 3)
			{
				switch(colour)
				{
					case 1:
					outf <<"colour:black\n";
					
					case 2:
					outf <<"colour:white\n";
					
					case 3:
					outf <<"colour:gold\n";
				}
				break;
			}
			else
			{
				cout << "wrong input enter again" << endl;
				cout <<"cpu: 1.black\t2.white\t3.gold";
				cin >> colour;
			}
		}
	}
};

class phones : public product
{
	string brand, os, ram, cpu, colour;
	
	public:
	
	void fngetdata()
	{
		ofstream outf("computers.txt");
		cout <<"brand:";
		cin >> brand;
		outf <<"brand:"<<brand;
		cout <<"os:";
		cin >> os;
		outf <<"os:"<<os;
		cout <<"ram:";
		cin >> ram;
		outf <<"ram:"<<ram;
		cout <<"cpu:";
		cin >> cpu;
		outf <<"cpu:"<<cpu;
		cout <<"colour:";
		cin >> colour;
		outf <<"colour:"<<colour;
	}
};

void main()
{
	int type;
	int objnum;
	cout << "1. computer \n2. phones\nyour input:";
	cin>>type;
	computers *computer;
	phones *phone;
	if(type == 1)
	{
		cout << "how many computers you want:" <<endl;
		cin >> objnum;
		computer = new computers[objnum];
		for(int count = 0; count <= objnum; count++)
		{
			if(count == objnum)
			{
				break;
			}
			computer[count].fngetdata();
		}
	}
	else if(type == 2)
	{
		cout << "how many phones you want:" <<endl;
		cin >> objnum;
		phone = new phones[objnum];
		for(int count = 0; count <= objnum; count++)
		{
			if(count == objnum)
			{
				break;
			}
			phone[count].fngetdata();
		}
	}
	else
	{
		cout << "invalid input" <<endl;
	}
}
