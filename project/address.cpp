//              


#include<iostream>
#include<cstring>
using namespace std



class address
{
	
	private:
	
	string city;
	string Area;
	int streetNo;
	int houseNo;
	
	public:
	
	// default constructor
	address()
	{
	city="";
	Area="";
	streetNo=0;
	houseNo=0;
	}
	// Parameterized constructor
	addressNo(string c, string A, int s, int h)
	{
		city=c;
		Area=A;
		streetNo=s;
		houseNo=h;
	}
	
	
	// setters
	void setCity(string C)
	{
		city=C;
	}
	void setArea(string a)
	{
		Area=a;
	}
	void setStreetNo(int Sno)
	{
		streetNo=Sno;
	}
	void sethouseNo(int hNo)
	{
		houseNo=hNo;
	}
	
	
	// getters
	string getCity()
	{
		return city;
	}
	string getArea()
	{
		return Area;
	}
	string getStreetNo()
	{
		return StreetNO;
	}
	string getHouseNo()
	{
		return HouseNo;
	}
	
};
