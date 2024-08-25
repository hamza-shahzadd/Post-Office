//


#include<iostream>
using namespace std;




class invoice:public customer
{
	private:
	int id;
	double weight;
	double dimensions;
	string time;
	
	
	public:
	
	invoice()
	{
		ID= 0;
		w=0.0;
		dimensions=0.0;
		time="";
	}
	
	invoice(int ID, double w, double d, string t)
	{
		id=ID;
		weight=w;
		dimensions=d;
		time=t;
		
	}
	void Id_generator()                         ///// generates random number 
	{
		int U;
		
		srand(time(0));
   		for(int i=0; i<1; i++)
   		{
   			U = rand() % 1000;
   			id=U;
		}
	
	}
	
	
	
	
	
};
