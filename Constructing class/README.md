QUESTION :

A  warehouse  management  program  needs  a  class  to  represent  the  articles  in stock.Define  a  class  called Articlefor  this  purpose  using  the  data  members: Article  Name,  Article Number,  Sales  Price.   Declare  the  constructor  with  default arguments for each parameter to ensure that a default constructor exists for the class.  Access  methods  for  the  data  members  are  to  be  defined  as  inline. Negative prices must not exist. If a negative price is passed as an argument, the price must be stored as 0.0.

Implement  the  constructor,  and  the  method   Print().    Also  define  a  global variable  for  the  number  of  Article  type  objects.  The  constructor  must  use  the arguments passed to it to initialize the data members, additionally increment the global counter. 

The application program tests the Article class. Define four objects belonging to the Article class type:

1.  A global object and a local object in the main function.

2. Two local objects in a function test()that is called twice by main().One object needs a static definition. The function test()displays these objects and outputs a message when it is terminated.

Use articles of your own choice to initialize the objects. Additionally, callthe access methods to modify individual data members and display theobjects on screen.
