#include<stdio.h>
#include<stdlib.h>
#include"headers.h"

struct team example() {
	int index = rand() % 4;
	struct team eg;
	if (index == 0) {
		eg.num = 254;
		eg.name = "The Cheesy Poofs";
		eg.banners = 55;
	}
	if (index == 1) {
		eg.num = 1678;
		eg.name = "Citrus Circuits";
		eg.banners = 32;
	}
	if (index == 2) {
		eg.num = 1114;
		eg.name = "Simbotics";
		eg.banners = 49;
	}
	if (index == 3) {
		eg.num = 694;
		eg.name = "StuyPulse";
		eg.banners = 17;
	}
	return eg;
}

int printTeam(struct team source) {
	printf("Team %d - %s\nBanners: %d\n", source.num, source.name, source.banners);
	return 0;
}

int editTeam(struct team *source, int banners, char *name){
	if (banners > 0) {
		source->banners = banners;
	}
	if (name != NULL) {
		source->name = name;
	}
	return 0;
}
