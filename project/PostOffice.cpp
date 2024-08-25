//

#include<iostream>
#include<cstring>
using namespace std;




class postOffice
{
	private:
	int code;
	string address;
	
	public:
	postOffice()
	{
		code=0;
		address="";
	}
	postOffice(int c, string Address)
	{
		code=c;
		address=Address;
	}
	
	// getters
	
	int getCode()
	{
		return code;
	}
	string getAddress()
	{
		return address;
	}
	// setters
	
	void setCode(int c)
	{
		code=c;
	}
	void setAddress(string A)
	{
		address=A;
	}
};
