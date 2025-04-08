
 /* Amerike university
    Author: Julio López
    Date: 08/04/25
    Practice #: 21
    Description: This program shall ask the user to write which functionin a class he wants to recover*/

    #include <iostream>
    using namespace std;

    class User
    {
        public:
        string name;
        int age;
        double height;


        void Reset()
        {
             name = "";
             age = 0;
             height = 0;
        }
        void ShowData()
        {
            cout << "This persons name is " << name << ", its " << age << " years old, and its " << height << " meters tall\n"; 
        }
    };
    class Job
    {
        public:
        string where;
        int when;
        int pay;

        void reset()
        {
            where = "";
            when = 0;
            pay = 0;
        }
        void showdata()
        {
            cout << "This person works at " << where << " since " << when << " and gets paid a total of " << pay << " pesos a month\n";
        }
    };
    class Colors
    {
        public:
        string fav;
        string lessfav;
        int since;

        void resett()
        {
            fav = "";
            lessfav = "";
            since = 0;
        }
        void data()
        {
            cout << "This persons favorite color is " << fav << ", and its least favorite is " << lessfav << " ever since  " << since << "\n";
        }
    };
    int main(){
     User one;
     one.name = "Ana";
     one.age = 24;
     one.height = 1.77;

     one.ShowData();
     one.Reset();
     one.ShowData();

     User two;
     two.name = "Hellen";
     two.age = 52;
     two.height = 1.84;

     two.ShowData();
     two.Reset();
     two.ShowData();

     Job n1;
     n1.where = "Finances";
     n1.when = 2008;
     n1.pay = 24000;

     n1.showdata();
     n1.reset();
     n1.showdata();

     Job n2;
     n2.where = "Human Resources";
     n2.when = 2004;
     n2.pay = 61000;

     n2.showdata();
     n2.reset();
     n2.showdata();

     Colors p1;
     p1.fav = "Blue";
     p1.lessfav = "Pink";
     p1.since = 2009;

     p1.data();
     p1.resett();
     p1.data();

     Colors p2;
     p2.fav = "Red";
     p2.lessfav = "Black";
     p2.since = 1997;

     p2.data();
     p2.resett();
     p2.data();


      return 0;
    }