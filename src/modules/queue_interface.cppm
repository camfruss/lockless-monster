export module queue.interface;

export namespace concurrent 
{

	/*!
 	*  An unbounded queue abstract class 
	*/
	template <typename T>
	class queue 
	{
		public:
			queue() = default;
			virtual ~queue() = default;

			virtual T& front() const = 0; 
			virtual const T& front() const = 0;

			virtual T& back() const = 0;
			virtual const T& back() const = 0;
			
			virtual bool empty() const = 0;
			virtual std::size_t size() const = 0;

			virtual void push(const T& value) = 0;
			virtual void push(T&& value) = 0;

			virtual void push_range(std::initializer_list<T> range) = 0;

			template<typename ...Args>
			virtual void emplace(Args&& ...args) = 0;

			template<typename Range>
			virtual void emplace_range(Range&& range) = 0;

			virtual void pop() = 0;

			virtual void swap(queue& other) noexcept = 0;
	};

}
