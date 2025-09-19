# arrayListType
This class specifies the members to implement the basic properties of array-based lists.

The provided `arrayListType` template class is a basic implementation of an array-based list in C++. Here's an overview of its key features and structure:

## Features:
1. **Template Class**: The class uses a template (template <class elemType>) to work with any data type.
1. **Dynamic Array Management**: It dynamically allocates memory for the array and resizes or manages the list as needed.
1. **Basic Operations**:
  - `insertAt()`, `insertEnd()`: Insert items at specified positions or at the end.
  - `removeAt()`, `remove()`: Remove items from specified locations or by searching.
  - `seqSearch()`: Sequential search to find an item in the list.
  - `isFull()`, `isEmpty()`: Check if the list is full or empty.
  - `retrieveAt()`, `replaceAt()`: Retrieve or replace an element at a specific index.
  - `clearList()`: Reset the list to empty.
1. **Operator Overloading**: Overloads the assignment operator (operator=) to handle deep copying of lists.
1. **Constructor and Destructor**: The class manages dynamic memory allocation for the array and ensures proper cleanup with the destructor (`~arrayListType()`).
1. **Copy Constructor**: Implements a copy constructor for creating deep copies of arrayListType objects.
# ArrayListAnimal
