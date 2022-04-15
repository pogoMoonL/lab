

typedef unsigned int RamType;

class RamTwoDim
{
public:
    RamTwoDim(){};

    RamType getRow()
    {
        return row;
    }

    RamType getColumn()
    {
        return column;
    }



private:
    RamType column = 11; //
    RamType row = 32;    //
};