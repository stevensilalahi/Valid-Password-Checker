//STEVEN SILALAHI
//CS 421
//Programming Assignment 1

#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(int agrc, char *argv[])
{

//Variables
  string password;
  
  //Password condition variables
  int upperCase = 0;
  int lowerCase = 0;
  int digit = 0;
  int special = 0; 
  int state=0;
  
  int c=0;
  int valid= 0;

  int passLength;


do //loops if the password is not valid
  {
  cout << "Enter your password: " <<endl;
  cin >> password;

  passLength= password.length();
  
  // cout << "length " << passLength << endl;
  // cout<< "Your password is " << password <<endl;
  
  std:: cout<< "Cuttent state is q"<<state <<endl;
  while(password[c])
    {
      // std::cout << "Reading "<< password[c] << std::endl;
      // std::cout << "Current state is q"<< state<<endl;
      
      if(isupper(password[c]))
	{
	  upperCase++;
	}
      else if(islower(password[c]))
	{
	  lowerCase++;
	}
      else if(isdigit(password[c]))
	{
	  digit++;
	}
      else if (ispunct(password[c]))
	{
	  special++;
	}
      state++;
     c++;
     std::cout<<"Reading "<<password[c]<<std ::endl;
     std::cout<<"Current state is q"<< state<<endl;
    }
  
  // cout<< "Upper" << upperCase <<endl;
  // cout<< "Lower " << lowerCase <<endl;
  // cout<< "Digit" << digit <<endl;
  
  //Checks password condition
  if(passLength>7 && passLength <11 && upperCase>1 && digit >1 && lowerCase >0 && special >0)
    {
      cout<< "Password is valid" <<endl;
      valid++;
    }  
  else 
    {
      cout<< "Password is not valid, try again!" <<endl;
      
    }
  //Resets all values to zero
  upperCase=0;
  lowerCase=0;
  digit=0;
  special=0;
  state=0;
  password= "";
  c=0;
  
  }while(valid<1);
}
