/*
    🟧 What is STL?

    C++ STL stands for the "Standard Template Library." It is a powerful and extensive
    collection of template classes and functions in the C++ programming language that
    provides general-purpose classes and functions with templates that implement many
    popular and commonly used algorithms and data structures.

    The C++ STL is an essential part of the C++ Standard Library, and it plays a crucial
    role in simplifying and accelerating C++ software development. It offers a wide range
    of data structures (containers) and algorithms that can be easily used in C++ programs,
    allowing developers to focus on solving specific problems rather than reinventing
    the wheel for common tasks.
*/

/*
    🟧 Why we need STL ?
    The C++ Standard Template Library (STL) is a critical component of the C++ Standard
    Library, and it serves several important purposes in C++ programming. Here are some
    key reasons why we need STL:

    🔶 Efficiency: STL provides highly optimized and efficient implementations of commonly
    used data structures and algorithms. These implementations are typically developed
    and tested by experts, ensuring that they perform well in various scenarios. Using
    STL can save you the time and effort required to implement these data structures
    and algorithms from scratch.

    🔶 Productivity: STL promotes code reuse and reduces the need to reinvent the wheel.
    It offers a wide range of container classes (like vectors, lists, sets, and maps)
    and algorithms (such as sorting and searching) that can be readily used in your
    programs. This leads to faster development and more maintainable code.

    🔶 Consistency: STL provides a standardized and consistent interface for working with
    data structures and algorithms. This consistency makes it easier to learn and use
    the library effectively. Once you understand how to use one STL container or
    algorithm, you can apply similar knowledge to others.

    🔶 Portability: Code written using STL is generally more portable across different
    compilers and platforms. The library is part of the C++ standard, ensuring that
    it is available and behaves consistently across compliant compilers.

    🔶 Safety: STL helps reduce common programming errors, such as buffer overflows and
    memory leaks, by encapsulating low-level memory management and providing safer
    alternatives. For example, smart pointers in STL (unique_ptr, shared_ptr) help
    manage memory automatically, reducing the risk of memory-related issues.

    🔶 Maintainability: Code using STL tends to be more maintainable because it leverages
    well-tested and standardized components. This makes it easier for developers to
    understand and modify code written by others or by their past selves.

    🔶 Performance Optimization: STL algorithms are designed to work efficiently with
    different container types, and they often outperform hand-rolled implementations.
    This allows you to focus on your application's logic rather than low-level
    performance optimizations. 

    🔶 Expressiveness: STL promotes expressive code by providing a high-level interface
    for working with data structures and algorithms. This can lead to more readable
    and concise code, making your programs easier to understand and maintain.

    🔶 Community and Rexs: STL has a vast user community, which means there are
    numerous tutorials, books, and online rexs available to help you learn and
    use it effectively. You can tap into this wealth of knowledge to improve
    your C++ programming skills.
*/

/*
    🔰 Common Components in STL
    🔶 Containers : vector, list, queue, stack, set, map etc
    🔶 Algorithms: sort(), binary_search(), reverse() etc
    🔶 Iterators
    🔶 Functors
*/

/*
    🟧 Containers: Containers in C++ STL are classes or data structures that are designed to
    store and manage collections of objects. They provide a standardized way to store,
    retrieve, and manipulate data in various ways. C++ STL provides a variety of container
    classes, each with its own characteristics and use cases.
*/

/*
    🔰 Vector:
    🔶 Dynamic array that can grow or shrink in size.
    🔶 Allows fast random access to elements.
    🔶 Insertion and removal of elements at the end is efficient.
    🔶 Suitable for most scenarios when elements need to be stored in a linear sequence.



    🔰 Member Functions:
    🔶 begin(): Returns an iterator pointing to the first element in the vector.
    🔶 end(): Returns an iterator pointing to the position just after the last element in the vector.
    🔶 size(): Returns the number of elements in the vector.
    🔶 empty(): Checks if the vector is empty (i.e., whether its size is 0).
    🔶 capacity(): Returns the number of elements that the vector can hold before needing to
        allocate more space.
    🔶 reserve(size_type n): Requests that the vector capacity be increased to at least n elements,
        potentially reducing the number of reallocations.
    🔶 max_size(): Returns the maximum number of elements that the vector can hold due to system
        or library limitations.
    🔶 front(): Accesses the first element in the vector.
    🔶 back(): Accesses the last element in the vector.
    🔶 operator[](size_type n): Accesses the element at the specified index without bounds checking.
    🔶 at(size_type n): Accesses the element at the specified index with bounds checking.
    🔶 push_back(const T& value): Adds an element to the end of the vector.
    🔶 pop_back(): Removes the last element from the vector.
    🔶 insert(iterator position, const T& value): Inserts a new element before the specified
        position in the vector.
    🔶 erase(iterator position) or erase(iterator first, iterator last): Removes one or more
        elements from the vector starting at the specified position.
    🔶 clear(): Removes all elements from the vector, which are destroyed, and leaves it
        with a size of 0.
    🔶 swap(vector& x): Swaps the contents of the vector with those of another vector of
        the same type, including their sizes and capacities.
*/

