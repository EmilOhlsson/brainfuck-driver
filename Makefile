.PHONY: all modules clean

obj-m += brainfuck-driver.o

all: modules

modules clean:
	$(MAKE) -C '$(LINUX_DIR)' M='$(PWD)' $@
