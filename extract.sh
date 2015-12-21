#!/bin/bash

headers=$(sed -e '/\s*\/\//d' -e '/header "/!d' -e '/exclude/d' -e 's/.*header "\([^"]*\)"/\1/' module.modulemap.in| tr "\n" " ")

for header in $headers ; do
	mkdir -p "Headers$(dirname "$header")"
	clang -E "$header" -o "Headers$header" -D_GNU_SOURCE
done


sed -e 's/\(.*header "\)\([^"]*\)"/\1Headers\2"/' module.modulemap.in > module.modulemap
