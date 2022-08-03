#include <iostream>
class customer // create the customer class
{
	private:
	int unitprice, numberofunits; // declare private variables
	float billAmount; 
	int fnCalculate(); // declare private calculate function 
	
	public:
	int fnInput(); // declare public input function 
	int fnDisplay();// declare public display function 
};

int main()
{
	customer customer1; //creating the object called customer 
	customer1.fnInput();
	customer1.fnDisplay();
}

int customer :: fnInput()//developing input fuction
{
	cout <<"Enter Price per Unit:";
	cin >> unitprice;
	cout <<"Enter Number of Units:";
	cin >> numberofunits;
} 

int customer :: fnCalculate() //developing calculate function 
{
	if (numberofunits<100)
	billAmount = (numberofunits*unitprice)-((numberofunits*unitprice)*3)/100;
	
	else 
	billAmount = numberofunits*unitprice;	
} 

int customer :: fnDisplay()//developing display function
{
	fnCalculate();
	cout <<"Total Amount:"<<billAmount<<endl;
} 
// THE END
