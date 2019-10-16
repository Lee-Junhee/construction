struct team {
	int num;
	char *name;
	int banners;
};

struct team example();
int printTeam(struct team source);
int editTeam(struct team *source, int banners, char *name);
