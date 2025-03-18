export module concurrent.queue;

export namespace concurrent::queue 
{

	/*!
 	*  An unbounded lock-free queue. 
	*/
	template <typename T, >
	class queue 
	{
		public:
			queue() = default;
			~queue() = default;

			T& front() const; 
			const T& front() const;

			T& back() const;
			const T& back() const;
			
			bool empty() const;
			std::size_t size() const;

			void push(const T& value);
			void push(T&& value);

			void pop();

			void swap(queue& other) noexcept;

		private:
			// 
	};

}
