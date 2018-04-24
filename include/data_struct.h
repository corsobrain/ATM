#ifndef DATA_STRUCT_H_INCLUDED
#define DATA_STRUCT_H_INCLUDED

typedef struct compagnie Compagnie ;
struct compagnie
    {
    char* nom;
    char acronyme[3];
    };

typedef struct avion Avion ;
struct avion
    {
    char id[6];
    char action[1];    // Take off or Landing
    char schedule_time[4];
    Compagnie* compagnie;
    char status[1]; //Late or On Time
    };


#endif // DATA_STRUCT_H_INCLUDED
