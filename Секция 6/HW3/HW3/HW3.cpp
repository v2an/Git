#include <iostream>
#include <list>
#include <tuple>
#include <vector>

// ===================================== EXRSZ 1 =====================================
void PutArSummInEndofList(std::list<double>& edList)
{
    std::pair<double, double> edit{0, 0};
    for (auto value : edList)
    {
        edit.first += value;
        ++edit.second;
    }
    edList.push_back(edit.first / edit.second);
}

// ===================================== EXRSZ 2 =====================================
class Matrix
{
private:
    std::vector<std::vector <int>> matrix;
    double det(double** mat, int Sz)
    {
        double det__;
        int sub_j, s;
        double** subT;
        switch (Sz)
        {
        case 1:
            return mat[0][0];
        case 2:
            return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
        default:
            if (Sz < 1) return nan("1");
            subT = new double* [Sz - 1];
            det__ = 0;
            s = 1;
            for (int i = 0; i < Sz; i++)
            {
                sub_j = 0;
                for (int j = 0; j < Sz; j++)
                    if (i != j)
                        subT[sub_j++] = mat[j] + 1;

                det__ = det__ + s * mat[i][0] * det(subT, Sz - 1);
                s = -s;
            };
            delete[] subT;
            return det__;
        };
    };
public:
    std::pair<int, int> size;
    Matrix()
    {
        size = { 1, 1 };
        for (int i = 0; i < size.first; ++i)
        {
            for (int j = 0; j < size.second; ++j)
            {
                matrix[i][j] = 1;
            }
        }
    }
    Matrix(std::pair<int, int>& siz, std::vector<int>& input)
    {
        int count = 0;
        matrix.resize(siz.second);
        for (int i = 0; i < (siz.first); ++i)
        {
            for (int j = 0; j < (siz.second); ++j)
            {
                if (count < input.size())
                {
                    matrix[i].push_back(input[count]);
                    ++count;
                }
                else
                {
                    matrix[i].push_back(1);
                }
            }
        }
        size = siz;
    }
    void PrintMatrix()
    {
        for (int i = 0; i < size.first; ++i)
        {
            std::cout << "| ";
            for (int j = 0; j < size.second; ++j)
            {
                std::cout << matrix[i][j] << " | ";
            }
            std::cout << std::endl;

        }
    }

    double determinator()
    {
        double** InArr = new double*[size.first];
        for (int i = 0; i < size.first; ++i)
        {
            InArr[i] = new double[size.first];
            for (int j = 0; j < size.second; ++j)
            {
                InArr[i][j] = matrix[i][j];
            }
        }
        double  determ = det(InArr, size.first);
        delete[] InArr;
        return determ;
    }
};

// ===================================== EXRSZ 3 =====================================

class CustomIterator
{
public:
    std::vector<int>::iterator first_iter;
    std::vector<int>::iterator last_iter;
    std::vector<int>::iterator current_iter;
    std::vector<int>::reverse_iterator rfirst_iter;
    std::vector<int>::reverse_iterator rlast_iter;
    std::vector<int>::reverse_iterator reverse_current;
    CustomIterator()
    {

    }
    CustomIterator(std::vector<int>& vec)
    {
        first_iter = vec.begin();
        last_iter = vec.end();
        current_iter = first_iter;
        rfirst_iter = vec.rbegin();
        rlast_iter = vec.rend();
        reverse_current = rfirst_iter;
    }
    void increase()
    {
        ++current_iter;
    }
    void decrease()
    {
        --current_iter;
    }
    void drop()
    {
        current_iter = first_iter;
        reverse_current = rfirst_iter;
    }
};

int main()
{
    // ===================================== EXRSZ 1 =====================================
    std::list<double> exrsz1List{ 0.78, 2135.7, 10, 15.9 };
    PutArSummInEndofList(exrsz1List);
    for (auto value : exrsz1List)
    {
        std::cout << value << " / ";
    }
    std::cout << std::endl;

    // ===================================== EXRSZ 2 =====================================
    std::pair<int, int> size{ 3, 3 };
    std::vector<int> matr{ 10, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix matrix1(size, matr);
    matrix1.PrintMatrix();
    std::cout << matrix1.determinator();
    std::cout << std::endl;

    // ===================================== EXRSZ 3 =====================================
    std::vector<int> Ex3Vec{ 1, 3, 5, 6, 7, 8, 9 };
    CustomIterator Iter1(Ex3Vec);
    for (Iter1.current_iter; Iter1.current_iter < Iter1.last_iter; Iter1.increase())
    {
        std::cout << *Iter1.current_iter << " ";
    }
    std::cout << std::endl;
    for (Iter1.reverse_current; Iter1.reverse_current < Iter1.rlast_iter; ++Iter1.reverse_current)
    {
        std::cout << *Iter1.reverse_current << " ";
    }
}
