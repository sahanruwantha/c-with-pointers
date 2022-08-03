 #include<iostream>

class equipment
{	private:D
	int equipmentcode, equipmentqty;
	float equipmentvalue, totalvalue;
	
	public:
	void fnsetdata(int a,float b,int c)
		{
		  equipmentcode=a;
		  equipmentvalue=b;
		  equipmentqty=c;  
	    }
	void fngetTotalValue()
		{
			totalvalue=equipmentvalue*equipmentqty;
		}
	void fnShowDetails()
		{
			cout<<"Item code-"<<equipmentcode<<endl;
			cout<<"Total value of equipments Rs:"<<totalvalue<<endl;
		} 
};



int main()
{
	equipment obj1;
    obj1.fnsetdata(1,100,10);
	obj1.fngetTotalValue();
	obj1.fnShowDetails();
	
	equipment obj2;
	obj2.fnsetdata(2,200,20);
	obj2.fngetTotalValue();
	obj2.fnShowDetails();
	
	equipment obj3;
	obj3.fnsetdata(3,300,30);
	obj3.fngetTotalValue();
	obj3.fnShowDetails();
	
	equipment obj4;
    obj4.fnsetdata(4,400,40);
	obj4.fngetTotalValue();
	obj4.fnShowDetails();
	
	equipment obj5;
	obj5.fnsetdata(5,500,50);
	obj5.fngetTotalValue();
	obj5.fnShowDetails();
	
	equipment obj6;
	obj6.fnsetdata(6,600,60);
	obj6.fngetTotalValue();
	obj6.fnShowDetails();
	
	equipment obj7;
    obj7.fnsetdata(7,700,70);
	obj7.fngetTotalValue();
	obj7.fnShowDetails();
	
	equipment obj8;
	obj8.fnsetdata(8,800,80);
	obj8.fngetTotalValue();
	obj8.fnShowDetails();
	
	equipment obj9;
	obj9.fnsetdata(9,900,90);
	obj9.fngetTotalValue();
	obj9.fnShowDetails();
	
	equipment obj10;
	obj10.fnsetdata(10,1000,10);
	obj10.fngetTotalValue();
	obj10.fnShowDetails();
}

#include <iostream>

class vehicle
{
	private:
		int noOfkms, chrPkm;
	
	public:
		void funInpnut()
			{
				cout << "Enter no of kms travelled - " ;
				cin >> noOfkms;
				cout << "Enter charge per 1 km - " ;
				cin >> chrPkm;
			}
		int funCalculate()
			{
				return (noOfkms * chrPkm);
			}
		void funDisplay()
			{
				cout << "Income - " << funCalculate() ;
			}
};
int main ()
{
	vehicle vehicle1;
	vehicle1.funInpnut();
	vehicle1.funDisplay();
}

