#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) 
{
    if(!name || !count) return NULL;

    t_agent **newagents = malloc(16 * count + 1);



    for (int i = 0; i < count; i++)
        newagents[i] = mx_create_agent(name[i], power[i], strength[i]);
    
    newagents[count] = NULL;
    return newagents;
}
