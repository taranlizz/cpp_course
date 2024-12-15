#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "engineer.h"
#include <string>

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &engineer);

public:
    CivilEngineer();
    ~CivilEngineer();

    void build_road() {};

private:
    std::string m_speciality{"None"};
};

#endif