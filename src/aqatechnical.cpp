#include "string"
#include <iostream>
#include "header/aqatechnical.h"

using namespace AQATechnicalN;

int L3FoundationTechnical(std::string pts)
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

int L3Technical1080(std::string pts)
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

int L3Technical540(std::string pts)
{
    if(pts == "D*D*")
    {

    }
    else if(pts == "D*D")
    {

    }
    else if(pts == "DD")
    {

    }
    else if(pts == "DM")
    {

    }
    else if(pts == "MM")
    {
        
    }
    else if(pts == "MP")
    {

    }
    else if(pts == "PP")
    {

    }
    else
    {
        return -1;
    }
}

int L3Technical720(std::string pts)
{
    if(pts == "D*D*")
    {

    }
    else if(pts == "D*D")
    {

    }
    else if(pts == "DD")
    {

    }
    else if(pts == "DM")
    {

    }
    else if(pts == "MM")
    {
        
    }
    else if(pts == "MP")
    {

    }
    else if(pts == "PP")
    {

    }
    else
    {
        return -1;
    }
}