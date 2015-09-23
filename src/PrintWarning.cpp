#include "PrintWarning.h"

PrintWarning::PrintWarning(std::string text_warning)
{
    setFirstRun(true);
    setTextWarning(text_warning);
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
        std::cout << getTextWarning() << std::endl;
    }

}

void PrintWarning::setTextWarning(std::string text_warning)
{
    this->text_warning = text_warning;
}

void PrintWarning::setFirstRun(bool state)
{
    this->first_run = state;
}


bool PrintWarning::isFirstRun()
{
    return this->first_run;
}

std::string PrintWarning::getTextWarning()
{
    return this->text_warning;
}
