#!/bin/bash

headers=$(sed -e '/\s*\/\//d' -e '/header "/!d' -e '/exclude/d' -e 's/.*header "\([^"]*\)"/\1/' module.modulemap.in| tr "\n" " ")

for header in $headers ; do
	# create umbrella header
	echo "#include \"$header\"" >> Headers/glibc-umbrella.h
done
clang -E "Headers/glibc-umbrella.h" -o "Headers/umbrella.h" -D_GNU_SOURCE

