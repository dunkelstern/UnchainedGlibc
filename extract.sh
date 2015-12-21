#!/bin/bash

# collect all non-excluded non commented out headers from original module map (SwiftGlibC)
headers=$(sed -e '/\s*\/\//d' -e '/header "/!d' -e '/exclude/d' -e 's/.*header "\([^"]*\)"/\1/' module.modulemap.in| tr "\n" " ")

# add each header to a common umbrella header
for header in $headers ; do
	echo "#include \"$header\"" >> Headers/glibc-umbrella.h
done

# add libbsd header to the mix (arc4random!)
echo "#include \"/usr/include/bsd/bsd.h\"" >> Headers/glibc-umbrella.h

# pipe that thing through the clang C preprocessor
#
# The trick with this is the defined macro _GNU_SOURCE to fully enable all
# API in all header files, if this is omitted some functionality like
# 'strptime' and 'lrand48' is missing in the module afterwards
clang -E "Headers/glibc-umbrella.h" -o "Headers/umbrella.h" -D_GNU_SOURCE

