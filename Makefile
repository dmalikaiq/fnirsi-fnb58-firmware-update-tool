all:
	gcc main.c util.c -o fnirsi-dfu-update -lhidapi-hidraw

.PHONY: all
