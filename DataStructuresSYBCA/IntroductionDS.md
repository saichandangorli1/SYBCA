Introduction to DataStructures;

DataStructure:
- DS is a representation of the logical relationship existing between indivisual elements of Data.
- In other words , a DS is a way of organizing all data items that considersnot only the elements stored but also their relationship to each other.

    -  DATA=> Unit of information stored in the memory;
    -  STRUCTURE=> Organizing it in various structures;

- DS affects the design of both structural and functional aspects of program.


              |----Algorithm (The step by step procedure explained in English like language.)
              |
  . LOGIC ----|
              |
              |----Flowchart (Pictorial representation of instruction set.)


    Now what is a Program?
     - Program = Algorithm + DS
     - A program is a mixture of Algorithm which is a step by step representation in English like language and the structual management of data in the instruction set is nothing but DS and altogetherly it adds up and provides us the Program.

-Self Referential Structure:
-SRS are those structures that have one or more pointers which point to the same type of structure as their member.

    struct node{
        int data1;
        char data2;
        struct node* link;
    };
-Basically Structures pointing to the same type of structures are SRS in nature.

*Classification of DS:
    -Primitive DS
    -Non-Primitive DS

                                             DS
                                             |
                               ----------------------------
                               |                          |
                           Primitive                Non-Primitive
                               |                          |
                   ---------------------------            |
                   |       |         |       |            |
                  int    float      char  pointer         |
                                                          |
                                       ---------------------------------------
                                       |                                     |
                                   linear-List                         Non-linear-List
                                       |                                     |
                         ------------------------------           ------------------------
                         |        |         |         |           |                      |
                       Array  Linked-L    Stack     Queue       Graphs                  Trees