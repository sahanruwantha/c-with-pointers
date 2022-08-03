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
