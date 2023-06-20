
class std_result_info:public std_basic_info
{
    private:
        int     totalMarks;
        float   perc;
        char    grade;
    public:
        void getResultInfo(void);
        void putResultInfo(void);
};
