// backup

#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>

using namespace std;



class invoice
{

	private:
	int id;
	double weight;
	double dimensions;
	string time;
	
	
	public:
	
	invoice()
	{
		id= rand()%1000;
		weight=0.0;
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
	

	
	void input()
	{
 
		ofstream a;
	
		a.open("transaction.txt", ios::app);
		if(a.is_open())  
		{
		cout << "Enter Weight of parcel :" << endl;
		cin >>  weight;
		cout << "Dimensions : " << endl;
		cin >> dimensions;
		cout << "Time : " << endl;
		cin >>  time ; 
		
		a <<"Invoice id " << id << " " << endl;
		a << "Weight of parcel " << weight << endl;
		}
		else
  		{
    		cout<<"file not found";
  		}
		
	}
	int getID()
	{
		return id;
	}
	double getWeight()
	{
		return weight;
	}
	
	void display()
	{
		cout << "ID : "<< id << endl;
		cout << "Weight of parcel :" << weight << endl;
		cout << "Dimensions : " << dimensions << endl;
		cout << "Time : " << time << endl; 
	}
	
	
	
};
	

/////////////////////////////////////////////
class PostOffice: public invoice
{
	public:
	int code;
	string address;
	
	
	PostOffice()
	{
		code=0;
		address="";
	}
	PostOffice(int c, string Address)
	{
		code=c;
		address=Address;
	}
	
	void inputPostOffice()
	{
	int a;
		cout << endl;
		cout << "Enter the city of the post office:" << endl;
		cout << "Press 1: Karachi" << endl << "Press 2: Lahore" << endl << "Press 3: Islamabad" << endl << "Press 4: Peshawer" << endl;
		cin >> a;
		
		if(a == 1)
		{
			code= 12345;
			address="Karachi";
			ofstream k;
	
		k.open("karachi.txt", ios::app);
		if(k.is_open())  
		{
		
		
		k << address << "  GPO"<< endl;
		k << "code: " << code << endl;
		k << "Order no" << getID() << endl;
		}
		else
  		{
    		cout<<"file not found";
  		}
		}
		
		if(a == 2)
		{
			code= 40050;
			address="Lahore";
			ofstream l;
	
		l.open("lahore.txt", ios::app);
		if(l.is_open())  
		{
		
		
		l << address << "  GPO"<< endl;
		l << "code: " << code << endl;
		l << "Order no" << getID() << endl;
		}
		else
  		{
    		cout<<"file not found";
  		}
		}
		
		
		if(a ==3)
		{
			code= 22000;
			address="Islamabad";
			ofstream i;
	
		i.open("islamabad.txt", ios::app);
		if(i.is_open())  
		{
		
		
		i << address << "  GPO"<< endl;
		i << "code: " << code << endl;
		i << "Order no" << getID()<< endl;
		}
		else
  		{
    		cout<<"file not found";
  		}
		}
		if(a == 4)
		{
			code = 25000;
			address="Peshawer";
			ofstream p;
	
		p.open("peshawer.txt", ios::app);
		if(p.is_open())  
		{
		
		
		p << address << "  GPO"<< endl;
		p << "code: " << code << endl;
		p << "Order no" << getID() << endl;
		}
		else
  		{
    		cout<<"file not found";
  		}
		}
	}
	
	int getcode()
	{
		return code;
	}
	
	void diplsay_postoffice()
	{
		cout << "City of Post Office is: " << address << endl;
		cout << "Post Office code is: " << code << endl;
	}



};


//////////////////////////////////////////////////////////////


////////////////////////////////////////

class Mails
{
	private:
	string MailType;
	string urgent;
	invoice *I;
	int rate;
	public:
	Mails()
	{
	MailType=1;
	rate=0;
	}
	
	
	
	
	void calRate(invoice *temp)
	{
	
			I=temp;
			cout << "Enter Y for urgent mails or Enter N for regular mails"<< endl;
			cin >> urgent;
			cout << "Enter Y for Local mail, Enter N for city to city mail" << endl;
			cin >> MailType;
			
	if(urgent == "N") /////////////  regular
	{
	
		
			if(I->getWeight() <= 1000)
			{
				rate= 100;
			}	
			
			else if(I->getWeight()> 1000 && I->getWeight() <= 3000)
			{
				rate = 175;
			}
			else if(I->getWeight() > 3000 && I->getWeight() <= 5000)
			{
				rate = 250;
			}
			else if(I->getWeight() > 5000 && I->getWeight() <= 10000)
			{
				rate = 375;
			}
			else if(I->getWeight() > 10000 && I->getWeight() <= 15000)
			{
				rate = 500;
			}
			else if(I->getWeight() > 15000 && I->getWeight() <= 20000)
			{
				rate = 625;
			}
			else if(I->getWeight() > 20000 && I->getWeight() <= 25000)
			{
				rate = 750;
			}
			else if(I->getWeight() > 25000 && I->getWeight() <= 30000)
			{
				rate = 875;
			}
	}	
	
	else if(urgent == "Y") ///////////////// 
	{
		if(MailType == "Y") ////// Y ==== local
		{
			if(I->getWeight() <= 250)
			{
				rate=51;
			}
			else if(I->getWeight() > 250 && I->getWeight()<= 500)
			{
				rate=64;
			}
			else if(I->getWeight() > 500)
			{
				rate=64;
				for(int i=500; i< I->getWeight(); i=i+500)
				{
					rate = rate + 26;
					
				}
			}
		}
	
		else if(MailType == "N") ///////////// City to  city
		{
			if(I->getWeight() <= 250)
			{
				rate=86;
			}
			else if(I->getWeight() > 250 && I->getWeight() <= 500)
			{
				rate=132;
			}
			else if(I->getWeight() > 500)
			{
			rate=132;
				for(int i=500; i< I->getWeight(); i=i+500)
				{
					rate = rate + 43;
				}
			}
		}
	
	}
	}
	
	void displayRate()
	{
		cout << "Rate = " << rate;
		ofstream b;
	
		b.open("transaction.txt", ios::app);
		if(b.is_open())  
		{
		
		b << "Rate = " << " " << rate << endl;
		}
		else
  		{
    		cout<<"file not found";
  		}
		
	
	}
	
	int getrate()
	{
		return rate;
	}
	


};

///////////////////////////////////////
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
/*	// Parameterized constructor
	addressNo(string c, string A, int s, int h)
	{
		city=c;
		Area=A;
		streetNo=s;
		houseNo=h;
	}*/
	
	void AddressInfo()
	{
	ofstream y;
	
		y.open("customer.txt", ios::app);
		if(y.is_open())  

		{
         
        	
		cout << "Enter your Address" << endl;
		cout << "Enter your city" << endl;
		cin >> city;
		cout << "Enter your area" << endl;
		cin >> Area;
		cout << "Enter street # " << endl;
		cin >> streetNo;
		cout << "Enter houseNo" << endl;
		cin >> houseNo;
		cout << endl;
		
		                      
         	y << "City: "  << city << endl;
         	y << "Area: "<< Area << endl;
         	y << "Street#  " << streetNo << endl;
         	y << "House#  " << houseNo <<  endl;
         	
        	}	
  	
  		else
  		{
    		cout<<"file not found";
  		}
		
		
		
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
	int getStreetNo()
	{
		return streetNo;
	}
	int getHouseNo()
	{
		return houseNo;
	}
	
	
	void display()
	{
		cout << "City:" << getCity() << endl;
	 	cout << "Area:" << getArea() <<  endl;
	 	cout << "Street #: " << getStreetNo() << endl;
	 	cout << "House #:" << getHouseNo() << endl; 
	
	}
};

/////////////////////////////////////
class Customer: public address
{
	private:
	string Name;
	int CustID;
	string ContactNo;
	
	
	public:
	Customer()
	{
		CustID=0;
		Name="";
		ContactNo="";
	}
	Customer(int customer, string name, string No)
	{
		CustID= customer;
		Name=name;
		ContactNo= No;
	}
	
	void input()
	{
		ofstream x;
		x.open("customer.txt", ios:: app);
		if(x.is_open())  

		{
         
        	cout << "Enter your Name" << endl;
		cin >> Name;
		cout << "Enter your contact number " << endl;
		cin >> ContactNo;
		
		                      
         	x << "Customer Name: " << Name << endl;
         	x << "Contact No " << ContactNo << endl;
         	
        	}	
  		
  		else
  		{
    		cout<<"file not found";
  		}
		
		
	
	
	}
	
	void Display()
	{
	
	 cout << "Name: " << Name << endl;
	 cout << "Contact No: " << ContactNo << endl;
	 
	}

};

///////////////////////////////


class payment
{

	private:
	int totalIncome;
	
	public:
	payment()
	{
		totalIncome=0;
	}
	void update_income(int money )
	{
		totalIncome= totalIncome + money;
	}
	void display_income()
	{
		cout << "Total payment collected: " << totalIncome << endl;
	}

};


                ///////////////////////////////////////

class GPO
{
private:
public:
	void GPOmenu(){
		int choice=1;
		
		while(choice == 1)
		{
		address a;
		Customer c;
		invoice i;
		Mails m;   
		PostOffice P;
		payment p1;   
		      
		c.input();
		a.AddressInfo();
		i.input();
		m.calRate(&i);
		p1.update_income(m.getrate());
		///////////////////////////////////////
		c.Display();
		a.display();
	        i.display();
		m.displayRate();P.inputPostOffice();
		P.diplsay_postoffice();
		p1.display_income();
		cout << "\nEnter 1 to register customer again or any key to exit" << endl;
		cin >> choice;
		
		}
		
		 
	}	

};






class Head_of_GPO
{
	public:
	string emp_name;
	string password;
	int emp_id;
	int emp;
	int emp_type;
	
	void emp_menu()
	{
		cout << "**********Welcome Back**********\n" << endl;
		cout << "Press 1 if already registered \nPress 2 if new employee" << endl;
		cin >> emp;
		if(emp ==1)
		{
			
				cout << "Enter Your name" << endl;
				cin >> emp_name;
				cout << "Enter your password" << endl;
				cin >> password;
				emp_id= rand()%1000;
				cout << "Employee ID: " << emp_id << endl;
	
		}
		else
		{
			cout << "Enter 1 for Clerk \nEnter 2 for Postman \nEnter 3 for Accountant" << endl;
			cin >> emp_type;
			if(emp_type ==1)
			{
				ofstream e;
				e.open("employee.txt", ios:: app);
				if(e.is_open())  

			{	
				cout << "Enter Your name" << endl;
				cin >> emp_name;
				cout << "Enter your password" << endl;
				cin >> password;
				cout << "You have been registered" << endl;
				emp_id= rand()%1000;
				
				
		               e << "Employee Type: Clerk" << endl; 
         			e << "Employee name: " << emp_name << endl;
         			e << "Employee ID: " << emp_id << endl;
				e << "Employee password: " << password << endl;          	
        		}	
			
			}
			else if(emp_type ==2)
			{
				ofstream e;
				e.open("employee.txt", ios:: app);
				if(e.is_open())  
				{
					cout << "Enter Your name" << endl;
					cin >> emp_name;
					cout << "Enter your password" << endl;
					cin >> password;
					cout << "You have been registered" << endl;
					emp_id= rand()%1000;
					
					
		               	e << "Employee Type: Postman" << endl; 
         				e << "Employee name: " << emp_name << endl;
         				e << "Employee ID: " << emp_id << endl;
					e << "Employee password: " << password << endl;          	
        			}	
			}
			else if(emp_type == 3)
			{
				ofstream e;
				e.open("employee.txt", ios:: app);
				if(e.is_open())  
				{
					cout << "Enter Your name" << endl;
					cin >> emp_name;
					cout << "Enter your password" << endl;
					cin >> password;
					cout << "You have been registered" << endl;
					emp_id= rand()%1000;
					
				
		               	e << "Employee Type: Accountant" << endl; 
         				e << "Employee name: " << emp_name << endl;
         				e << "Employee ID: " << emp_id << endl;
					e << "Employee password: " << password << endl;          	
        			}	
			}
		}
	}


};

/////////////////////////////

int main()
{
int choice=0;

	cout << "		  *****WELCOME TO GENERAL POST OFFICE*****" << endl << endl;
	cout << "Enter 1 for Customer\nEnter 2 for Employee" << endl;
	cin >> choice;
	
	if (choice == 1)
	{
		GPO tester;
		tester.GPOmenu();
	
	}
	
	else
	{
		
		Head_of_GPO hog;
		hog.emp_menu();
	}
	
	



	return 0;
}
