//Author Colby Bowie
//January 19th, 2023

#ifndef SPINNER_H
#define SPINNER_H

#include <iostream>
#include <random>
#include <string>


class Spinner{
 public:
    int spinner1();

    int spinner2();
};

class lowStakes : public Spinner{
 public:
    int makeBet();
};

class mediumStakes : public Spinner{
 public:
    int makeBet();
};

class highStakes : public Spinner{
 public:
    int makeBet();
};




#endif
