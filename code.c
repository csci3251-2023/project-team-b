#include <stdio.h>
#define HELLO "hello"
#define SPACE " "
#define WORLD "world"
#define EXCLAMATION_MARK "!"
#define CHANGE_LINE "\n"

#define print(a) printf(a);
#define def int
#define greeting() main(void){
#define return exit(0);}

def greeting()
  print(HELLO)
  print(SPACE)
  print(WORLD)
  print(EXCLAMATION_MARK)
  print(CHANGE_LINE)
  return
