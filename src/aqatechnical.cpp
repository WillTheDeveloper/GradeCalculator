#include "string"
#include <iostream>
#include "header/aqatechnical.h"

using namespace AQATechnicalN;

int AQATechnicalN::L3FoundationTechnical(std::string pts)
{
    if(pts == "D*")
    {
        return 56;
    }
    else if(pts == "D")
    {
        return 48;
    }
    else if(pts == "M")
    {
        return 32;
    }
    else if(pts == "P")
    {
        return 16;
    }
    else
    {
        return -1;
    }
}

int AQATechnicalN::L3Technical1080(std::string pts)
{
    if(pts == "D*D*D*")
    {
        return 168;
    }
    else if(pts == "D*D*D")
    {
        return 160;
    }
    else if(pts == "D*DD")
    {
        return 152;
    }
    else if(pts == "DDD")
    {
        return 144;
    }
    else if(pts == "DDM")
    {
        return 128;
    }
    else if(pts == "DMM")
    {
        return 112;
    }
    else if(pts == "MMM")
    {
        return 96;
    }
    else if(pts == "MMP")
    {
        return 80;
    }
    else if(pts == "MPP")
    {
        return 64;
    }
    else if(pts == "PPP")
    {
        return 48;
    }
    else
    {
        return -1;
    }
}

int AQATechnicalN::L3Technical540(std::string pts)
{
    if(pts == "D*D*")
    {
        return 84;
    }
    else if(pts == "D*D")
    {
        return 78;
    }
    else if(pts == "DD")
    {
        return 72;
    }
    else if(pts == "DM")
    {
        return 60;
    }
    else if(pts == "MM")
    {
        return 48;
    }
    else if(pts == "MP")
    {
        return 36;
    }
    else if(pts == "PP")
    {
        return 24;
    }
    else
    {
        return -1;
    }
}

int AQATechnicalN::L3Technical720(std::string pts)
{
    if(pts == "D*D*")
    {
        return 112;
    }
    else if(pts == "D*D")
    {
        return 104;
    }
    else if(pts == "DD")
    {
        return 96;
    }
    else if(pts == "DM")
    {
        return 80;
    }
    else if(pts == "MM")
    {
        return 64;
    }
    else if(pts == "MP")
    {
        return 48;
    }
    else if(pts == "PP")
    {
        return 32;
    }
    else
    {
        return -1;
    }
}