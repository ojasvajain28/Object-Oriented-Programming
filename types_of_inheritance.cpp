/*


    Single Inheritance
    Multiple Inheritance
    Multilevel Inheritance
    Hierarchical Inheritance
    Hybrid Inheritance





1. **Single Inheritance**:
   - Single inheritance is a type of inheritance where a derived class inherits from a 
   
   single base class.
   - The derived class inherits all the member variables and member functions of the base
   
    class, except for constructors and destructors.
   - Single inheritance establishes a simple one-to-one relationship between the derived
   
    and base classes.
   - It promotes code reuse and allows derived classes to extend or specialize the functionality
   
    of the base class.

2. **Multiple Inheritance**:
   - Multiple inheritance is a type of inheritance where a derived class can inherit from multiple
   
    base classes.
   - The derived class inherits all the member variables and member functions from each base 
   
   class.
   - Multiple inheritance allows a class to combine features and functionalities from different
   
    sources, enhancing code reuse and flexibility.
   - It introduces the Diamond Problem, where two base classes of a derived class share a common
   
    base class. Proper care must be taken to resolve ambiguity in such cases.

3. **Multilevel Inheritance**:
   - Multilevel inheritance is a type of inheritance where a derived class becomes the base 
   
   class for another derived class.
   - It forms a chain of inheritance, where each derived class inherits from the class above
   
    it in the hierarchy.
   - Multilevel inheritance allows the derived classes to inherit the properties and behavior
   
    of their respective base classes in a hierarchical manner.
   - It helps in creating a specialized hierarchy of classes, with each derived class adding
   
    additional features to the inherited ones.

4. **Hierarchical Inheritance**:
   - Hierarchical inheritance is a type of inheritance where multiple derived classes inherit
   
    from a single base class.
   - Each derived class shares the common properties and behavior defined in the base class
   
    while adding its own unique features.
   - Hierarchical inheritance allows the creation of multiple related classes with a shared 
   
   base class, promoting code reuse and modular design.

5. **Hybrid Inheritance**:
   - Hybrid inheritance is a combination of multiple inheritance and multilevel or hierarchical 
     inheritance.

   - It involves multiple base classes and derived classes that inherit from them,
    forming a complex inheritance structure.

   - Hybrid inheritance allows for a wide range of possibilities in class 
   relationships and promotes code reuse, flexibility, and specialization.



*/