#include "race.h"
#include <iostream>
#include <cstring>

void Race::print(void){
  std::cout << "ID de raza: " << this->id << std::endl;
  std::cout << "Nombre de raza: " << this->name << std::endl;
}

Race::Race(){
  this->id = 0;
  this->name = nullptr;
}

Race::Race(long id, char* name){
  this->id = id;
  
  this->name = new char[strlen(name)+1];
  if(this->name)
    strcpy(this->name, name);
}

Race::~Race(){
  if(name)
    delete name;
}

long Race::get_id(void){
  return this->id;
}

char* Race::get_name(void){
  return this->name;
}

void Race::set_id(long id){
  this->id = id;
}

void Race::set_name(char* name){
  this->name = name;
}
