//****************************************************************************
//Filename: Creg_C_Sullivan_Assignment_6
//Purpose:  Defining a class Pizza
//Author:   Creg C. Sullivan Sr.
//Date:     March 12, 2011
//****************************************************************************



#include <iostream>
using namespace std;
void pause(void);

class Pizza
{
public:
char custCrust;   // stores P,D or H to indicate pan, deep dish or hand tossed crust           
char custSize;    // stores S, M or L to indicate small, medium or large pizza
int pepperoni;    // stores number of pepperoni toppings for this pizza            
int onionPepper;  // stores number of onion& pepper toppings for this pizza
int totalTop;

void setCrust(char ctype);
void setSize(char size);
void setPepperoni(int quanity);
void setOP(int quanity);
void resetToppings();

const double computePrice();
const double totalToppings();
const char getCrust();
const char getSize( );  
};

int main()
{
    Pizza  custPizza;
	char   custPep;
	char   custOnAnPepr;
	double totalCost;
	double costOfTop;
	double computePrice();
	

	
	cout << "\nWelcome to The Pizza Palace\n";
    cout << "\nWhere piping hot pizza is our speciality\n";
	cout << "\nWhat type of crust would you like, today?\n"
		 << "\n'P' pan, 'D' deep dish, 'H' hand tossed.\n";
	cin  >> custPizza.custCrust;
	
	cout << "\nWhat size would you like?\n"
		 << "\n'S' small, 'M' medium, 'L' large.\n";
	cin  >> custPizza.custSize;

	cout << "\nWould you like pepperoni? (y/n) \n";
	cin  >> custPep;
	if (custPep == 'y' || custPep == 'Y')
		cout << "\nHow much pepperoni would you like?\n";
		cin >> custPizza.pepperoni;

	    cout << "\nWould you like onions peppers? (y/n) \n";
        cin  >> custOnAnPepr;
	if (custOnAnPepr == 'y' || custOnAnPepr == 'Y')
		cout << "\nHow much onions and peppers would you like?\n";
		cin  >> custPizza.onionPepper;
	
	
        cout << "\nThe total cost of your pizza is  \n";
        cout <<custPizza.computePrice();
   	    pause();
   	    return 0;
}
//****************************************
// computePrice
//**************************************** 


const double Pizza::computePrice(void)
{

const double PanCrustSm  =  10.00;
const double PanCrustMd  =  14.00;
const double PanCrustLg  =  17.00;
const double DeepCrustsm =  10.00;
const double DeepCrustMd =  14.00;
const double DeepCrustLg =  17.00;
const double HandTosSm   =  10.00;
const double HandTosMd   =  14.00;
const double HandTosLg   =  17.00;
const double toppings    =   2.00;
double costOfPizza;
double totalCost ;
double costOfTop;
int    quanity;


	if (custCrust == 'P' && custSize == 'S')
		costOfPizza = PanCrustSm;
    if (custCrust == 'P' && custSize == 'M')
		costOfPizza = PanCrustMd;
    if (custCrust == 'P' && custSize == 'L')
		costOfPizza = PanCrustLg;
    if (custCrust == 'D' && custSize == 'S')
		costOfPizza = DeepCrustsm;
    if (custCrust == 'D' && custSize == 'M')
		costOfPizza = DeepCrustMd;
	if (custCrust == 'D' && custSize == 'L')
		costOfPizza = DeepCrustLg;
	if (custCrust == 'H' && custSize == 'S')
		costOfPizza = HandTosSm;
	if (custCrust == 'H' && custSize == 'M')
		costOfPizza = HandTosMd;
	if (custCrust == 'H' && custSize == 'L')
		costOfPizza = HandTosLg;

}

//****************************************************
// totalToppings
//****************************************************

const double Pizza::totalToppings()
{
	totalTop = pepperoni + onionPepper;
	return totalTop;
}

//****************************************************
// Crust type
//****************************************************

void Pizza::setCrust(char ctype)
{
	custCrust = ctype;
}
//****************************************************
// getCrust
//****************************************************

const char Pizza::getCrust()
{
	return custCrust;
}
//*****************************************************
// setSize
//*****************************************************

void Pizza::setSize(char size)
{
	custSize = size;
}
//*****************************************************
// getSize
//*****************************************************

const char Pizza::getSize()
{
	return custSize;
}
//*****************************************************
// setPeperoni
//*****************************************************
void Pizza::setPepperoni(int quanity)
{
	pepperoni = quanity;
}
//*****************************************************
// setOnionPepper
//*****************************************************

void Pizza::setOP(int quanity)
{
	onionPepper = quanity;
}
//*****************************************************
// reset
//*****************************************************

void Pizza::resetToppings()
{
	pepperoni = 0;
	onionPepper = 0;
}
//*****************************************************
//pause
//*****************************************************
    void pause(void)
{
     cout << "\n\n";
     system("PAUSE");
     cout << "\n\n";
     return;
}
//***********************
//end of code
//***********************

