/*(Q)Write a CreditCardHolder class with name and address and monthly_payment as member
variables(where name and address are userdefined).Take the input from user and display the data .*/

#include <iostream>
using namespace std;
class Complex{
    public:
   int real,imaginary;
   
   //Default constructor
   Complex()
   {
   }
   
   //Parameterized
   Complex(int r, int imag) 
    { 
        real = r; 
        imaginary =imag; 
    } 
     Complex addComplex(Complex c1, Complex c2) 
    { 
        //temporary variable for adding
        Complex var_temp; 
   
        // add real part of complex numbers 
        var_temp.real = c1.real + c2.real; 
   
        // add Imaginary part of complex numbers 
        var_temp.imaginary = c1.imaginary + c2.imaginary; 
        return var_temp; 
    } 
	~Complex()
	{
	cout<<"\nthe addition is over\n"<<endl;
	}
}; 

int main() 
{ 
  Complex c3; 
  Complex c1(2,2); 
  
 cout<<"1st Complex no:"<<c1.real<<"+i"<<c1.imaginary<<endl; 
 
  Complex c2(1,2); 
  cout<<"2nd Complex no:"<<c2.real<<"+i"<<c2.imaginary<<endl; 
  
  c3 = c3.addComplex(c1,c2); 
  cout<<"Sum="<<c3.real<<" +i"<<c3.imaginary;
  return 0;
}
