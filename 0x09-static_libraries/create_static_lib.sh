#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.o
ar rc liball.a *.o
