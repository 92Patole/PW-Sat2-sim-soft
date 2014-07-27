#ifndef REALORBITPOSITION_H
#define REALORBITPOSITION_H


class RealOrbitPosition
{
    public:
        /** Default constructor */
        RealOrbitPosition();
        /** Default destructor */
        virtual ~RealOrbitPosition();
        /** Access time_of_start
         * \return The current value of time_of_start
         */
        double Gettime_of_start() { return time_of_start; }
        /** Set time_of_start
         * \param val New value to set
         */
        void Settime_of_start(double val) { time_of_start = val; }
        /** Access start_pos
         * \return The current value of start_pos
         */
        double Getstart_pos() { return start_pos; }
        /** Set start_pos
         * \param val New value to set
         */
        void Setstart_pos(double val) { start_pos = val; }
        /** Access actual_pos
         * \return The current value of actual_pos
         */
        double Getactual_pos() { return actual_pos; }
        /** Set actual_pos
         * \param val New value to set
         */
        void Setactual_pos(double val) { actual_pos = val; }
        /** Access time_of_flight
         * \return The current value of time_of_flight
         */
        double Gettime_of_flight() { return time_of_flight; }
    protected:
    private:
        double time_of_start; //!< Member variable "time_of_start"
        double start_pos; //!< Member variable "start_pos"
        double actual_pos; //!< Member variable "actual_pos"
        double time_of_flight; //!< Member variable "time_of_flight"
};

#endif // REALORBITPOSITION_H
