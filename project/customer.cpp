//


#include<iostream>
#include<cstring>

using namespace std;
	


class customer: public address
{
	private:
	int CustomerID;
	string Name;
	int contactNo;
	
	public:
	customer()
	{
		CustomerID=0;
		Name="";
	}
	customer(int Customer, string name, int No)
	{
		CustomerID= CUstomer;
		Name=name;
		contactNo= No;
	}

	// setters
	
	void setID(int id)
	{
		CustomerID=id;
	}
	void setName(int n)
	{
		Name=n;
	}
	void setNo(int n)
	{
		contactNo=n;
	}
	
	// getters
	
	int getID()
	{
		return CustomerID;
	}
	string getName()
	{
		return Name;
	}
	string getNo()
	{
		return contactNo;;
	}
};
