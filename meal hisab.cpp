#include<iostream>
using namespace std;

int main()
{
    double shimul,  abir, rownok, tarek, shimulmealcount, abirmealcount, rownokmealcount, tarekmealcount;

    //meal added tk
    //indevisual meal

    cout<<"Shimul added taka: ";
    cin>>shimul;
    cout<<"Shimul meal count: ";
    cin>>shimulmealcount;

    cout<<endl<<"Abir added taka: ";
    cin>>abir;
    cout<<"Abir meal count: ";
    cin>>abirmealcount;

    cout<<endl<<"Rownok added taka: ";
    cin>>rownok;
    cout<<"Rownok meal count: ";
    cin>>rownokmealcount;

    cout<<endl<<"Tarek added taka: ";
    cin>>tarek;
    cout<<"Tarek meal count: ";
    cin>>tarekmealcount;

    double watertk=0, water=0, gas=0, ele=0, totalmeal=0, total=0;
    double mealrate = 0.00;

    cout<<endl<<"Water taka: ";
    cin>>water;

    cout<<endl<<"Gas taka: ";
    cin>>gas;

    cout<<endl<<"electricity taka: ";
    cin>>ele;


    totalmeal =  shimulmealcount + abirmealcount + rownokmealcount + tarekmealcount ;
    watertk = water / 4;
    double gastk = gas / 4;
    double eletk = ele / 4;


    total = shimul + abir + rownok + tarek ; // total taka
    mealrate = total / totalmeal; //meal rate


    double shimulmealtk = mealrate * shimulmealcount ;
    double abirmealtk = mealrate * abirmealcount ;
    double rownokmealtk = mealrate * rownokmealcount ;
    double tarekmealtk = mealrate * tarekmealcount ;


    cout<<endl<<"Total taka: "<<total<<endl;
    cout<<endl<<"Total meal: "<<totalmeal<<endl;
    cout<<"Meal rate: "<<mealrate<<endl;


    cout<<endl;
    if( shimulmealtk > shimul ){ cout<<"Shimul give "<<shimulmealtk - shimul<<" Taka"<<endl; }
    else{ cout<<"Shimul return "<<shimul - shimulmealtk<<" Taka"<<endl; }

    if( abirmealtk > abir ){ cout<<"Abir give "<<abirmealtk - abir<<" Taka"<<endl; }
    else{ cout<<"Shimul return "<<abir - abirmealtk<<" Taka"<<endl; }

    if( rownokmealtk > rownok ){ cout<<"Rownok give "<<rownokmealtk - rownok<<" Taka"<<endl; }
    else{ cout<<"rownok return "<<rownok - rownokmealtk<<" Taka"<<endl; }

    if( tarekmealtk > tarek ){ cout<<"Tarek give "<<tarekmealtk - tarek<<" Taka"<<endl; }
    else{ cout<<"Shimul return "<<tarek - tarekmealtk<<" Taka"<<endl; }


    cout<<endl<<"Total hisab"<<endl<<endl;

    //shimul hisab
    cout<<"Shimul"<<endl;
    cout<<"House rent: 5500"<<endl;
    cout<<"Water bill: "<<watertk<<endl;
    cout<<"Net bill: 250 taka"<<endl;
    cout<<"Gas bill: "<<gastk<<endl;
    cout<<"Dust bill: 25 taka"<<endl;
    cout<<"Electricity bill: "<<eletk<<endl;
    cout<<"Khala bill: 600 taka"<<endl;
    double totalshimul = watertk + 250 + gastk + 25 + eletk + 5500 + 600; // water bill + net bil + gas bill + dust bill + electricity bill  + rent + khala bil


    //abir hisab
    cout<<endl;
    cout<<"Abir"<<endl;
    cout<<"House rent: 4250"<<endl;
    cout<<"Water bill: "<<watertk<<endl;
    cout<<"Net bill: 250 taka"<<endl;
    cout<<"Gas bill: "<<gastk<<endl;
    cout<<"Dust bill: 25 taka"<<endl;
    cout<<"Electricity bill: "<<eletk<<endl;
    cout<<"Khala bill: 600 taka"<<endl;
    double totalabir = watertk + 250 + gastk + 25 + eletk + 4250 + 600; // water bill + net bil + gas bill + dust bill + electricity bill  + rent + khala bil

    //rownok hisab
    cout<<endl;
    cout<<"Rownok"<<endl;
    cout<<"House rent: 2625 taka"<<endl;
    cout<<"Water bill: "<<watertk<<endl;
    cout<<"Net bill: 250 taka"<<endl;
    cout<<"Gas bill: "<<gastk<<endl;
    cout<<"Dust bill: 25 taka"<<endl;
    cout<<"Electricity bill: "<<eletk<<endl;
    cout<<"Khala bill: 600 taka"<<endl;
    double totalrownok = watertk + 250 + gastk + 25 + eletk + 2625 + 600;   // water bill + net bil + gas bill + dust bill + electricity bill  + rent + khala bil

    //tarek hisab
    cout<<endl;
    cout<<"Tarek"<<endl;
    cout<<"House rent: 2625 taka"<<endl;
    cout<<"Water bill: "<<watertk<<endl;
    cout<<"Net bill: 250 taka"<<endl;
    cout<<"Gas bill: "<<gastk<<endl;
    cout<<"Dust bill: 25 taka"<<endl;
    cout<<"Electricity bill: "<<eletk<<endl;
    cout<<"Khala bill: 600 taka"<<endl;
    double totaltarek = watertk + 250 + gastk + 25 + eletk + 2625 + 600;   // water bill + net bil + gas bill + dust bill + electricity bill  + rent + khala bil


    //total
    cout<<endl;
    cout<<"total taka without meal shimul: "<<totalshimul<<endl;
    cout<<"total taka without meal abir: "<<totalabir<<endl;
    cout<<"total taka without meal rownok: "<<totalrownok<<endl;
    cout<<"total taka without meal tarek: "<<totaltarek<<endl;



    return 0;
}
