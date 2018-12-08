#include "output.h"
#include "lgdt.h"
#include "pic.h"
#include "cpu_details.h"
#include "cpuid.h"

struct idt_entry{
	unsigned int offset_high;
	unsigned char stuff;
	unsigned char more_stuff;
	unsigned int segment_selector;
	unsigned int offset_low;
} __attribute__((packed));

int kmain(){
	configure_serial();
	char *debug = "Finished - now looping forever";
	puts(DEBUG, debug);
	return 0;
}


