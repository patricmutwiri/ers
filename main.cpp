/*
    @author Patrick Mutwiri <patwiri@gmail.com>
    @patric_mutwiri
    Created by patrick on 3/18/20.    
*/
//

#include <iostream>
#include <functional>

using namespace std;

class ERS{
public:
    ERS();
    int points = 0, airtime = 0;
    string name,phonenumber;

    int compute_bonuspoints() {
        if (airtime<100) {
            points = 0;
        } else if (airtime<500) {
            points = 50;
        } else if (airtime < 1000) {
            points = 100;
        } else if (airtime < 2000) {
            points = 300;
        } else if (airtime >= 2000) {
            points = 500;
        } else {
            points = 0;
        }
        return points;
    }
};

ERS::ERS() {
    cout<<"Enter Subscriber name\t:";
    //Pcin.ignore();
    getline(cin,name);
    cout<<"Enter phone number\t:";
    cin>>phonenumber;
    cout<<"Enter airtime bought\t:";
    cin>>airtime;
}

int main() {
    std::string message;
    ERS rs;

    cout<<" :::::::::::::::::::::::::::::::::::::::::::: "<<endl;
    cout<<" Electronic Reward System "<<endl;
    cout<<rs.name<<" :(Phone Number : "<<rs.phonenumber<<"): AWARDED "<<rs.compute_bonuspoints()<<" BONGA POINTS. STAY WITH SAFARICOM. THE BETTER OPTION. "<<endl;
    cout<<" :::::::::::::::::::::ERS:::::::::::::::::::: "<<endl;
}