//The include directive
#include<iostream>
using namespace std;

//Defining the subject passmark or pass score
#define PASS 70

// The main function
int main()
{

//Variable definition
int ENG ;   //= 69;
int MATH ;  //= 88;
int KIS ;   //= 76;
int HISTORY ;   //= 87;

//The boolean variable
bool didpasscourse = true;

// The count variable to store the subject count.
int count = 0;


// The 4 subjects input
cout<<"Input score in English: "<<endl;
cin>>ENG;
cout<<"Input score in Maths: "<<endl;
cin>>MATH;
cout<<"Input score in Kiswahili: "<<endl;
cin>>KIS;
cout<<"Input score in History: "<<endl;
cin>>HISTORY;

//Using the nested if statements to test for the subjects against the pass score
if(ENG >= PASS)
{
    count = count + 1;
}
if (MATH >= PASS)
{
    count = count + 1;
}
if (KIS >= PASS)
{
    count = count + 1;
}
if (HISTORY >= PASS)
{
    count = count + 1;
}
else
{
    count = count;
}
///*

//Storing the subject count for subjects above the subject passscore to the count variable
if(count >=3)
{
    didpasscourse = count;
    //didpasscourse = "TRUE";
    //return didpasscourse;
}
else
{
    didpasscourse = false;
    //didpasscourse = "FALSE";
    //return  didpasscourse;  //didpasscourse;
}
//*/

//Printing the output based on the boolean variable.
if(didpasscourse)
//if(count >= 3)
{
    cout<<"Passed."<<endl;
}
else
{
    cout<<"Failed."<<endl;
}
//cout<<"Exit.";

//You can ignore these ******
/*
        ****
*/
cout<<"The count = "<<count;
cout<<"\n"<<didpasscourse;

/*
        ****
*/

return 0;

}
