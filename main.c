#include<stdio.h>
#include<stdlib.h>
#include"headers.h"

int main() {
	printf("\nexample():\n");
	printTeam(example());
	printf("\nprintTeam(test):\n");
	struct team test = example();
	printTeam(test);

	printf("\neditTeam(&test, 60, NULL):\n");
	editTeam(&test, 60, NULL);
	printTeam(test);

	printf("\neditTeam(&test, -1, \"Woodie Flowers\"):\n");
	editTeam(&test, -1, "Woodie Flowers");
	printTeam(test);

	return 0;
}
