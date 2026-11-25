#include "species.h"
#include <iostream>
#include <cstring>

void Species::print(){
  std::cout << "ID: " << this->id << std::endl;

  if(this->name)
    std::cout << "Name: " << this->name << std::endl;

  if(this->race)
    std::cout << "Race: " << this->race->get_name() << std::endl;
}

Species::Species(){
  this->id = 0;
  this->name = nullptr;
  this->race = nullptr;
}

Species::Species(long id, char* name, Race* race){
  this->id = id;

  this->name = new char[strlen(name)+1];
  if(name)
    strcpy(this->name, name);

  this->race = race;
}

Species::~Species(){
  if(this->name)
    delete name;
}

long Species::get_id(){
  return this->id;
}

char* Species::get_name(){
  return this->name;
}

Race* Species::get_race(){
  return this->race;
}

void Species::set_id(long id){
  this->id = id;
}

void Species::set_name(char* name){
  if(this->name)
    delete this->name;

  this->name = new char[strlen(name)+1];

  if(this->name)
    strcpy(this->name, name);
}

void Species::set_race(Race* race){
  this->race = race;
}
