#!/bin/bash
gcc -c *.c
ar -rc libmy.a *.O
ranlib libmy.a
