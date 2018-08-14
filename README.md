# Advanced-Object-Oriented-Design-Projects

## FileFormatConverter ##
![alt text](https://github.com/danielenricocahall/Advanced-Object-Oriented-Design-Projects/blob/master/FileFormatConverter/Quiz1-FileConverter.png)
In this project, I applied the Abstract Factory, Singleton, Prototype, and Builder software design patterns. 


* The FileConverterFactory is an abstract factory which can create families of FileReaders and FileBuilders. BasicFileDelimitingFactory is an implementation of the FileConverterFactory, and only one instance of the FileConverterFactory can exist throughout the application.

* FileReader is an interface with a member variable of type string which stores the results of reading the file. The implementation of this interface I've provided, BasicFileReader, is a bit trivial. However, it's been written such that more advanced file readers can be implemented and used in the same way. The string provided by the FileReader can then be manipulated by the FileBuilder.

* FileBuilder is an interface with two member variables: a map of character-to-character pairs, and a string. The map indicates how characters should be replaced in a file (e.g ':' to '-'), and it can hold as many replacements as deemed necessary. When provided a string through the *buildString* function, the FileBuilder will make the  character replacements indicated by *m_tokens*. The string, *m_updatedFileContents*, holds the string which has been updated to reflect on the characer replacements. Note: For flexibility, *m_tokens* could be converted to a map of string-to-string, but I think this is sufficient for the application. The FileBuilder can be cloned and have the contents of the map modified to suit a different set of conversion.

* FileWriter is the class which, provided an instance of FileBuilder and a string containing the original file contents, will call the FileBuilder's *buildString* function on the string, and write the new contents to a file. 

The functionality of this architecture can be verified by running the driver (*Driver.cpp*). 


## Designing Twitter ##

* Observer Pattern - Each user is an instantiation of a class which implements a Publisher and a Subscriber interface. This ensures that users can subscribe to other users, and have other users subscribe to them.

* Flyweight - Users can create instances of message objects, which are comprised of text (letters a-z, numbers 0-9, emojis). Rather than creating a new object for each character in the message, one instance for each object can be used, and the external state (e.g; font, location in the message, absolute location on screen) of that obect can be modified.

* Factory Method - The Flyweight pattern typically utilizes a Factory Method to control the creation of objects. In this context, a factory method would control the instantiation of different characters and symbols.

* Singleton - Since only one instance of each Flyweight object should exist at a time, each Flyweight object is typically implemented using a Singleton.

* Memento - Each user object would have a memento object which regularly saves their state while writing a message. This ensures that, if their connection was lost, they can log on again and continue writing their message.



