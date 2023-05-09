#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
//create namespace
/*Branch name
*
*
*/
//prototype
//--------------------------
//micro
//---------------------
//global variable
//-------------------
//struct
//-------------------
//union
//-------------------
//class
//-------------------
int main(int argc, char** argv)
{

int n;   //variable for get number

//Get number of index array
cout<<"Enter Number of array = ";
cin>>n;

int a[n];   //Define array

//Loop for get value of array random number 1~100
for(int i=0; i<n; ++i)
{
    
a[i] = rand() % 100;

}

//Show the value of array

for(int j=0; j<n; ++j)
{

cout<<"a["<<j<<"] = "<<a[j];

}






getch();
}
//function variable
//--------------------------
//functions