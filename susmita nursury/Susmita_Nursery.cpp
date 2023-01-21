#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
class plants_type
{
protected:
    string plants;


public:
    void plants_Type()
    {

         cout<<"1.Marigold"<<endl;
         cout<<"2.Golden daisy"<<endl;
         cout<<"3.Lily"<<endl;
         cout<<"4.Tulip"<<endl;
         cout<<"5.Orchid"<<endl;

    }

};

class owner
{
  private:
        string x;
  public:
    owners(string x)
    {
        this->x=x;

    }
    void owner_info()
    {

    ifstream input;
    input.open("susmita.txt");

    while(!input.eof())
    {
      getline(input,x);
        cout<<x<<endl;

    }
    }
};
class staff
{
public:

    string name;
    string z;
public:
    staffs(string z )
    {


       this->z=z;
    }
    staff_info()
    {
        int id;
        string z;
        ifstream output;
        output.open("staffs.txt");
         while(!output.eof())
    {
      getline(output,z);
        cout<<z<<endl;

    }


    }
    Add_staff()
    {
        ofstream add;
        int i,n,id[100];
        string name[100];
        cout<<"how many people you want to add:"<<endl;
        cin>>n;
        add.open("staffs.txt",ios::app);
        for(i=0;i<n;i++)
        {
            cout<<"Enter Your Last Name:"<<"\n"<<endl;
            cout<<"Name:"<<"\n"<<endl;
            cin>>name[i];
            add<<"Name:"<<name[i]<<"\n"<<endl;




            add<<"ID:"<<rand()<<"\n";
            cout<<"Admitted"<<endl;
        }
        add.close();
    }
};



class plant_prize
{
   private:
       int plant;

   public:
       plants(int plant)
       {
           this->plant=plant;
       }
    show_plants()
    {
        int i;
         cout<<"Choose your plant"<<endl;
         cout<<"1.Marigold"<<endl;
         cout<<"2.Golden daisy"<<endl;
         cout<<"3.Lily"<<endl;
         cout<<"4.Tulip"<<endl;
         cout<<"5.Orchid"<<endl;
         cout<<"press 0 to go back"<<endl;
         for(i=0;i<5;i++)
         {
           cin>> plant;
           switch(plant)
           {
           case 1:
            cout<<"Marigold is 4459tk"<<endl;
            break;
           case 2:
            cout<<"Golden Daisy is 2499tk "<<endl;
            break;
           case 3:
            cout<<"Lily is 250tk"<<endl;
            break;
           case 4:
            cout<<"Tulip is 1950 tk"<<endl;
            break;
           case 5:
            cout<<"Orchid is 1499 tk"<<endl;
            break;//cant go back from this stage
           case 0:
            exit(1);



           }
         }

    }
};
class customer:public staff
    {
    private:
        int n;
        int num;
        char bol;
    public:




        customers(int n,char bol)
        {
            this->n=n;

            this->bol=bol;
        }
        Add_staff()
        {
            ofstream add;
        int ij,n,id[100];
        string name[100];
        cout<<"how many customers you want to add:"<<endl;
        cin>>n;
        add.open("customers.txt",ios::app);
        for(ij=0;ij<n;ij++)
        {
            cout<<"Enter Your Last Name:"<<"\n"<<endl;
            cout<<"Name:"<<"\n"<<endl;
            cin>>name[ij];
            add<<"Name:"<<name[ij]<<"\n"<<endl;




            add<<"Token:"<<rand()<<"\n";
            cout<<"Admitted"<<endl;
        }
        add.close();

            int a,i,q=0;
         cout<<"how many types flower you want to buy:"<<endl;
         cin>>a;
         for(i=0;i<a;i++){
         cout<<"Which flowers you want to buy:"<<endl;
         cout<<"1.Marigold"<<endl;
         cout<<"2.Golden daisy"<<endl;
         cout<<"3.Lily"<<endl;
         cout<<"4.Tulip"<<endl;
         cout<<"5.Orchid"<<endl;
         cin>>n;
         int num1=0;

         switch (n)
         {
             case 1:

             double z;
             int mari;
             cout<<"how many Marigold you want to  buy:"<<endl;
             cin>>num1;
             cout<<"Did you booking the flower?"<<"\n1.(yes)\n2.(no)\n"<<endl;
             cin>>mari;
             if(mari==1)
             {


             if(num1>=3)

             {
                 z=(4459*num1)-(4459*num1*3/100);
                 cout<<"you buy "<<num1<< " Marigold.And your prize is:"<<z<<"tk with 3% less and no extra charge because of pre booking"<<endl;
                 cout<<"Congratulation you get a free lily flower as a gift"<<endl;
             }
             else
             {
                 z=(4459*num1);


             cout<<"you buy "<<num1<<" Marigold.And your prize is:"<<z<<"tk and no extra charge because of pre booking"<<endl;
             }
             }
             else
             {
                 if(num1>=3)

             {
                 z=(4459*num1)-(4459*num1*3/100)+(num1*2500);
                 cout<<"you buy "<<num1<< " Marigold.And your prize is:"<<z<<"tk with 3% less and 2500tk extra for each marigold"<<endl;
                 cout<<"Congratulation you get a free lily flower as a gift"<<endl;
             }
             else
             {
                 z=(4459*num1)+(num1*2500);


             cout<<"you buy "<<num1<<" Marigold.And your prize is:"<<z<<"tk and 2500tk extra for each marigold"<<endl;
             }
             }
             break;



         case 2:

             cout<<"how many Golden Daisy you want to  buy:"<<endl;
             cin>>num1;
             cout<<"you buy "<<num1<<" Golden Daisy.And your prize is:"<<2499*num1<<"tk"<<endl;
             break;
         case 3:
             cout<<"how many Lily you want to  buy:"<<endl;
             cin>>num1;
             cout<<"you buy "<<num1<<" Lily.And your prize is:"<<250*num1<<"tk"<<endl;
             break;
         case 4:

             int tu;
             cout<<"how many Tulip you want to  buy:"<<endl;
             cin>>num1;
             cout<<"Did you booking the flower?"<<"\n1.y(yes)\n2.n(no)\n"<<endl;
             cin>>tu;
             if(tu==1)
             {


             cout<<"you buy "<<num1<<" Tulip.And your prize is:"<<1950*num1<<"tk"<<endl;

             }
             else{
                cout<<"you buy "<<num1<<" Tulip.And your prize is:"<<(1950*num1)+(num1*1000)<<"tk with 1000tk extra for each tulip!!!"<<endl;

             }
             break;
         case 5:
            cout<<"how many Orchid you want to  buy:"<<endl;
             cin>>num1;
             cout<<"you buy "<<num1<<" Orchid.And your prize is:"<<1499*num1<<"tk"<<endl;
             break;

         }





        q=q+num1;

        }
        cout<<"\n\nTotal amount of plant you buy:\n\n"<<q<<endl;
        char p='y';
         cout<<"did you buy golden daisy,tulip,lily together?"<<endl;
         cout<<"y(yes)/n(no)"<<endl;
         cin>>p;
if(p=='y')
             {
                 int prize;
                 cout<<"Congratulation you recieve a coffee or 15tk.chose any one of them:\n"<<endl;
                 cout<<"1.coffee \n"<<endl;
                 cout<<"2.15tk \n"<<endl;

                 cin>>prize;
                 switch (prize)
                 {
              case 1:
                cout<<"Thank you go to the reciption and give this token and you will reacived a coffee"<<endl;
                break;
              case 2:
                  cout<<"Thank you go to the reciption and give this token and you will reacived the money"<<endl;
                  break;

                 }


             }
             else{
                cout<<"sorry no gift for you ;("<<endl;
             }
             char pm='y';
           cout<<"\nDid you buy more than 5 plants together??"<<"\ny(yes)/n(no)"<<endl;
            cin>>pm;
            if(pm=='y')
            {
                cout<<"congratulation!!! you get a free membership card and get 5% discount in the next purchase"<<endl;
                exit(2);


            }
            else
                {
                    cout<<"Sorry you cant get the membership card!!!\n press any key to exit"<<endl;
            exit(1);

            }




        }
       void Nursury_Facilities()
       {
           char pm='y';
           cout<<"Do you have membership card"<<"\ny(yes)/n(no)"<<endl;
           cin>>pm;
           if(pm=='y')
           {
               int a,i,q=0;
         cout<<"how many types flower you want to buy:"<<endl;
         cin>>a;
         for(i=0;i<a;i++){
         cout<<"Which flowers you want to buy:"<<endl;
         cout<<"1.Marigold"<<endl;
         cout<<"2.Golden daisy"<<endl;
         cout<<"3.Lily"<<endl;
         cout<<"4.Tulip"<<endl;
         cout<<"5.Orchid"<<endl;
         cin>>n;
         int num1=0;

         switch (n)
         {
             case 1:

             double z;
             int mari;
             cout<<"how many Marigold you want to  buy:"<<endl;
             cin>>num1;
             cout<<"Did you booking the flower?"<<"\n1.(yes)\n2.(no)\n"<<endl;
             cin>>mari;
             if(mari==1)
             {


             if(num1>=3)

             {
                 z=((4459*num1)-(4459*num1*3/100*5/100));
                 cout<<"you buy "<<num1<< " Marigold.And your prize is:"<<z<<"tk with 3% less and no extra charge because of pre booking and 5% less for having a membership card!!!"<<endl;
                 cout<<"Congratulation you get a free lily flower as a gift"<<endl;
             }
             else
             {
                 z=(4459*num1)-(4459*num1*5/100);


             cout<<"you buy "<<num1<<" Marigold.And your prize is:"<<z<<"tk and no extra charge because of pre booking and 5% less for having a membership card!!!"<<endl;
             }
             }
             else
             {
                 if(num1>=3)

             {
                 z=((4459*num1)-(4459*num1*3/100)+(num1*2500))*(5/100);
                 cout<<"you buy "<<num1<< " Marigold.And your prize is:"<<z<<"tk with 3% less and 2500tk extra for each marigold and 5% less for having a membership card!!!"<<endl;
                 cout<<"Congratulation you get a free lily flower as a gift"<<endl;
             }
             else
             {
                 z=(4459*num1)-(4459*num1*5/100)+(num1*2500);


             cout<<"you buy "<<num1<<" Marigold.And your prize is:"<<z<<"tk and 2500tk extra for each marigold and 5% less for having a membership card!!!"<<endl;
             }
             }
             break;



         case 2:

             cout<<"how many Golden Daisy you want to  buy:"<<endl;
             cin>>num1;
             cout<<"you buy "<<num1<<" Golden Daisy.And your prize is:"<<(2499*num1)-(2499*num1*5/100)<<"tk and 5% less for having a membership card!!!"<<endl;
             break;
         case 3:
             cout<<"how many Lily you want to  buy:"<<endl;
             cin>>num1;
             cout<<"you buy "<<num1<<" Lily.And your prize is:"<<(250*num1)-(250*num1*5/100)<<"tk and 5% less for having a membership card!!!"<<endl;
             break;
         case 4:

             int tu;
             cout<<"how many Tulip you want to  buy:"<<endl;
             cin>>num1;
             cout<<"Did you booking the flower?"<<"\n1.y(yes)\n2.n(no)\n"<<endl;
             cin>>tu;
             if(tu==1)
             {


             cout<<"you buy "<<num1<<" Tulip.And your prize is:"<<(1950*num1)-(1950*num1*5/100)<<"tk and 5% less for having a membership card!!!"<<endl;

             }
             else{
                cout<<"you buy "<<num1<<" Tulip.And your prize is:"<<(1950*num1)-(1950*num1*5/100)+(num1*1000)<<"tk with 1000tk extra for each tulip and 5% less for having a membership card!!!!!!"<<endl;

             }
             break;
         case 5:
            cout<<"how many Orchid you want to  buy:"<<endl;
             cin>>num1;
             cout<<"you buy "<<num1<<" Orchid.And your prize is:"<<(1499*num1)-(1499*num1*5/100)<<"tk and 5% less for having a membership card!!!"<<endl;
             break;

         }





        q=q+num1;

        }
        cout<<"\n\nTotal amount of plant you buy:\n\n"<<q<<endl;
        char p='y';
         cout<<"did you buy golden daisy,tulip,lily together?"<<endl;
         cout<<"y(yes)/n(no)"<<endl;
         cin>>p;
if(p=='y')
             {
                 int prize;
                 cout<<"Congratulation you recieve a coffee or 15tk.chose any one of them:\n"<<endl;
                 cout<<"1.coffee \n"<<endl;
                 cout<<"2.15tk \n"<<endl;

                 cin>>prize;
                 switch (prize)
                 {
              case 1:
                cout<<"Thank you go to the reciption and give this token and you will reacived a coffee"<<endl;
                exit(2);
                break;
              case 2:
                  cout<<"Thank you go to the reciption and give this token and you will reacived the money"<<endl;
                  exit(2);
                  break;

                 }
           }
       }
       else
       {
           cout<<"Sorry!!you do not have access in here"<<endl;
           exit(2);
       }


       }

    };
    class discount
    {
        public:
        discounts()
       {
           cout<<"if a customers buys marigold thrice ,he/she gets free lily as a gift and also 3% less!!!\n"<<endl;
           cout<<"if a customers buys golden daisy tulip lily together he/she gets a free coffee or 15 tk\n"<<endl;
           cout<<"if a customers buys more then 5 plants together he/she gets a free membership ticket and 5% less from next purchase\n"<<endl;
           cout<<"if a customers buys a tulip without booking he/she need to pay 1000tk \n"<<endl;
           cout<<"if a customers buys a marigold without booking he/she need to pay 2500tk and loss his membership\n"<<endl;
           cout<<"Thank you!!!"<<endl;

       }
    };
class info:public owner,public plants_type,public plant_prize,public customer,public discount

{
private:
    int num;
public:
    in_fo(int num)
    {
        this->num=num;
    }

show_info()
{
    string y;
    ifstream itput;
    itput.open("info.txt");

    while(!itput.eof())
    {
      getline(itput,y);
        cout<<y<<endl;

    }
    cout<<"press the key (1-6)"<<endl;
    cout<<"1.Owner info"<<endl;
    cout<<"2.Staff's info"<<endl;
    cout<<"3.Nursery info"<<endl;
    cout<<"4.Add staff's"<<endl;
    cout<<"5.plant prize"<<endl;
    cout<<"6.Customer's value(only access who have the membership ticket)"<<endl;
    cout<<"7.Discount and Caution!!!"<<endl;
    cout<<"8.Bill"<<endl;
    cout<<"9.Exit"<<endl;
}
number()
{
    int i;

    for(i=0;i<100;i++)
    {
        cin>>num;
        switch (num)
    {
    case 1:
        owner_info();
        break;
    case 2:
        staff_info();
        break;
    case 3:
        plants_Type();
        break;
    case 4:
        Add_staff();
        break;
    case 5:
    show_plants();
    break;
    case 6:
        Nursury_Facilities();
        break;
    case 7:
        discounts();
        break;
    case 8:
        Add_staff();
        break;
    case 9:
        cout<<"Developed by:\n Sawkat Hossain Sohan\n Nova Sultana\n Najia Anjum\n press any key to exit!!!"<<endl;
        exit(2);


    }

    }

}

};


int main()
{


info i;
i.show_info();
i.number();
return 0;



}
