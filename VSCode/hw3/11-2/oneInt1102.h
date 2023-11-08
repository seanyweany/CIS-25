/**
 * Program Name: oneInt1102.h
 * Discussion    Specification File -
 *                   Class OneInt
 * Written By:   Tuan Nguyen
 * Date:         2023/11/02
 */

#ifndef ONEINT_H
#define ONEINT_H
class OneInt {
public:
    OneInt(int);

    OneInt(const OneInt&); // copy constructor

    OneInt(const OneInt& arg) : data{arg.data} {};

    int getData(void) const; // constant function (when run, you guarantee it won't change the object)
    void setData(int);

private:
    int data;
};

#endif