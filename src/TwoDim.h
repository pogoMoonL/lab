

// void printSolution(int sol[N][N])
// {
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             std::cout << sol[i][j] << std::endl;
//         }
//     }
// }

typedef unsigned int RamType;

class TwoDim
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

    void printSolution(int **, int);

private:
    RamType column = 11; //
    RamType row = 32;    //
};