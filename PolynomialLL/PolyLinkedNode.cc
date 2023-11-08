class PolyLinkedNode {
    public:
        ~PolyLinkedNode();

    private:
        float coefficient_;
        int exponent_;
        PolyLinkedNode* next_;
};

class PolyLinkedList {
    PolyLinkedNode head_;
    public:
        PolyLinkedList();
        ~PolyLinkedList();
        // Function to insert a 
        // node at the end of the 
        // linked list. 
        void insertNode(int); 
    
        // Function to print the 
        // linked list. 
        void printList(); 
    
        // Function to delete the 
        // node at given position 
        void deleteNode(int); 
};
