


std::vector<std::string>  col_to_tasks(char colour)
{

	std::vector<std::string> tasks; // Empty on creation
    
	 
	
	if(colour == 'r')
			{
			//tasks.push_back("test0"); // Adds an element
			    tasks.push_back("MM1");
			    tasks.push_back("Heating");
			    tasks.push_back("MM1");
			    tasks.push_back("Assembly");
			}
	if(colour == 'b')
			{
			//tasks.push_back("test0"); // Adds an element
			    tasks.push_back("MM1");
			    tasks.push_back("Cleaning");
			    tasks.push_back("MM1");
			    tasks.push_back("MM1");
			}
	if(colour == 'g')
			{
			//tasks.push_back("test0"); // Adds an element
			    tasks.push_back("MM1");
			    tasks.push_back("Cutting");
			    tasks.push_back("MM1");
			    tasks.push_back("MM1");
			}	

	return tasks;
}