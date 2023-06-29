#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>
#include <vector>

class Mission
{
    public:
        Mission(std::string nom, std::string description);
        std::string get_nom() const;
        std::string get_description() const;
        bool get_estTerminee();

        void set_nom(std::string nom);
        void set_description(std::string description);
        void set_estTerminee(bool estTerminee);

        virtual ~Mission();

    protected:

    private:
        std::string nom;
        std::string description;
        bool estTerminee = false;
};

#endif // MISSION_H

