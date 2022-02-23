#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main ()
{
int num1 , num2 , num3 ;
int sum ; 
srand ( time(0) );

num1= rand() % 100 ;
cout << num1 << endl;

num2= rand() % 100 ;
cout << num2 << endl;

num3= rand() % 100 ;
cout << num3 << endl;

sum = num1 + num2 + num3;

}
