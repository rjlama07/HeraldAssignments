package Exceptions;

public class InvalidCredentialsException extends RuntimeException {
    public InvalidCredentialsException(String e) {
        super(e);
    }

}
