#ifndef SUM_FUNCTOR_H
#define SUM_FUNCTOR_H

template<class Type>
class SumFunctor
{
public:
    SumFunctor(const std::vector<Type> &data)
    {
        m_sum = static_cast<Type>(0);
        std::for_each(data.begin(), data.end(), [&] (const Type &element) {m_sum += element;});
    }
    Type operator()()
    {
        return m_sum;
    }
private:
    Type m_sum;
};

#endif // SUM_FUNCTOR_H
