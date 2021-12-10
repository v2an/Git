#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <istream>
#include <set>
#include <unordered_set>

// ======================= EXRSZ 2 =======================
class textSentenses
{
private:
    std::string sentence;
public:
    textSentenses(std::string input) : sentence(input) {}

    bool operator< (const textSentenses& other) const
    {
        return (sentence.size() < other.sentence.size());
    }
    friend std::ostream& operator<< (std::ostream& out, const textSentenses& sout) {
        out << sout.sentence << " /Sentence size: " << sout.sentence.size() << std::endl;
        return out;
    }
};

// ======================= EXRSZ 1 =======================
template<typename InIt>
void PrintUnique(InIt begin, InIt end)
{
    std::unordered_set<std::string> output1;
    for (auto iter = begin; iter != end; ++iter )
    {
        output1.insert(*iter);
    }
    for (auto out : output1)
    {
        std::cout << out << " ";
    }
}

int main()
{
    // ======================= EXRSZ 1 =======================
    std::cout << std::endl << "======================= EXRSZ 1 =======================" << std::endl;
    std::vector<std::string> vs1;
    std::string s = "1";
    std::cout << "Enter string: ";
    std::getline(std::cin, s);
    std::stringstream Input(s);
    s = " ";
    while (Input >> s)
    {
         vs1.push_back(s);
    }
    PrintUnique(vs1.begin(), vs1.end());
    std::cout << std::endl;
    
    std::cout << "----------------------------------------" << std::endl << "Enter string 2: ";
    s = " ";
    std::getline(std::cin, s);
    std::vector<std::string> v1;
    std::stringstream Input2(s);
    std::string i;
    while (Input2 >> i)
    {
        v1.push_back(i);
    }
    PrintUnique(v1.begin(), v1.end());
    std::cout << std::endl;

    std::cout << "----------------------------------------" << std::endl << "Enter string 3: ";
    std::list<std::string> L1;
    s = " ";
    std::getline(std::cin, s);
    std::stringstream Input3(s);
    while (Input3 >> i)
    {
        L1.push_back(i);
    }
    PrintUnique(L1.begin(), L1.end());
    std::cout << std::endl;
    std::cout << std::endl << "======================= EXRSZ 2 =======================" << std::endl;

    // ======================= EXRSZ 2 =======================
    std::cout << "Enter some sentenses: " << std::endl;
    std::multiset<textSentenses> Exrsz2MainData;
    char InpChar;
    std::string TmpStr;
    while (std::cin.get(InpChar))   // Почему-то, чтобы выйти из цикла, требуется дополнительно ввести ещё 1 символ новой строки.
    {                               // Ну, грубо говоря, ещё раз жмякнуть enter.
        if (InpChar == '\n')
            break;
        if (InpChar != '!' && InpChar != '.' && InpChar != '?')
        {
            TmpStr = TmpStr + InpChar;
        }
        else
        {
            TmpStr = TmpStr + InpChar;
            Exrsz2MainData.insert(TmpStr);
            // Может это было и не правильно, но когда я пытался без класса с перегрузкой < вставлять в сэт строки, то они сортировались по алфавиту.
            // Поэтому сделал класс и перегрузил его
            TmpStr.clear();
            std::cin.get(InpChar);  // Это для того, чтобы вывести из буфера пробел после "." в следующем предложении. 
        }                           // Ну, может и избыточная операция, до аналога не додумался.
    }
    for (auto out : Exrsz2MainData) 
    {
        std::cout << out;
    }
    return 0;
}
