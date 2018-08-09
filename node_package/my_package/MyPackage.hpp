/* Generic package class that provides ros interface such as:
 *      Subscribers
 *      Parameters,
 *      Timers
 */
#ifndef _MYPACKAGE_HPP
#define _MYPACKAGE_HPP
class MyPackage(){
    private:
        int data;
    public:
        MyPackage();
}
#include "MyPackage.cpp"
#endif
