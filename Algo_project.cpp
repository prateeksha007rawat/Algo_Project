# include<iostream>
# include<bits/stdc++.h>
# include<string.h>
# include<string>
using namespace std;
void clrscr()
{
   system("cls");
}
class Registration
{
    public:
    int client_no;
    string Fname;
    string Lname;
    string date;
    string address;
    int mob_no;
    float cost;

    void Reg()
    {
        cin>>client_no>>Fname>>Lname>>date>>address>>mob_no>>cost;
        clrscr();
    }
};
int main()
{
    Registration r;
    cout<<"Client_no.     Fname       Lname       date                  address                 mob_no          cost"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
    r.Reg();
    while(true)
    {
        r.Reg();
    }
   cout<<"";
}
