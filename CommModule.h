#ifndef COMMMODULE_H
#define COMMMODULE_H

#include <Module.h>

/**
 How it should work summary:
- FIFO of incoming and outgoing data
- every iteration we send/recieve data
future:  Error correction and path error simulation
- simulation how much will it take to send smntng

 */
class CommModule : public Module
{
    public:
        /** Default constructor */
        CommModule();
        /** Default destructor */
        virtual ~CommModule();
        /** Access connection_to_base_flag
         * \return The current value of connection_to_base_flag
         */
        bool Getconnection_to_base_flag() { return connection_to_base_flag; }
        /** Set bitrate
         * \param val New value to set
         */
        void Setbitrate(unsigned int val) { bitrate = val; }
    protected:
    private:
        bool connection_to_base_flag; //!< Member variable "connection_to_base_flag"
        vector<uint8_t> data_to_send; //!< Member variable "data_to_send"
        vector<uint8_t> received_data; //!< Member variable "received_data"
        unsigned int bitrate; //!< Member variable "bitrate"
};

#endif // COMMMODULE_H
