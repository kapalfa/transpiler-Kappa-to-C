all: mycompiler

myanalyzer.tab.c myanalyzer.tab.h: myanalyzer.y
	bison -d -v -r all myanalyzer.y

lex.yy.c: mylexer.l
	flex mylexer.l

mycompiler: lex.yy.c myanalyzer.tab.c cgen.c
	gcc -o mycompiler lex.yy.c myanalyzer.tab.c cgen.c -lfl

clean:
	rm -f mycompiler lex.yy.c myanalyzer.tab.c myanalyzer.tab.h myanalyzer.output

.PHONY: clean