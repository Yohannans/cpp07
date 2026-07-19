#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int sizeOfArray;
	public:
		Array() : array(nullptr), sizeOfArray(0) {}

		Array(unsigned int n) : array(new T[n]()), sizeOfArray(n) {}

		Array(const Array &other) : array(new T[other.sizeOfArray]()), sizeOfArray(other.sizeOfArray)
		{
			for (unsigned int i = 0; i < sizeOfArray; i++)
				array[i] = other.array[i];
		}

		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] array;
				sizeOfArray = other.sizeOfArray;
				array = new T[sizeOfArray]();
				for (unsigned int i = 0; i < sizeOfArray; i++)
					array[i] = other.array[i];
			}
			return *this;
		}

		~Array()
		{
			delete[] array;
		}

		T &operator[](unsigned int i)
		{
			if (i >= sizeOfArray)
				throw std::out_of_range("Index out of range");
			return array[i];
		}

		unsigned int size() const
		{
			return sizeOfArray;
		}
};


#endif