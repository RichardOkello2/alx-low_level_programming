#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic fPIC *.C -shared -o liball.so
