#include<iostream>
using namespace std;




//class definition
class Pkmn {
private:
	int health;

public:
	void eat(char f);

	void initPkmn(int num);
	void printInfo();
};



int main() {
	//main and stuff
	Pkmn Cyndiquill;
	Cyndiquill.initPkmn(50);
	Cyndiquill.eat('f');//Cyndiquill.eat(foodDrop('d'));
	Cyndiquill.printInfo();


	Pkmn Pikachu;
	Pikachu.initPkmn(40);
	Pikachu.eat('f');//Cyndiquill.eat(foodDrop('d'));
	Pikachu.printInfo();


	Pkmn Ageislash;
	Ageislash.initPkmn(80);
	Ageislash.eat('f');//Cyndiquill.eat(foodDrop('d'));
	Ageislash.printInfo();

} 


//define
void Pkmn::eat(char food) {

	if (food == 'a')
		health += 3;

	else if (food == 'b')
		health += 10;

	else if (food == 'c')
		health += 5;

	else if (food == 'd')
		health += 1;

	else if (food == 'e')
		health += -10;

	else if (food == 'f')
		health += 2;

	else if (food == 'g')
		health += 7;


}

void Pkmn::initPkmn(int num) {
	health = num;
}

void Pkmn::printInfo() {
	cout << "your pokemon's health is " << health << endl;

}

