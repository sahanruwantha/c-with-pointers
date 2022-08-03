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
		do
		{
			switch(os)
			{
				case 1:
				outf <<"os:android";
				
				case 2:
				outf <<"os:harmony os";
				
				case 3:
				outf <<"os:none";
				
				/*if(os != 1 || os != 2 || os != 3 );
				{
					cout << "wrong input enter again" << endl;
					cout <<"os: 1.android\t2.harmony os\t3.without os";
					cin >> os;
				}*/
			}
		}while(os != 1 || os != 2 || os != 3 );
		cout <<"ram in gb:";
		cin >> ram;
		do
		{
			switch(ram)
			{
				case 1:
				outf <<"ram:1 GB";
				
				case 2:
				outf <<"ram:2 GB";
				
				case 3:
				outf <<"ram:3 GB";
				
				case 4:
				outf <<"ram:4 GB";
			}
			
			if(ram != 1 || ram != 2 || ram != 3 || ram != 4)
			{
				cout << "wrong input enter again" << endl;
				cout <<"ram in gb:";
				cin >> ram;	
			}
			
		}while(ram != 1 || ram != 2 || ram != 3 || ram != 4);
		cout <<"cpu in num of cores:";
		cin >> cpu;
		do
		{
			switch(cpu)
			{
				case 1:
				outf <<"ram:2 CORES";
				
				case 2:
				outf <<"ram:4 CORES";
				
				case 3:
				outf <<"ram:3 CORES";
				
				case 4:
				outf <<"ram:4 CORES";
			}
			
			if(cpu != 1 || cpu != 2 || cpu != 3 || cpu != 4)
			{
				cout << "wrong input enter again" << endl;
				cout <<"cpu in num of cores:";
				cin >> cpu;	
			}
			
		}while(ram != 1 || ram != 2 || ram != 3 || ram != 4);
		cout <<"colour:1.black\t2.white\t3.gold4.blue";
		cin >> colour;
		do
		{
			switch(colour)
			{
				case 1:
				outf <<"colour:black";
				
				case 2:
				outf <<"colour:white";
				
				case 3:
				outf <<"colour:gold";
				
				case 4:
				outf <<"colour:blue";
			}while(colour != 1 || colour != 2 || colour != 3 || colour != 4);
			
			if(colour != 1 || colour != 2 || colour != 3 || colour != 4)
			{
				cout << "wrong input enter again" << endl;
				cout <<"colour:";
				cin >> colour;	
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
