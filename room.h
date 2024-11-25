#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <cstring>
 #include <map>

using namespace std;

class room { //defins of the DigitalMedia
protected:
    char* currentRoom;
  char* exits; //change to map prolly to store exiuts here
    char* storedItems;
    char* description

 
public:
    room(); 
  room(char* cr, char* e, char* si, char* d); //constructor that takes char pointer and the int
    virtual ~room();
  
  char* getCurrentRoom();
    char* getExits();
    char* getStoredItems();
    char* getDescription();

  void setExit("fill in reminder");
  room* getExit("fill in remindet");
  
    virtual void displayInfo() = 0; 

  
};

#endif
