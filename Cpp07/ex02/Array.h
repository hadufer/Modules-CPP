#pragma once

template <class T>
class Array{
    private:
        unsigned int mArrSize;
        T *arr;
    public:
        Array(unsigned int n = 0) : mArrSize(n), arr(new T[mArrSize])
        {}

        Array(const Array &a) : mArrSize(a.mArrSize), arr(new T[mArrSize])
        {
            for (unsigned int i = 0; i < mArrSize; i++)
            {
                arr[i] = a.arr[i];
            }
        }

        ~Array() {
                delete [] arr;
        }

        Array &operator=(const Array &a)
        {
            if (mArrSize > 0)
                delete [] arr;
            mArrSize = a.mArrSize;
            arr = new T[mArrSize];
            for (unsigned int i = 0; i < mArrSize; i++)
            {
                arr[i] = a.arr[i];
            }
            return *this;
        }

        T& operator[](unsigned int idx)
        {
            if (idx >= mArrSize)
                throw Array::BadIndexException();
            return arr[idx];
        }

        const T& operator[](unsigned int idx) const
        {
            if (idx >= mArrSize)
                throw Array::BadIndexException();
            return arr[idx];
        }

        unsigned int getArrSize() const
        {
            return mArrSize;
        }

        unsigned int size() const
        {
            return getArrSize();
        }

        class BadIndexException : public std::exception {
            public:
                const char *what() const throw()
                { return (char *)"BadIndexException";}
        };
};

template<typename T> std::ostream	&operator<<(std::ostream &o, const Array<T> &array)
{
	unsigned int	max = 5;

	o << "[" << array.getArrSize() << "] ";
	for (unsigned int i = 0; i < array.getArrSize() && i < max; i++)
		o << array[i] << " ";
	if (max < array.getArrSize())
		o << "...";
	o << std::endl;
	return (o);
}
