#include <iterator>
#include <cstdlib>

class RandomIterator : public std::iterator<std::input_iterator_tag, unsigned int> {
private:
    size_t iter_count;
    size_t increment = 2;
public:
    RandomIterator(
        size_t iter_count
    ) : iter_count(iter_count) {
    }

    bool operator!=(RandomIterator const& other) const {
        return this->iter_count != other.iter_count;
    }

    bool operator==(RandomIterator const& other) const {
        return this->iter_count == other.iter_count;
    }

    typename RandomIterator::reference operator*() const {
        static unsigned int value = 0;
        value = value + increment;
        unsigned int* pvalue = &value;
        return *pvalue;

    }

    RandomIterator& operator++() {
        this->iter_count++;
        return *this;
    }
};


class Generator {
private:
    size_t n;
public:
    using iterator = RandomIterator;
    using const_iterator = RandomIterator;

    Generator(size_t n) : n(n) {}

    iterator begin() {
        return iterator(0);
    }

    iterator end() {
        return iterator(n);
    }

    const_iterator cbegin() const {
        return iterator(0);
    }

    const_iterator cend() const {
        return iterator(n);
    }
};