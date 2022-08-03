#include<iostream.h>
#include<fstream.h>

class student
{
	public:
	char name[25], res;
	int marks;
	void writeData()
	{
		ofstream outf("student.txt");
		do{
			cout << "Enter a Name - " ;
			cin >> name;
			cout << "Enter a Marks - " ;
			cin >> marks;
			outf << name ;
			outf << "\n" ;
			outf << marks ;
			outf << "\n" ;
			cout << "Do you want to add another record - ";
			cin >> res;
		}while(res == 'y');
		outf.close();
	}
	void readData()
	{
		ifstream inf("student.txt");
		inf >> name;
		inf >> marks;
		while(inf)
		{
			cout << "Name - " << name << endl;
			inf >> name;
			cout << "Marks - " << marks << endl;
			inf >> marks;
	}
		inf.close();
	}
};
main()
{
student obj;
obj.writeData();
obj.readData();
}

/*void writeData()
{
ofstream outf1("lMarks.txt"),outf2("hMarks.txt");

do{
cout << "Enter student name - " ;
cin >> name;
cout << "Enter makrs - " ;
cin >> mark;

if(mark > 50)
{
outf2 << name << "\n";
outf2 << mark << "\n";
}
else
{
outf1 << name << "\n";
outf1 << mark << "\n";
}


cout << "Do you want to add another record - ";
cin >> res;

}while(res == 'y');

outf1.close();
outf2.close();

}*/
