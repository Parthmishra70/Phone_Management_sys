#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

struct name
{
    string CompanyName, Buildquality, Category;
    int Memory, Prize;
};

 int PCount;
    int num = 0;

class phoned
{

public:
    char check;
    name n[50];
     int all;
    string searchCompanyName;
    int searchPrize;
    string searchCategory;
    char s;
    int EDIT;
    int DELETE;

   
   void phone()
    {

        cout << "\nHow many phones do you want to add: ";
        cin >> num;
        int i= PCount;
        for (i; i < num; i++)
        {

            cout << "___Phone Edit[" << i << "]";
            cout << "\nType Company Name: ";
            cin >> n[i].CompanyName;
            cout << "\nType Category like \n1)Camera\n2)Gaming\n3)Buildquailty\n4)AllRounder\n";
            cin >> n[i].Category;
            cout << "\nType Memory Name (56/64/128): ";
            cin >> n[i].Memory;
            cout << "\nType Build Quailty \n1)Best \n2)better\n3)excellent:\n";
            cin >> n[i].Buildquality;
            cout << "\nType Prize: ";
            cin >> n[i].Prize;
            cout << "\nIf you want to end this program, press 'y': ";
            cin >> check;
            PCount++;
            if (check == 'y')
            {
                break;
            }
        }
        
        //EDIT PHONES
        cout<<"if you want to edit previous phone so type (y/n):";
        cin>>s;
        if (s=='y'){
            cout<<"ALL PHONES\n";
            for (int i = 0; i < PCount; i++)
            {
                cout << "____Phone[" << i << "]____" << endl;
                cout << "Company Name: " << n[i].CompanyName << endl;
                cout << "Build Quailty: " << n[i].Buildquality << endl;
                cout << "Memory: " << n[i].Memory << endl;
                cout << "Category of Phone: " << n[i].Category << endl;
                cout << "Prize: " << n[i].Prize << endl;
            }
            cout<<"\nWhich number of phone do you want to add type number:";
            cin>>EDIT;
            cout << "____Phone[" << EDIT << "]____" << endl;
            cout << "Company Name: " << n[EDIT].CompanyName <<" Type here: " ;
            cin >> n[EDIT].CompanyName;
            cout << "Build Quailty: " << n[EDIT].Buildquality << " Type here: " ;
            cin >> n[EDIT].Buildquality;
            cout << "Memory: " << n[EDIT].Memory << " Type here: " ;
            cin >> n[EDIT].Memory;
            cout << "Category of Phone: " << n[EDIT].Category << " Type here: " ;
            cin >> n[EDIT].Category;
            cout << "Prize: " << n[EDIT].Prize << " Type here: ";
            cin >> n[EDIT].Prize;

            cout<<"SUCCESSFULLY EDIT";
        }
        //DELETE
        cout<<"if you want to DELETE previous phone so type (d):";
        cin>>s;
        if (s=='d'){
            cout<<"ALL PHONES\n";
            for (int i = 0; i < PCount; i++)
            {
                cout << "____Phone[" << i << "]____" << endl;
                cout << "Company Name: " << n[i].CompanyName << endl;
                cout << "Build Quailty: " << n[i].Buildquality << endl;
                cout << "Memory: " << n[i].Memory << endl;
                cout << "Category of Phone: " << n[i].Category << endl;
                cout << "Prize: " << n[i].Prize << endl;
            }
            cout<<"\nWhich number of phone do you want to DELETE type number:";
            cin>>DELETE;
            cout << "____Phone[" << DELETE << "]____" << endl;
            cout << "Company Name: " << n[DELETE].CompanyName;
            n[DELETE].CompanyName="Blank";
            cout << "Build Quailty: " << n[DELETE].Buildquality;
            n[DELETE].Buildquality = "Blank";
            cout << "Memory: " << n[DELETE].Memory;
            n[DELETE].Memory = 0;
            cout << "Category of Phone: " << n[DELETE].Category;
            n[DELETE].Category="Blank";
            cout << "Prize: " << n[DELETE].Prize;
            n[DELETE].Prize=0;
    cout<<"SUCCESSFULLY DELETED";

    }
    }

   // this is the searchphone logic(filter logic)
   void searchphone()
    {
        cout << "\nif you want all details of phone so click 0/rather you want filter so go with 1: ";
        cin >> all;

        if (all == 0)
        {
            for (int i = 0; i < PCount; i++)
            {
                cout << "____Phone[" << i << "]____" << endl;
                cout << "Company Name: " << n[i].CompanyName << endl;
                cout << "Build Quailty: " << n[i].Buildquality << endl;
                cout << "Memory: " << n[i].Memory << endl;
                cout << "Category of Phone: " << n[i].Category << endl;
                cout << "Prize: " << n[i].Prize << endl;
            }
        }else
        {
        // error:
        here:
            cout << "\n\n____search___\n\n";
            cout << "First you should know what we have:\n";
            cout << "We have company\n1)Samsung\n2)Oppo\n3)vivo\n4)apple\n";
            cout << "Search Company name:";
            cin >> searchCompanyName;
            cout << "\nWe have the Category like \n1)Camera\n2)Gaming\n3)Buildquailty\n4)AllRounder\n";
            cout << "Search Category:";
            cin >> searchCategory;
            // for budget
            cout << "\nFor 1k to 30k click:  1\n";
            cout << "For 30k to 60k click:  2\n";
            cout << "For 60k to 80k click:  3\n";
            cout << "For 80k to 100k click:  4\n";
            cout << "Search Prize:";
            cin >> searchPrize;
            // its convet capital into small

            transform(searchCompanyName.begin(), searchCompanyName.end(), searchCompanyName.begin(), ::tolower);
            transform(searchCategory.begin(), searchCategory.end(), searchCategory.begin(), ::tolower);

            for (int i = 0; i < PCount; i++)
            {
                cout<<"yes";
                // logic for filter
                if (searchCompanyName == n[i].CompanyName)
                {
                    cout<<"yes";
                    if (searchCategory == n[i].Category)
                    {
                    ahead:
                        // if (searchPrize == n[i].Prize)
                         if (searchPrize == 1)
                        {
                            if(30000 <= n[i].Prize){
                            // filter output
                            cout << "\n____Phone[" << i << "]____";
                            cout << "Cmpany Name:"<< n[i].CompanyName << endl;
                            cout << "Build Quality" << n[i].Buildquality << endl;
                            cout << "Memory Space:"<< n[i].Memory << endl;
                            cout << "Category:"<< n[i].Category << endl;
                            cout << "Prize:"<< n[i].Prize << endl;
                        }
                        }if (searchPrize == 2)
                        {
                            if(60000 >= n[i].Prize){
                            // filter output
                            cout << "\n____Phone[" << i << "]____";
                            cout << "Cmpany Name:"<< n[i].CompanyName << endl;
                            cout << "Build Quality" << n[i].Buildquality << endl;
                            cout << "Memory Space:"<< n[i].Memory << endl;
                            cout << "Category:"<< n[i].Category << endl;
                            cout << "Prize:"<< n[i].Prize << endl;
                        }
                        }if (searchPrize == 3)
                        {
                            if(90000 >= n[i].Prize){
                            // filter output
                            cout << "\n____Phone[" << i << "]____";
                            cout << "Cmpany Name:"<< n[i].CompanyName << endl;
                            cout << "Build Quality" << n[i].Buildquality << endl;
                            cout << "Memory Space:"<< n[i].Memory << endl;
                            cout << "Category:"<< n[i].Category << endl;
                            cout << "Prize:"<< n[i].Prize << endl;
                        }
                        }if (searchPrize == 4)
                        {
                            if(120000 >= n[i].Prize){
                            // filter output
                            cout << "\n____Phone[" << i << "]____";
                            cout << "Cmpany Name:"<< n[i].CompanyName << endl;
                            cout << "Build Quality" << n[i].Buildquality << endl;
                            cout << "Memory Space:"<< n[i].Memory << endl;
                            cout << "Category:"<< n[i].Category << endl;
                            cout << "Prize:"<< n[i].Prize << endl;
                        }
                        }else
                        {
                            cout << "\nThis Prize is not have the phone\nBut I will show some other phone\n";
                            // output of the filter and false Prize condition
                            cout << "\n____Phone[" << i << "]____\n";
                            cout << "Cmpany Name:"<< n[i].CompanyName << endl;
                            cout << "Build Quality" << n[i].Buildquality << endl;
                            cout << "Memory Space:"<< n[i].Memory << endl;
                            cout << "Category:"<< n[i].Category << endl;
                            cout << "Prize:"<< n[i].Prize << endl;
                        }
                    }else
                    {
                        cout << "\nthis Category is not here";
                        goto ahead;
                    }
                }else
                {
                    cout << "This phone is not here!!!!" << endl;
                    cout << "Try again";
                    goto here;
                }
            }
        }
    }



};


int main()
{
    phoned p;

    int checkerw;
    int passwordu;
head:
    // help for buying phone
    cout << "\nWelcome to HBP" << endl;
    cout << "write here (seller(1) / buyr(2)): " << endl;

    cin >> checkerw;

    if (checkerw == 1)
    {
        cout << "Enter Password here:";
        cin >> passwordu;

        if (passwordu == 1234)
        {
            p.phone();
            cout << "thank you";
            goto head;
        }
        else
        {
            goto head;
        }
    }
    else
    {
        if (checkerw == 2)
        {
             cout << "welcome to get buying konwledge about the phone";

            p.searchphone();
            cout<<"\nthank you";
        }
        else
        {
            cout << "Try Again";
            goto head;
        }
    }

    return 0;
}