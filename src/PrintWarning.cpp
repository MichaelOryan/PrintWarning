#include "PrintWarning.h"

PrintWarning::PrintWarning(std::string text)
{
    setFirstRun(true);
    setText(text);
}

PrintWarning::~PrintWarning()
{

}

void PrintWarning::print()
{
    if(isFirstRun())
    {
        setFirstRun(false);
    }
    else
    {
        std::cout << getText() << std::endl;
    }

}

void PrintWarning::setText(std::string text)
{
    this->text = text;
}

void PrintWarning::setFirstRun(bool state)
{
    this->first_run = state;
}


bool PrintWarning::isFirstRun()
{
    return this->first_run;
}

std::string PrintWarning::getText()
{
    return this->text;
}
