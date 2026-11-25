#include <iostream>
#include "race.h"
#include "species.h"

int main(){
  Race race;
  Species species;
  race.set_id(1);
  race.set_name("Fairy");
  
  species.set_id(1);
  species.set_name("Jack Frost");
  species.set_race(&race);

  std::cout << species.get_id() << std::endl;
  std::cout << species.get_name() << std::endl;
  
  if(species.get_race())
    std::cout << species.get_race()->get_name() << std::endl;

  return 0;
}
