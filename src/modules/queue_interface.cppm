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
			~queue() = default;

			T& front() const = 0; 
			const T& front() const = 0;

			T& back() const = 0;
			const T& back() const = 0;
			
			bool empty() const = 0;
			std::size_t size() const = 0;

			void push(const T& value) = 0;
			void push(T&& value) = 0;

			void push_range(std::initializer_list<T> range) = 0;

			template<typename ...Args>
			void emplace(Args&& ...args) = 0;

			template<typename Range>
			void emplace_range(Range&& range) = 0;

			void pop() = 0;

			void swap(queue& other) noexcept = 0;
	};

}
