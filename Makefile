all:
	make -C src

upload:
	make -C src flash
