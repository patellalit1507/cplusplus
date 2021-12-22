#include <iostream>
#include <fstream>
using namespace std;
void login()
{
    string username, password;
    ifstream in;
  

    cout << "enter username :";
    //getline(cin,username);
    cin >> username;
    cout << endl;
    cout << "enter password :" << endl;
    //getline(cin,password);//getting password
    cin >> password;
    cout << endl;
    in.open(username.c_str());

    if (in)
    {
        string u, p;
        getline(in, u);
        getline(in, p);
        if (u == username && p == password)
        {
            cout << "login successfully" << endl;

            
        }
        else
        {
            char x;
            cout << "wrong username or password" << endl;
            cout << "press 'R' to retry " << endl;
            cin >> x;
            if (x == 'R')
            {
                login();
            }
        }
        in.close();
    }
    else
    {
        cout << "no data exist" << endl;
        cout << "click 1 for retry" << endl;
        cout << "click 2 for signup" << endl;
    }
    in.close();
}
void signup(){
    //friend void useraccount();
    string username, password;


    cout << "enter username for your account :";
        cin >> username;
        cout << endl;
        cout << "enter you password :";
        cin >> password;
        cout << endl;

        ofstream out;
        out.open(username.c_str());
        out << username << endl;
        out << password << endl;
        out.close();
        cout << "registered successfully " << endl;
        //cout<<" to login press 'L' "<<endl;
        //useraccount();
       // main();
        
}

void useraccount()
{
    //string username, password;
    cout << "for login enter 1" << endl;
    cout << "for signup enter 2" << endl;
    int n;
    cin >> n;
    if (n == 1)
    {
        login();
    }

    if (n == 2)
    {

        signup();
        cout<<"to login press 'Y'"<<endl;
        char m;

        cin>>m;
        if(m=='Y'){
            login();
        }
    }
    if (n >= 3)
    {
        cout << "no not excepted" << endl;
    }
}


int main()
{
    useraccount();
   // cout<<"to login"   

    return 0;
}
