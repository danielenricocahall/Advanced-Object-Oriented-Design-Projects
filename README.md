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

* Observer Pattern - Each user is an instantiation of a class which implements a Publisher and a Subscriber interface. This ensures that users can subscribe/unsubscribe to other users, and have other users subscribe/unsubscribe to them.

* Flyweight - Users can create instances of Message objects, which are comprised of text (letters a-z, numbers 0-9, emojis). Rather than creating a new object for each character in the message, one instance for each object can be used, and the external state (e.g; font, location in the message, absolute location on screen) of that object can be modified.

* Factory Method - The Flyweight pattern typically utilizes a Factory Method to control the creation of objects. In this context, a factory method would control the instantiation of different characters and symbols.

* Singleton - Since only one instance of each Flyweight object should exist at a time, each Flyweight object is typically implemented using a Singleton.

* Memento - Each user object would have a memento object which regularly saves their state while writing a post (creating a Message object). This ensures that, if their connection was lost, they can log on again and continue writing their post.

* Facade - The interface the user interacts with to write and send messages is a Facade - it hides the details of creating and modifying the Message object, connecting to the Twitter servers, and posting the message in chronological order along with other users in their feed. 

* Iterator - For searching through Message objects in a feed, I would use the iterator pattern. This ensures that I can still traverse through Messages if the implementation changes, or if I want to define a new implementation sometime in the future.

* Command - When a user pushes a button on the frontend to accomplish an action (e.g; send, delete, retweet), the request will be forwarded to a request object. In this way, I can change the implementation of how a request is performed seamlessly. 

* Proxy - To ensure a user isn't either banned or spamming (maybe they've been hacked/a bot is posting on their account), the "submit message" request object firsts connect to a Proxy, which performs several checks before posting the message.

* Prototype - The "Retweet" button will require performing a clone operation on the original Message object. 


