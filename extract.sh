#!/bin/bash

# collect all non-excluded non commented out headers from original module map (SwiftGlibC)
headers=$(sed -e '/\s*\/\//d' -e '/header "/!d' -e '/exclude/d' -e 's/.*header "\([^"]*\)"/\1/' module.modulemap.in| tr "\n" " ")

echo "#define _GNU_SOURCE" > Headers/glibc-umbrella.h

# add each header to a common umbrella header
for header in $headers ; do
	echo "#include \"$header\"" >> Headers/glibc-umbrella.h
done

# add libbsd header to the mix (arc4random!)
echo "#include \"/usr/include/bsd/bsd.h\"" >> Headers/glibc-umbrella.h
echo "#include \"/usr/include/x86_64-linux-gnu/sys/types.h\"" >> Headers/glibc-umbrella.h

