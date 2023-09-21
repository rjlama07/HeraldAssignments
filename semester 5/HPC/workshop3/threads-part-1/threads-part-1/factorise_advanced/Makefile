all: factorise_3_4 factorise_3_n factorise_4 

factorise_3_4: factorise_3_4.c
	cc -o factorise_3_4 factorise_3_4.c -pthread

factorise_3_n: factorise_3_n.c
	cc -o factorise_3_n factorise_3_n.c -lrt -pthread

factorise_4: factorise_4.c
	cc -o factorise_4 factorise_4.c -lrt -pthread

clean:
	rm -f a.out *~ factorise_3_4 factorise_3_n factorise_4


