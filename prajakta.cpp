#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
#include<limits>
#include<set>
#include<map>
using namespace std;
class one
{


public:
 void menu1();

};
void one::menu1()
{

  cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOOD ORDERING SYSTEM =========="<<endl;
 cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
  cout<<"\n\n\n==========================="<<endl;
cout<<"[1] Veggie Supreme (Rs.480) \n [2] Exotica Pizza(Rs.440)\n [3] Chicken Sizzler (Rs.580) \n [4] Chrispy Chicken (Rs.520)\n [5] Spaghetti (Rs.350)\n [6] Country Feast (Rs.400)\n [7] Tetrazzini (Rs.420)\n [8] Double Cheese (Rs.540)\n [9] Makizushi (Rs.548)\n===========================\n\n\n [10] EXIT"<<endl;
 cout<<"\n========================================================================================================================"<<endl;
}
 class two:public one
 {
 protected:
     long int item[20],counter=1,item1,item2,item3,item4,item5,item6,item7,item8,item9,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;
     double s=0;

     string y,ye;
     public:
void menu2()

{    ofstream write;
write.open("order.text");
if(!write)
{
 cout<<"file can not open"<<endl;
 exit (-1);
 }
   item1=item2=item3=item4=item5=item6=item7=item8=item9=0;
   a:

    b:
     c:
     cout<<"\n\n\tENTER YOUR ORDER (one order at a time): ";
      cin>>ch;
      for(i=1;i<=counter;i++){

        if(item[i]==ch){
            break;
        }
        else{
            item[counter]=ch;
        }
      }





  bool validInput;
  validInput = false;
  do {

       cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
        if (!(cin >> ye)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid input.";

        } else {
            validInput = true;

        }
    } while (!validInput);
  int temp;
  if(ye=="y"|| ye=="Y")
  {
   goto b;
  }
  else
  {
   switch(ch)
   {
    case 1:
     cout<<"\n\n\t HOW MANY VEGGIE SUPRIME YOU WANT : ";
     cin>>temp;

     item1+=temp;

     a=480;
     s=s+a*item1;
     write<<"YOU ORDERED VEGGIE SUPRIME: 480";
     write<<" \n";
     write<<"NUMBER OF ITEM IS : "<<item1;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED VEGGIE SUPRIME  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 2:
     cout<<"\n\n\tHOW MANY EXOTICA YOU WANT :";
     cin>>temp;
     item2+=temp;

     b=440;
     s=s+b*item2;
     write<<"YOU ORDER  EXOTICA : 440";
     write<<" \n";
      write<<"NUMBER OF EXOTICA IS : "<<item2;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED  EXOTICA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 3:
     cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
     cin>>temp;
     item3+=temp;

     c=580;
     s=s+c*item3;
      write<<"YOU ORDER  CHICKEN SIZZLER  : 580";
      write<<" \n";
       write<<"NUMBER OF CHICKEN SIZZLER IS : "<<item3;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED  CHICKEN SIZZLER  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 4:
     cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
     cin>>temp;
     item4+=temp;

     d=520;
     s=s+d*item4;
     write<<"YOU ORDER  CHRISPY CHICKEN : 520";
     write<<" \n";
     write<<"NUMBER OF CHRISPY CHICKEN IS : "<<item4;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED  CHRISPY CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 5:
     cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
     cin>>temp;
     item5+=temp;

     e=350;
     s=s+e*item5;
     write<<"YOU ORDER  SPAGHETTI : 350";
     write<<" \n";
      write<<"NUMBER OF SPAGHETTI IS : "<<item5;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED  SPAGHETTI "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 6:
     cout<<"\n\n\tHOW MANY COUNTRY FEAST YOU WANT:";
     cin>>temp;
     item6+=temp;

     f=400;
     s=s+f*item6;
     write<<"YOU ORDER COUNTRY FEAST : 400";
     write<<"\n ";
      write<<"NUMBER OF COUNTRY FEAST IS : "<<item6;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED COUNTRY FEAST "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 7:
     cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
     cin>>temp;
     item7+=temp;

     g=420;
     s=s+g*item7;
     write<<"YOU ORDER TETRAZZINI : 420";
     write<<"\n ";
      write<<"NUMBER OF TETRAZZINI IS : "<<item7;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED  TETRAZZINI "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 8:
     cout<<"\n\n\tHOW MANY DOUBLE CHEESE YOU WANT :";
     cin>>temp;
     item8+=temp;

     h=540;
     s=s+h*item8;
     write<<"YOU ORDER DOUBLE CHEESE : 540";
     write<<" \n";
      write<<"NUMBER OF DOUBLE CHEESE IS : "<<item8;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED DOUBLE CHEESE "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

 case 9:
 cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
     cin>>temp;
     item9+=temp;
     i=548;
      s=s+i*item9;
      write<<"YOU ORDER MAKIZUSHI : 548";
      write<<" \n";
      write<<"NUMBER OF MAKIZUSHI IS : "<<item9;
     write<<"\n";
    cout<<"\n\n\n\tYOU ORDERED MAKIZUSHI "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
    break;

    case 10:
    exit(0);
    break;

    default:
     cout<<"\n\n\t\t\t\t\t\t\t YOU ENTERED WRONG CHOICE !!!!! "<<endl;
     goto c;
     break;
   }


   validInput = false;
    do {

       cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
        if (!(cin >> y)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid input.";

        } else {
            validInput = true;

        }
    } while (!validInput);
   if(y=="yes"|| y=="YES")
   {
    counter++;
    goto a;

   }
   else
   {
    cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
    for(int a=1;a<8;a++)
 {
  Sleep(500);
  cout << "...";
 }
    cout<<"\n\t\t\t\t\t\t\t";
    system("PAUSE");
   }
}
system("cls");



  write.close();
  }
  void show1()
  {
   menu1();
    menu2();
    int pizza;
    int ch1;
    cout << "\n\t\t\t\t\t\t\t ====================================================" << endl;
    cout << "\t\t\t\t\t\t\t|                    Order Details                   |" << endl;
    cout << "\t\t\t\t\t\t\t ====================================================" << endl;
    cout << "\n\t\t\t\t\t\t\t  Bill No : CP51             Date : " <<__DATE__ << endl;
    cout << "\t\t\t\t\t\t\t  Cashier : Harry " << endl;
    cout << "\t\t\t\t\t\t\t ====================================================" << endl;

cout << "\t\t\t\t\t\t\t|  Item                  |  Price           |  Quantity             " << endl;
            cout << "\t\t\t\t\t\t\t|------------------------|------------------|---------" << endl;
            set<int> selectedItems;
            for (int i = 1; i <= counter; ++i) {
        selectedItems.insert(item[i]);
            }


            for (int selectedItem : selectedItems) {
            switch (selectedItem) {
                case 1:
                    cout << "\t\t\t\t\t\t\t VEGGIE SUPRIME          |  Price: Rs." << a <<" | Quantity : "<<item1<< endl;
                    break;
                case 2:
                    cout << "\t\t\t\t\t\t\t EXOTICA                 |  Price: Rs." << b <<" | Quantity : "<<item2<< endl;
                    break;
                 case 3:
                    cout << "\t\t\t\t\t\t\t CHICKEN SIZZLER         |  Price: Rs." << c <<" | Quantity : "<<item3<< endl;
                    break;
                 case 4:
                    cout << "\t\t\t\t\t\t\t  CHRISPY CHICKEN        |  Price: Rs." << d <<" | Quantity : "<<item4<< endl;
                    break;
                 case 5:
                    cout << "\t\t\t\t\t\t\t SPAGHETTI               |  Price: Rs." << e <<" | Quantity : "<<item5<< endl;
                    break;
                 case 6:
                    cout << "\t\t\t\t\t\t\t COUNTRY FEAST           |  Price: Rs." << f <<" | Quantity : "<<item6<< endl;
                    break;
                 case 7:
                    cout << "\t\t\t\t\t\t\t TETRAZZINI              |  Price: Rs." << g <<" | Quantity : "<<item7<< endl;
                    break;
                 case 8:
                    cout << "\t\t\t\t\t\t\t DOUBLE CHEESE           |  Price: Rs." << h <<" | Quantity : "<<item8<< endl;
                    break;
                case 9:
                    cout << "\t\t\t\t\t\t\t MAKIZUSHI               |  Price: Rs." << i <<" | Quantity : "<<item9<< endl;
                    break;

                default:
                    break;
            }

                }



    cout << "\t\t\t\t\t\t\t ====================================================" << endl;
    cout << "\t\t\t\t\t\t\t|                        Total    "<<"Rs. " << s<<"        |" <<endl;
    cout << "\t\t\t\t\t\t\t ====================================================" << endl;


}



};
class three:public one,public two
{
    std::map<std::string, std::string> users;
 public:


  void registerUser() {
    std::string username, password;
   h:

    std::cout << "\n\t\t\t\t\t\t\tEnter username: ";
    std::cin >> username;

    std::cout << "\n\t\t\t\t\t\t\tEnter password: ";
    while(1)
      {
        ch = getch();
        if(ch==13)
        break;
        if(ch==32||ch==9)
        continue;
        else
        {
          cout<<"*";
           password+=ch;

        }
      }



    if (users.find(username) != users.end()) {
        std::cout << "Username already exists. Please choose another one.\n";
        goto h;
    } else {

        users[username] = password;
        std::cout << "\n\n\t\t\t\t\t\t\tRegistration successful!\n";
         cout<<"\t\t\t\t\t\t\t---------------------\n\n";
        system("PAUSE");
          system("CLS");
        menu();
    }
}


void loginUser() {
    std::string username, password;

   g:

    std::cout << "\n\t\t\t\t\t\t\tEnter username: ";
    std::cin >> username;

    std::cout << "\n\t\t\t\t\t\t\tEnter password: ";
    while(1)
      {
        ch = getch();
        if(ch==13)
        break;
        if(ch==32||ch==9)
        continue;
        else
        {
          cout<<"*";
           password+=ch;

        }
      }



    if (users.find(username) != users.end() && users[username] == password) {
        std::cout << "\n\n\t\t\t\t\t\t\tLogin successful!\n\n";
         cout<<"\t\t\t\t\t\t\t---------------------\n\n";

          system("PAUSE");
          system("CLS");
          show1();
    } else {
        std::cout << "Invalid username or password. Please try again.\n";
        goto g;
    }
}

 void menu(){


     int choice;
f:
    do {
        cout<<"\n\t\t\t\t\t\t\t---------------------";
        std::cout << "\n\t\t\t\t\t\t\t1. Register\n\t\t\t\t\t\t\t2. Login\n\t\t\t\t\t\t\t3. Exit\n\t\t\t\t\t\t\tEnter your choice: ";
        std::cin >> choice;
         cout<<"\t\t\t\t\t\t\t---------------------";

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                goto f;
                break;
        }
    } while (choice != 3);
 }

};


int main()
{
   three ob;
   ob.menu();



    return 0;
}
