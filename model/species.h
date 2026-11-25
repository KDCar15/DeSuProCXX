#ifndef SPECIES_H_INCLUDED
#define SPECIES_H_INCLUDED

#include "race.h"

class Species{
 public:
  void print();

  Species();
  Species(long, char*, Race*);
  ~Species();
  
  long get_id();
  char* get_name();
  Race* get_race();
  
  void set_id(long);
  void set_name(char*);
  void set_race(Race*);

 private:
  long id;
  char* name;
  Race* race;
};

#endif
