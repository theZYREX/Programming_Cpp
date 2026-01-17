//
//  mytime.cpp
//  OOlabs
//
//  Created by Илья Овсянников on 02.10.2025.
//

#include <iostream>
#include "mytime.h"

mytime::mytime()
{
    hour = 0; min = 0; sec = 0;
}

mytime::mytime(int _hour, int _min, int _sec)
{
    hour = _hour;
    min = _min;
    sec = _sec;
}

void mytime::info()
{
    std::cout << "(" << hour << ", " << min << ", " << sec << ")\n";
}

mytime mytime::adds(int _sec)
{
    mytime result;
    int totalsec = hour*60*60 + min*60 + sec + _sec;
    result.sec = totalsec %60;
    result.min = totalsec/60%60;
    result.hour = totalsec/60/60;
    return result;
}

mytime mytime::subs(int _sec)
{
    mytime result;
    int totalsec = hour*60*60 + min*60 + sec - _sec;
    result.sec = totalsec %60;
    result.min = totalsec/60%60;
    result.hour = totalsec/60/60;
    return result;

}

mytime mytime::add(mytime t)
{
    mytime result;
    int totaltime = hour*60*60 + min*60 + sec + t.sec + t.min*60 + t.hour*60*60;
    result.sec = totaltime %60;
    result.min = totaltime/60%60;
    result.hour = totaltime/60/60;
    return result;

}

mytime mytime::sub(mytime t)
{
    mytime result;
    int totaltime = hour*60*60 + min*60 + sec - t.sec - t.min*60 - t.hour*60*60;
    result.sec = totaltime %60;
    result.min = totaltime/60%60;
    result.hour = totaltime/60/60;
    return result;

}

