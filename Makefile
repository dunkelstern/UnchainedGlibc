HEADERS=time.h

DEFS= -D_GNU_SOURCE

%.h:
	clang -E /usr/include/$@ -o Headers/$@ $(DEFS)

headers: $(HEADERS)

