#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    m:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping :: menu()
{
    int choice;
    string email;
    string password;


    cout<< "\t\t\t\t_____________________________________\n";
    cout<< "\t\t\t\t                                     \n";
    cout<< "\t\t\t\t        Supermarket Main Menu        \n";
    cout<< "\t\t\t\t                                     \n";
    cout<< "\t\t\t\t_____________________________________\n";
    cout<< "\t\t\t\t                                     \n";
    cout<< "\t\t\t\t|  1) Administrator  |\n";
    cout<< "\t\t\t\t|                    |\n";
    cout<< "\t\t\t\t|  2) Buyer          |\n";
    cout<< "\t\t\t\t|                    |\n";
    cout<< "\t\t\t\t|  3) Exit           |\n";
    cout<< "\n\t\t\t Please Select..!";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<< "\t\t\t Please Login \n";
            cout<< "\t\t\t Enter Email   \n";
            cin>> email;
            cout<< "\t\t\t Password        \n";
            cin>> password;

            if(email="wealth@gmail.com" && password="wealth@123")
            {
                administrator();
            }
            else
            {
                cout<<"Invalid email/password";
            }

            break;

        case 2:
            {
                buyer();
            }

        case 3:
            {
                exit(0);
            }

        default :
            {
                cout<< "Please Select The Given Options";
            }
    }
goto m;
}

void shopping :: administrator()
{

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
