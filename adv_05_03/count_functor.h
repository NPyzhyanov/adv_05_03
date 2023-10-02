#ifndef COUNT_FUNCTOR_H
#define COUNT_FUNCTOR_H

class CountFunctor
{
public:
    CountFunctor(const std::vector<int> &data)
    {
        m_count = 0;
        std::for_each(data.begin(), data.end(), [&] (const int &element) {if (element % 3 == 0) {m_count++;}});
    }
    operator()() {return m_count;}

private:
    int m_count;
};

#endif // COUNT_FUNCTOR_H
