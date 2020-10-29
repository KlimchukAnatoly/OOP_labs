#include "Train.h"

Train::Train() {
	string cities[3] = { "Киев","Харьков","Одесса" };
	place = cities[rand()%3];
	number = (char)(rand() % 10 + 48);
	for(int i=0;i<3;i++)	number += (char)(rand() % 10 + 48);
	this->time = (char)(rand() % 2 + 48);
	this->time = this->time + (char)(rand() % 10 + 48) + ':' + (char)(rand() % 6 + 48) + (char)(rand() % 10 + 48);
}

Train Train::operator = (const Train& obj) {
	this->number = obj.number;
	this->place = obj.place;
	this->time = obj.time;
	return *this;
}
