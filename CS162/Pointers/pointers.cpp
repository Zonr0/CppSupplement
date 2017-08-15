/*
 * Pointers and Dynamic Memory
 */

int example_one() {
  //Suppose we had a normal int variable
  int foo = 5;

  //Now let's introduce a pointer.
  int * pointer;
  //Instead of holding a useable value like normal variables do, a pointer
  //contains a reference to another variable. Think of it like a set of
  //directions to a house.
  
  //Now, we can get the directions to our house by using the & operator
  //and catching it in our new pointer variable.
  pointer = &foo;
  
  //So now that we have directions to our house/variable, we can follow
  //the directions and do something with our original house/variable. This
  //is called dereferencing, and it uses the * operator.
  int firstRead = *pointer; //firstRead is 5;

  //However, just like directions to a house, if we change the contents
  //of our house, then the contents are changed no matter how we get there!
  foo = 10;
  int secondRead = *pointer; //secondRead is 10;

  //We don't just have to read the data we're pointing to. We can write as
  //well. Using our metaphor, I can follow the directions to my friend's
  //house, and can move all the furniture around. This might cause our
  //friend a nasty shock though!
  *pointer = 15;
  int thirdRead = foo; // thirdRead is 15

  //In fact, it doesn't matter how many copies of the directions we make,
  //they all lead to the same house.
  int * pointerTwo = &foo;
  int * pointerThree = pointer;
  *pointer = 20;

  //All of these new variables are equal to 20.
  int fourthRead = foo;
  int fifthRead = *pointer;
  int sixthRead = *pointerTwo;
  int seventhRead = *pointerThree;

  //It's very important to internalize this. Drawing pointer diagrams will
  //help visualize this in the beggining.
  
  std::cout << "Example 1:" << std::endl;
  std::cout << "Outputting all of the reads as proof: " << std::endl;
  std::cout << "first: " << firstRead << std::endl;
  std::cout << "second: " << secondRead << std::endl;
  std::cout << "third: " << thirdRead << std::endl;
  std::cout << "fourth: " << fourthRead << std::endl;
  std::cout << "fifth: " << fifthRead << std::endl;
  std::cout << "sixth: " << sixthRead << std::endl;
  std::cout << "seventh: " << seventhRead << std::endl;

  return 1;
}

int example_two() {
  
}

int main() {

  example_one();
  example_two();

}
