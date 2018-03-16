#include<iostream>
#include<string>
using namespace std;

class SSB {
private:
	int liv;
	int dmg;
	string name;

public:
	void initSsb(int l, int d, string n);
	void printInfo();


};



int main() {

	SSB SSB1;
	SSB1.initSsb(3,0, "Kirby");
	SSB1.printInfo();

	SSB SSB2;
	SSB2.initSsb(3, 0, "Mario");
	SSB2.printInfo();

	SSB SSB3;
	SSB3.initSsb(3, 0, "Luigi");
	SSB3.printInfo();

	SSB SSB4;
	SSB4.initSsb(3, 0, "Captain Falcon");
	SSB4.printInfo();

	SSB SSB5;
	SSB5.initSsb(3, 0, "Donkey Kong");
	SSB5.printInfo();

	SSB SSB6;
	SSB6.initSsb(3, 0, "Link");
	SSB6.printInfo();

	SSB SSB7;
	SSB7.initSsb(3, 0, "Samus");
	SSB7.printInfo();

	SSB SSB8;
	SSB8.initSsb(3, 0, "Ness");
	SSB8.printInfo();

	SSB SSB9;
	SSB9.initSsb(3, 0, "Fox");
	SSB9.printInfo();

	SSB SSB10;
	SSB10.initSsb(3, 0, "Pikachu");
	SSB10.printInfo();

	SSB SSB11;
	SSB11.initSsb(3, 0, "Yoshi");
	SSB11.printInfo();

	SSB SSB12;
	SSB12.initSsb(3, 0, "Jigglypuff");
	SSB12.printInfo();



}



void SSB::initSsb(int l, int d, string n) {
	liv = l;
	dmg = d; //always start at 0% damage
	name = n;


}

void SSB::printInfo() {
	cout << "Stocks: " << liv << endl;
	cout << dmg << "% damage." << endl;
	cout << "Name: " << name << endl;
}
