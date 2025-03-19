module lockbased.queue;

using concurrent::lockbased::queue = queue;

template <typename T>
T& queue::front() const
{
}

template <typename T>
const T& queue::front() const
{
}

template <typename T>
T& queue::back() const
{
}

template <typename T>
const T& queue::back() const
{
}

bool queue::empty() const
{
}

std::size_t queue::size() const
{
}

template <typename T>
void queue::push(const T& value)
{
}

template <typename T>
void queue::push(T&& value)
{
}

template <typename T>
void queue::push_range(std::initializer_list<T> range)
{
}

template<typename ...Args>
void queue::emplace(Args&& ...args)
{
}

template<typename Range>
void queue::emplace_range(Range&& range)
{
}

void queue::pop()
{
}

void queue::swap(queue& other) noexcept
{
}

