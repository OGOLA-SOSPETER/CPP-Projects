#include <iostream>
using namespace std;

class Data
{
    private:
    char Email;
    char passw;
    char Confirm_passw;

    public:
    void Enter_details(void)
    {
        cout<<"Input the Email: "<<endl;
        cin>>Email;
        cout<<"Input the password: "<<endl;
        cin>>passw;
        /*
        if (Confirm_passw==passw)
        cout<<"Password match"<<endl;
        else
        cout<<"Reenter password."<<endl;
        */
    }
    void Display(void)
    {
        cout <<"These are your details "<<endl;
        cout<<Email<<endl;
        cout<<passw<<endl;
    }
};

int main()
{
    Data Dt;
    Dt.Enter_details();
    Dt.Display();

    return 0;

}