
const char* lookup(std::vector<int> Id)
{
	int size = 3;
	int id = *Id.data();
	const char *table[size];
	table[0] = "Base";
	table[1] = "143.167.45.210";
	table[2] = "143.167.47.142";
	if (id>size)
	{
		return "error - tag not known";
	}
	return table[id];
}