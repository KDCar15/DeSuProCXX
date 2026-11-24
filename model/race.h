#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED

class Race
{
public:
  void print(void);

  // Constructor/Destructor
  Race();
  Race(long, char*);
  ~Race();
  // Getter
  long get_id(void);
  char* get_name(void);
  // Setter
  void set_id(long);
  void set_name(char*);
private:
  long id;
  char* name;
};

#endif
