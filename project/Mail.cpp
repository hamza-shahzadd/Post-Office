//
#include<iostream>
#include<cstring>
using namespace std;




class mail
{
	private:
	bool MailType;
	invoice I;
	int rate;
	
	public:
	mail()
	{
		MailType=1;                    ///// 1 = local
		
	}
	mail(bool type)
	{
		MailType=type;
	}

	//setter
	void set(bool M_T)
	{
		MailType=M_T;
	}
	
	// getters
	bool getMailType()
	{
		return MailType;	
	}
	
	void local ()
	{
		if(MailType == 1)
		{
			if(I.weight  <= 1000)
			{
				rate= 100;
			}	
			
			else if(I.weight > 1000 && I.weight <= 3000)
			{
				rate = 175;
			}
			else if(I.weight > 3000 && I.weight <= 5000)
			{
				rate = 250;
			}
			else if(I.weight > 5000 && I.weight <= 10000)
			{
				rate = 375;
			}
			else if(I.weight > 10000 && I.weight <= 15000)
			{
				rate = 500;
			}
			else if(I.weight > 15000 && I.weight <= 20000)
			{
				rate = 625;
			}
			else if(I.weight > 20000 && I.weight <= 25000)
			{
				rate = 750;
			}
			else if(I.weight > 25000 && I.weight <= 30000)
			{
				rate = 875;
			}
			
		}
		
		
	}
};
