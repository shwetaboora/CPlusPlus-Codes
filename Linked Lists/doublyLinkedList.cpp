// doubly linked list
// at head pointer it points to null and the next pointer
// and in the between it points to the previous address as well as the next address
// advantage of this is we can traverse in both the directions forward and backwards
// it have 3 data members prev , data, next
// next and prev have data type of node* but the data can be of any type

//  it takes extra storage
// while doing operations we have to modify more no of pointers while doin work
// STL provides us two types of list one is forward list(this one is singly linked list) and another one is list(this one is doubly linked list)