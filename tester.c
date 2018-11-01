#include <stdio.h>
#include "ifttt.h"

int main(int argc, char *argv[])
{
/*
  ifttt("https://maker.ifttt.com/trigger/{event}/with/key/2Mz3ov7UhIub7OYdrCQH0", "my1", "my 2", "my 33333");
*/

  printf("Trying to connect to server\n");
  ifttt("http://red.eecs.yorku.ca:8080/trigger/event/with/key/123", "my1", "my 2", "my 33333");
  return 0;
}
