#include <iostream.h>
#include <fstream.h>
using namespace std;

void main()
{
	char name[10];
	ofstream outf("texdt.txt");
	cout <<"enter name:"; cin >> name;
	outf.seekp(5);
	cout <<"current position:" <<outf.tellp()<<endl;
	outf << name;
	cout <<outf.tellp()<<endl;
}
