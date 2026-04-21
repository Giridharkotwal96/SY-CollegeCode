/*
Define an exception called NoMatchException that is thrown when a string is not
equal to India. Write a program that uses this Exception
*/

class NoMatchException extends Exception{
NoMatchException(String message)
super(message);
}