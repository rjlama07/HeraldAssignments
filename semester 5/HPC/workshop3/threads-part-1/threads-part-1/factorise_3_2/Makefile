all: factorise_3_2_a factorise_3_2_b factorise_3_2_c factorise_3_2_d 

factorise_3_2_a: factorise_3_2_a.c
	cc -o factorise_3_2_a factorise_3_2_a.c -pthread

factorise_3_2_b: factorise_3_2_b.c
	cc -o factorise_3_2_b factorise_3_2_b.c -lrt -pthread

factorise_3_2_c: factorise_3_2_c.c
	cc -o factorise_3_2_c factorise_3_2_c.c -lrt -pthread

factorise_3_2_d: factorise_3_2_d.c
	cc -o factorise_3_2_d factorise_3_2_d.c -lrt -pthread

clean:
	rm -f a.out *~ factorise_3_2_a factorise_3_2_b factorise_3_2_c factorise_3_2_d factorise_3_2_e


