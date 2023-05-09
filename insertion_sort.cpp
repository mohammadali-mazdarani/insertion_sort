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

//Seperator 
cout<<endl<<"--------------------"<<endl;

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
cout<<endl;

}

//Sepetator
cout<<endl<<"-------------------------"<<endl;

//Sort this array
for(int i=1;i<n;++i)
{
    int j;
    int key = a[ i ];
    for( j=i-1; j>=0; j-- )
    {
    if(a[ j ] > key)
    {
        a[ j + 1 ] = a[ j ];
    }
     
     else break;

    }
}

//Seperator
cout<<endl<<endl<<"--------------------------"<<endl;




getch();
}
//function variable
//--------------------------
//functions