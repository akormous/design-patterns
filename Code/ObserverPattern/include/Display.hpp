#ifndef DISPLAY_INTERFACE_HPP
#define DISPLAY_INTERFACE_HPP

/**
 * Interface for Display
*/
class Display {
public:
    virtual ~Display() {}
    /**
     * Display data
     * @param 
    */
    virtual void display() = 0;
};

#endif // DISPLAY_INTERFACE_HPP