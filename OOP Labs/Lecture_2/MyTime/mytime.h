//
//  mytime.h
//  OOlabs
//
//  Created by Илья Овсянников on 02.10.2025.
//

#ifndef MYTIME_H
#define MYTIME_H

class mytime{
    public:
    int hour;
    int min;
    int sec;
    mytime();
    mytime(int hour, int min, int sec);
    void info();
    mytime adds(int sec);
    mytime subs(int sec);
    mytime add(mytime t);
    mytime sub(mytime t);
};

#endif
