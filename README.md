# Advanced-Object-Oriented-Design-Projects

## FileFormatConverter ##

In this project, I applied the Abstract Factory, Singleton, Prototype, and Builder software design patterns. 


* The FileConverterFactory is an abstract factory which can create families of FileReaders and FileBuilders. Only one instance of the FileConverterFactory can exist throughout the application.

* FileReader is an interface with a member variable of type string which stores the results of reading the file. The implementation of this interface I've provided, BasicFileReader, is a bit trivial. However, it's been written such that more advanced file readers can be implemented and used in the same way. The string provided by the FileReader can then be manipulated by the FileBuilder.

* FileBuilder is an interface with two member variables: a map of character-to-character pairs, and a string. The map indicates how characters should be replaced in a file (e.g ':' to '-'), and it can hold as many replacements as deemed necessary. When provided a string through the *buildString* function, the FileBuilder will make the  character replacements indicated by *m_tokens*. The string, *m_updatedFileContents*, holds the string which has been updated to reflect on the characer replacements. Note: For flexibility, *m_tokens* could be converted to a map of string-to-string, but I think this is sufficient for the application. The FileBuilder can be cloned and have the contents of the map modified to suit a different set of conversion.


--TBC--
