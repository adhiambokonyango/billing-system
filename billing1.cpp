//
// Created by konyango on 3/13/23.
//
#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string name;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();

};
void shopping :: menu() {
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t___________________\n";
    cout<<"\t\t\t\t                   \n";
    cout<<"\t\t\t\t       Main Menu   \n";
    cout<<"\t\t\t\t___________________\n";
    cout<<"\t\t\t\t|1).Administrator |\n";
    cout<<"\t\t\t\t                   \n";
    cout<<"\t\t\t\t|2).Buyer         |\n";
    cout<<"\t\t\t\t                   \n";
    cout<<"\t\t\t\t|3).Exit          |\n";
    cout<<"\t\t\t\t                   \n";
    cout<<"\n\t\t\t     Please select \n";
    cin>>choice;

    switch (choice) {
        case 1:
            cout<<"\t\t\t\t Please login\n";
            cout<<"\t\t\t\t Enter Email \n";
            cin>>email;
            cout<<"\t\t\t\t Enter Password\n";
            cin>>password;

            if (email=="admin" && password=="1234"){
                administrator();
            } else{
                cout<<"invalid credentials";
            }
            break;

        case 2:
            buyer();
            break;
        case 3:
            exit(0);
        default:
            cout<<"please select given options";
    }
    goto m;
}
void shopping::administrator() {
    int choice;
    cout<<"\t\t\t\t       Administrator Menu   \n";
    cout<<"\n\t\t\t\t     1). Add product      \n";
    cout<<"\n\t\t\t\t     2). Modify product   \n";

}







