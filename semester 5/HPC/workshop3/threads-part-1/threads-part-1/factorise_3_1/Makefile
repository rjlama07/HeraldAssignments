all: factorise_3_1_a factorise_3_1_b factorise_3_1_c factorise_3_1_d factorise_3_1_e

factorise_3_1_a: factorise_3_1_a.c
	cc -o factorise_3_1_a factorise_3_1_a.c -pthread

factorise_3_1_b: factorise_3_1_b.c
	cc -o factorise_3_1_b factorise_3_1_b.c -lrt -pthread

factorise_3_1_c: factorise_3_1_c.c
	cc -o factorise_3_1_c factorise_3_1_c.c -lrt -pthread

factorise_3_1_d: factorise_3_1_d.c
	cc -o factorise_3_1_d factorise_3_1_d.c -lrt -pthread

factorise_3_1_e: factorise_3_1_e.c
	cc -o factorise_3_1_e factorise_3_1_e.c -lrt -pthread

clean:
	rm -f a.out *~ factorise_3_1_a factorise_3_1_b factorise_3_1_c factorise_3_1_d factorise_3_1_e


