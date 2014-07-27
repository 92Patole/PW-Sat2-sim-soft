#ifndef MODULE_H
#define MODULE_H

/** This class if an abstract class of Module  */
class Module
{
    public:
        /** Default constructor */
        Module();
        /** Default destructor */
        virtual ~Module();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Module(const Module& other);
    protected:
    private:
};

#endif // MODULE_H
