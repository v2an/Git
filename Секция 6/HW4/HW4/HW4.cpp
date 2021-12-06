#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <numeric>
#include <cstdlib>

void insert_sorted(std::vector<int>& untrvector, int i)
{
    std::vector<int>::iterator it = std::lower_bound(begin(untrvector), end(untrvector), i);
    untrvector.insert(it, i);
}

template< typename  container, typename  input>
void insert_sorted_temp(container& untrvector, input i)
{
    untrvector.insert((std::lower_bound(begin(untrvector), end(untrvector), i)), i);
}

std::vector<double> operator-(const std::vector<double>& a, const std::vector<int>& b)
{
    std::vector<double> c(a.size());
    for (size_t i = 0; i < a.size(); ++i)
    {
        c[i] = a[i] - b[i];
    }
    return c;
}

int main()
{
    std::vector<int> exrsz1(30);
    std::generate(exrsz1.begin(), exrsz1.end(), []() {return (std::rand() % 57); });
    std::sort(exrsz1.begin(), exrsz1.end());
    std::cout << "Vector before insert:\t";
    std::for_each(exrsz1.begin(), exrsz1.end(), [](int i) { std::cout << i << " "; });
    std::cout << std::endl;
    insert_sorted(exrsz1, 30);
    std::cout << "1'st insert:\t\t";
    std::for_each(exrsz1.begin(), exrsz1.end(), [](int i) { std::cout << i << " "; });
    std::cout << std::endl;
    insert_sorted_temp(exrsz1, 27);
    std::cout << "2'nd insert:\t\t";
    std::for_each(exrsz1.begin(), exrsz1.end(), [](int i) { std::cout << i << " "; });
    std::cout << std::endl << std::endl;


    // ======================= 2 =========================
    std::vector<double> analog(10);
    std::vector<int> digital(10);
    std::generate(analog.begin(), analog.end(), [&]() -> double 
        {
            return (rand() % 1000) / 30.0;
        });
    //std::for_each(analog.begin(), analog.end(), [](double i) { std::cout << i << " "; });
    std::copy(analog.begin(), analog.end(), digital.begin());
    //std::for_each(digital.begin(), digital.end(), [](int i) { std::cout << i << " "; });
    std::vector<double> error = analog - digital;
    //std::for_each(error.begin(), error.end(), [](double i) { std::cout << i << " "; });
    //std::cout << std::endl;
    transform(error.begin(), error.end(), error.begin(), [](double i)
        {
            return (i*i); 
        });
    //std::for_each(error.begin(), error.end(), [](double i) { std::cout << i << " "; });
    double result = std::accumulate(begin(error), end(error), 0.0);
    std::cout << std::endl << "Error is: " << result << std::endl;
}
