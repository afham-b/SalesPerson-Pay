//Afham Bashir. 10.2.19.

#include <iostream>     
#include <iomanip>      //allows use of setprecsion and setw   
#include <fstream>      //needed to input file 
#include <string>       //allows the assignment of string variables 
using namespace std;

int main() {
  string filename;      //creates string variable for the name of the input file
  string first_name;    //declares string variable for first name of the saleperson from the input file 
  string last_name;     //declares string variable for last name of the salesperson fron input file. 

  double base_salary;      //dollar amount for the salesperson salary.
  double total_sales;      //dollar ammount of the sales the saleperson makes from the input filename
  double commision_rate;   //a rate for commision of the salesperson that will be from the input file 
  double commision_pay;    //declares variable for the commision that salesperson will make
  double expenses;         //declares a varaibles for the dollar amount expenses of the salesperson.
  double gross_pay;        //declares a varaible for the total pay the saleperson will receive. 

  ifstream inputfile;     //allows the use of input file 
 
  cout <<"Enter the input file name: " <<endl;  //prompts user for the name of the input file 
  getline(cin,filename);                  //assigns the inputed file name to the string for filename
  inputfile.open(filename);               //opens the specified input file. 

  inputfile >> first_name >>last_name;       //reads the input file for the strings of first and last name
  inputfile >> base_salary >>commision_rate; //assign base salary & commision rate variable from input file
  inputfile >> total_sales;                  //assigns total sales of saleperson from input file
  inputfile >> expenses;                     //asssgns variable for expenses of the salesperson from input 

  commision_pay=total_sales*(commision_rate/100);//commision pay is the total sales made by the salesperson times the saleperson's commision rate 
  gross_pay= base_salary+commision_pay+expenses;//total pay of the salesperson is the base salary plus their commisions plus compensation for their expenses. 

  inputfile.close();                      //closes the input file. 

  cout << fixed<<setprecision(2) <<endl;  //display calculated or assigned dollar amount to 2 decimals. 
  cout << "Payroll data for " <<first_name <<" "<<last_name<<endl; // outputs payroll data for the specific name string in the input file 
  cout << endl;                          //adds extra line 
  cout << setw(7)<<"Base Salary $" <<base_salary<<endl;    //outputs alligned base salary
  cout << setw(7)<<"Commision   $ " <<commision_pay<<endl; //outputs the calculated commision
  cout << setw(7)<<"Expenses    $ " <<expenses<<endl;      //outputs the expenses of salesperson
  cout << setw(7)<<"Total       $"   << gross_pay<<endl;   //outputs calculated total pay of salesperson. 

return 0;
}