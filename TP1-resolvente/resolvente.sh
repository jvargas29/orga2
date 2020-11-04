#!/bin/bash
nasm -f elf32 tp1-resolvente.asm -o tp1-resolvente.o;
gcc -m32 -o tp1-resolvente tp1-resolvente.o tp1-resolvente.c;
./tp1-resolvente
