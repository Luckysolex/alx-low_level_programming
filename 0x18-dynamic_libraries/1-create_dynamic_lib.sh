#!/bin/bash
gcc *.c -c -fPIC -Wall -Werror
gcc *.o -shared -o liball.so
