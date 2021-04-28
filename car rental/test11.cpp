#include<iostream>
#include<fstream>
using namespace std;

     void invoice(int l,string s){
         int d;
         cout<<endl;
         cout<<"for how many days you want to rental : ";
         cin>>d;
            cout<<endl;
            cout<<endl;
            cout<<"         INVOICE      "<<endl;
         if(l==1){
             cout<<" rented to        :"<<s<<endl;
             cout<<" no. of days      :"<<d<<endl;
             cout<<" model no.        :"<<"MP10MJ56"<<endl;
             cout<<" total fiar price :"<<700*d<<"rs"<<endl;

             //cout<<" carname : SWIFT "<<endl;
            // cout<<" carname : SWIFT "<<endl;
            

         }
         if(l==2){
             cout<<" rented to        :"<<s<<endl;
             cout<<" no. of days      :"<<d<<endl;
             cout<<" model no.        :"<<"MP10MJ66"<<endl;
             cout<<" total fiar price :"<<4000*d<<"rs"<<endl;
           

         }
         if(l==3){
             cout<<" rented to        :"<<s<<endl;
             cout<<" no. of days      :"<<d<<endl;
             cout<<" model no.        :"<<"MP10MJ56"<<endl;
             cout<<" total fiar price :"<<2000*d<<"rs"<<endl;
            
         }
         if(l==4){
             cout<<" rented to        :"<<s<<endl;
             cout<<" no. of days      :"<<d<<endl;
             cout<<" model no.        :"<<"MP10MJ56"<<endl;
             cout<<" total fiar price :"<<1000*d<<"rs"<<endl;}
             cout<<endl;
          cout<<"     thank you "<<endl;
          cout<<" hope you visit again "<<endl;
     }


   void carinfo(int m){
       cout<<"         CAR INFO       "<<endl;
         if(m==1){
             cout<<" carname : SWIFT "<<endl;
             cout<<" model   : 2018 "<<endl;
             cout<<" rent/day: 700rs"<<endl;
             //cout<<" carname : SWIFT "<<endl;
            // cout<<" carname : SWIFT "<<endl;
            

         }
         if(m==2){
             cout<<" carname : MERCEDES "<<endl;
             cout<<" model   : 2020 "<<endl;
             cout<<" rent/day: 4000rs"<<endl;
             //cout<<" carname : SWIFT "<<endl;
            // cout<<" carname : SWIFT "<<endl;
           

         }
         if(m==3){
             cout<<" carname : INNOVA "<<endl;
             cout<<" model   : 2019 "<<endl;
             cout<<" rent/day: 2000rs"<<endl;
             //cout<<" carname : SWIFT "<<endl;
            // cout<<" carname : SWIFT "<<endl;
            
         }
         if(m==4){
             cout<<endl;
             cout<<"   carname : SKODA "<<endl;
             cout<<"   model   : 2018 "<<endl;
             cout<<"   rent/day: 1000rs"<<endl;
             //cout<<" carname : SWIFT "<<endl;
            // cout<<" carname : SWIFT "<<endl;
         }
   }

int main(){
    string username,password;
cout<<"for login enter 1"<<endl;
cout<<"for signup enter 2"<<endl;
int n;
cin>>n;
  if (n==1){
      ifstream in;
      
      cout<<"enter username :";
      //getline(cin,username);
      cin>>username;
      cout<<endl;
      cout<<"enter password :"<<endl;
      //getline(cin,password);//getting password
      cin>>password;
      cout<<endl;
      in.open(username.c_str());
    
      
      if(in){
          string u,p;
          getline(in,u);
          getline(in,p);
          if(u==username&&p==password)
          {
              cout<<"login successfully"<<endl;
              cout<<endl;
              cout<<endl;
              cout<<"select the car you want to rent "<<endl<<endl;
              cout<<"        SWIFT :1"<<endl;
              cout<<"        MERCEDES :2"<<endl;
              cout<<"        INNOVA : 3"<<endl;
              cout<<"        SKODA : 4"<<endl;
              int k,p;
              cin>>k;
              carinfo(k);
              
              invoice(k,username);
          }
          else{
              cout<<"wrong username or password"<<endl;
          }
          in.close();
      }
      else{
          cout<<"no data exist"<<endl;
          cout<<"click 1 for retry"<<endl;
          cout<<"click 2 for signup"<<endl;
      }
      in.close();
  }

 if(n==2){
      cout<<"enter username for your account :";
      cin>>username;
      cout<<endl;
     cout<<"enter you password :";
      cin>>password;
      cout<<endl;

      ofstream out;
      out.open(username.c_str());
      out<<username<<endl;
      out<<password<<endl;
      out.close();
      cout<<"registered successfully"<<endl;

  }
  if(n>=3){
      cout<<"no not excepted"<<endl;
  }
 
return 0;
}