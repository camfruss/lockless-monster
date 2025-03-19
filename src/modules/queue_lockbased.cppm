export module queue.lockbased;

import queue.interface;
import <mutex>;
import <queue>;


export namespace concurrent::lockbased 
{

	template <typename T>
	class queue : public concurrent::queue<T>
	{
		private:
			std::queue<T> m_queue;
			std::mutex m_mutex;		
	};

}
