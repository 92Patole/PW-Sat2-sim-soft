#ifndef REALCOMMUNICATIONCALC_H
#define REALCOMMUNICATIONCALC_H


class RealCommunicationCalc
{
    public:
        /** Default constructor */
        RealCommunicationCalc();
        /** Default destructor */
        virtual ~RealCommunicationCalc();
        /** Access distance_to_base
         * \return The current value of distance_to_base
         */
        float Getdistance_to_base() { return distance_to_base; }
        /** Set distance_to_base
         * \param val New value to set
         */
        void Setdistance_to_base(float val) { distance_to_base = val; }
        /** Access power_suppression
         * \return The current value of power_suppression
         */
        float Getpower_suppression() { return power_suppression; }
        /** Access time_to_base_connection
         * \return The current value of time_to_base_connection
         */
        double Gettime_to_base_connection() { return time_to_base_connection; }
    protected:
    private:
        float distance_to_base; //!< Member variable "distance_to_base"
        ffloat power_suppression; //!< Member variable "power_suppression"
        double time_to_base_connection; //!< Member variable "time_to_base_connection"
};

#endif // REALCOMMUNICATIONCALC_H
